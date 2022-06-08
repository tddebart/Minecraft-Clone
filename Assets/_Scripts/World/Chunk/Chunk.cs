
using System;
using System.Collections.Generic;
using UnityEngine;

public class Chunk : IChunk
{
    public Vector2Int position;
    public Vector3Int globalPos => new Vector3Int(position.x * WorldConstants.chunk_size, 0, position.y * WorldConstants.chunk_size);
    public bool isLoaded;
    public bool updateMesh;
    public int busyLevel = 0;
    public int[,] highestBlocks = new int[WorldConstants.chunk_size, WorldConstants.chunk_size];
    
    public static ChunkSection ErrorSection = new(new Vector3Int(404,404,404));
    
    public List<ChunkSection> chunkSections = new();
    private Queue<UnloadedBlock> unloadedBlocks = new();

    public Chunk(Vector2Int pos)
    {
        position = pos;
        
        for (int i = 0; i < WorldConstants.chunk_size; i++)
        {
            for (var j = 0; j < WorldConstants.chunk_size; j++)
            {
                highestBlocks[i, j] = 0;
            }
        }
    }

    public void SetUnloadedBlocks()
    {
        if (unloadedBlocks.Count == 0)
        {
            return;
        }
        
        foreach (var unloadedBlock in unloadedBlocks)
        {
            SetBlockInChunk(unloadedBlock.pos, unloadedBlock.block);
            // TODO: Update ambient occlusion
            // update sunlight
            // update mesh
        }
        
        unloadedBlocks.Clear();
    }

    public void AddUnloadedBlock(UnloadedBlock block)
    {
        unloadedBlocks.Enqueue(block);
    }

    public override Block GetBlock(Vector3Int pos)
    {
        if (OutOfHeightBounds(pos.y))
        {
            return new Block(BlockId.Air);
        }
        else if (OutOfBounds(pos))
        {
            var location = ToWorldPos(pos.x, pos.z);
            if (location.x < 0 || location.y < 0)
            {
                return new Block(BlockId.Air);
            }
            else
            {
                return World.Instance.GetBlock(new Vector3Int(location.x, pos.y, location.y));
            }
        }
        
        return chunkSections[pos.y / WorldConstants.chunk_size].GetBlock(new Vector3Int(pos.x, pos.y % WorldConstants.chunk_size, pos.z));
    }

    public Block GetBlockInChunk(Vector3Int pos)
    {
        if (OutOfHeightBounds(pos.y))
        {
            return new Block(BlockId.Air);
        }
        
        return chunkSections[pos.y / WorldConstants.chunk_size].GetBlock(new Vector3Int(pos.x, pos.y%WorldConstants.chunk_size, pos.z));
    }

    public override void SetBlock(Vector3Int pos, Block block)
    {
        AddSectionsForBlock(pos.y);

        if (OutOfBounds(pos) || isLoaded)
        {
            var location = ToWorldPos(pos.x, pos.z);

            World.Instance.AddUnloadedBlock(new Vector3Int(location.x, pos.y, location.y), block);
            return;
        }
        
        chunkSections[pos.y/WorldConstants.chunk_size].SetBlock(new Vector3Int(pos.x,pos.y % WorldConstants.chunk_size, pos.z), block);
        
        // If the highest block was destroyed
        if (pos.y == highestBlocks[pos.x, pos.z])
        {
            var highBlock = GetBlock(new Vector3Int(pos.x, pos.y--, pos.z));
            while (!highBlock.GetData().isOpaque && pos.y >= 0)
            {
                highBlock = GetBlock(new Vector3Int(pos.x, pos.y--, pos.z));
            }
        }
        // if placed block is the highest now
        else if (pos.y > highestBlocks[pos.x, pos.z])
        {
            highestBlocks[pos.x, pos.z] = pos.y;
        }
    }

    public void MakeMesh()
    {
        foreach (var section in chunkSections)
        {
            if (!section.hasMesh || updateMesh)
            {
                section.MakeMesh();
                World.Instance.chunkRenderQueue.Enqueue(section);
                updateMesh = false;
            }
        }
    }

    public void AddSectionsForBlock(int blockY)
    {
        var index = blockY / WorldConstants.chunk_size;
        AddSectionsForIndex(index);
    }

    public void AddSectionsForIndex(int index)
    {
        while(chunkSections.Count < index + 1)
        {
            AddSection();
        }
    }

    private void AddSection()
    {
        var y = chunkSections.Count;
        chunkSections.Add(new ChunkSection(new Vector3Int(position.x,y,position.y)));
    }

    public ChunkSection GetSection(int index)
    {
        if(index >= chunkSections.Count || index < 0)
        {
            return ErrorSection;
        }
        
        return chunkSections[index];
    }

    public bool OutOfBounds(Vector3Int pos)
    {
        if (pos.x >= WorldConstants.chunk_size)
        {
            return true;
        }
        if(pos.z >= WorldConstants.chunk_size)
        {
            return true;
        }
        
        if(pos.x < 0)
        {
            return true;
        }
        if(pos.z < 0)
        {
            return true;
        }

        if (pos.y < 0)
        {
            return true;
        }
        
        if(pos.y >= chunkSections.Count* WorldConstants.chunk_size)
        {
            return true;
        }
        
        return false;
    }

    public bool OutOfHeightBounds(int y)
    {
        if (y < 0 || y >= chunkSections.Count * WorldConstants.chunk_size)
        {
            return true;
        }

        return false;
    }
    
    private Vector2Int ToWorldPos(int x, int z)
    {
        return new Vector2Int(
            position.x * WorldConstants.chunk_size + x,
            position.y * WorldConstants.chunk_size + z);
    } 

    // Set the block at the given position in chunk coordinates
    public void SetBlockInChunk(Vector3Int pos, Block block)
    {
        AddSectionsForBlock(pos.y);
        
        chunkSections[pos.y/WorldConstants.chunk_size].SetBlockInSection(new Vector3Int(pos.x, pos.y%WorldConstants.chunk_size, pos.z), block);
        
        // If the highest block was destroyed
        if (pos.y == highestBlocks[pos.x, pos.z])
        {
            var highBlock = GetBlock(new Vector3Int(pos.x, pos.y--, pos.z));
            while (!highBlock.GetData().isOpaque && pos.y >= 0)
            {
                highBlock = GetBlock(new Vector3Int(pos.x, pos.y--, pos.z));
            }
        }
        
        // if placed block is the highest now
        else if (pos.y > highestBlocks[pos.x, pos.z])
        {
            highestBlocks[pos.x, pos.z] = pos.y;
        }
    }

    public void Load(TerrainGenerator generator)
    {
        generator.GenerateTerrainFor(this);
        isLoaded = true;
    } 
}
