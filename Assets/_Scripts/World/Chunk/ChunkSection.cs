
using System.Threading.Tasks;
using UnityEngine;

public class ChunkSection : IChunk
{
    public Vector3Int position;
    public Vector3Int globalPos => position * WorldConstants.chunk_size;
    public bool hasMesh;
    public bool hasRenderer;

    public Block[] blocks = new Block[WorldConstants.chunk_volume]; // Y, X, Z
    private Layer[] layers = new Layer[WorldConstants.chunk_size];
    private AABB aabb;

    public ChunkMesh solidMesh = new();
    public ChunkMesh liquidMesh = new();
    
    public ChunkSectionRenderer renderer;
    
    public ChunkSection(Vector3Int pos)
    {
        aabb = new AABB(new Vector3(
                pos.x * WorldConstants.chunk_size, 
                pos.y * WorldConstants.chunk_size, 
                pos.z * WorldConstants.chunk_size),
            
        new Vector3(WorldConstants.chunk_size, WorldConstants.chunk_size, WorldConstants.chunk_size));
        
        position = pos;

        for (var i = 0; i < layers.Length; i++)
        {
            layers[i] = new Layer();
        }
        
        for (var i = 0; i < WorldConstants.chunk_volume; i++)
        {
            blocks[i] = new Block();
        }
    }

    public override void SetBlock(Vector3Int pos, Block block)
    {
        if (OutOfBounds(pos))
        {
            var location = ToWorldCoords(pos);
            world.SetBlock(location, block);
            return;
        }
        
        layers[pos.y].Update(block);
        
        blocks[GetIndex(pos)] = block;
    }
    
    public void SetBlockInSection(Vector3Int pos, Block block)
    {
        layers[pos.y].Update(block);
        
        blocks[GetIndex(pos)] = block;
    }
    
    public override Block GetBlock(Vector3Int pos)
    {
        if (OutOfBounds(pos))
        {
            var location = ToWorldCoords(pos);
            // if (location.x < 0 || location.z < 0)
            // {
            //     return new Block(BlockId.Air);
            // }
            
            return world.GetBlock(location);
        }
        
        return blocks[GetIndex(pos)];
    }

    public ChunkSection GetAdjacent(int dx, int dz)
    {
        var newPos = new Vector2Int(position.x+ dx, position.z + dz);

        return World.Instance.chunkManager.GetChunk(newPos).GetSection(position.y);
    }

    public Layer GetLayer(int y)
    {
        if (y == -1)
        {
            return GetChunk()
                .GetSection(position.y - 1)
                .GetLayer(WorldConstants.chunk_size - 1);
        } 
        else if (y == WorldConstants.chunk_size)
        {
            return GetChunk()
                .GetSection(position.y + 1)
                .GetLayer(0);
        }
        else
        {
            return layers[y];
        }
    }

    public Chunk GetChunk()
    {
        return World.Instance.chunkManager.GetChunk(new Vector2Int(position.x, position.z));
    }

    public void MakeMesh()
    {
        
        hasMesh = true;
        
        ChunkMeshBuilder.BuildMesh(this, ref solidMesh, ref liquidMesh);
    }

    public void UpdateRenderer()
    {
        if (!hasRenderer)
        {
            renderer = WorldRenderer.Instance.RenderSection(this);
            hasRenderer = true;
        }

        Task.Run(() =>
        { 
            renderer.Render();
        });
    }

    public Vector3Int ToWorldCoords(Vector3Int pos)
    {
        return new Vector3Int(
            position.x * WorldConstants.chunk_size + pos.x,
            position.y * WorldConstants.chunk_size + pos.y,
            position.z * WorldConstants.chunk_size + pos.z);
    }
    
    public static int GetIndex(Vector3Int pos)
    {
        // return pos.x + pos.y * WorldConstants.chunk_size + pos.z * WorldConstants.chunk_size * WorldConstants.chunk_size;
        return pos.y * WorldConstants.chunk_area + pos.z * WorldConstants.chunk_size + pos.x;
    }
    
    public static Vector3Int GetPosFromIndex(int index)
    {
        return new Vector3Int(
            index % WorldConstants.chunk_size,
            index / WorldConstants.chunk_area,
            (index / WorldConstants.chunk_size) % WorldConstants.chunk_size);
    }

    public bool OutOfBounds(int value)
    {
        return value < 0 || value >= WorldConstants.chunk_size;
    }
    
    public bool OutOfBounds(Vector3Int pos)
    {
        return OutOfBounds(pos.x) || OutOfBounds(pos.y) || OutOfBounds(pos.z);
    }

    public class Layer
    {
        private int solidBlockCount = 0;
        
        public void Update(Block block)
        {
            if (block.GetData().isOpaque)
            {
                solidBlockCount++;
            }
            else
            {
                solidBlockCount--;
            }
        }
        
        public bool IsAllSolid()
        {
            return solidBlockCount == WorldConstants.chunk_area;
        }
    }
}
