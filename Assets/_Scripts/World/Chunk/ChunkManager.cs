
using System.Collections.Concurrent;
using System.Collections.Generic;
using UnityEngine;

public class ChunkManager : MonoBehaviour
{
    public readonly ConcurrentDictionary<Vector2Int, Chunk> chunks = new();
    public TerrainGenerator terrainGenerator;
    public readonly object GenerationLock = new();

    public Chunk GetChunk(Vector2Int pos)
    {
        if (!ChunkExistsAt(pos))
        {
            var chunk = new Chunk(pos);
            chunks.TryAdd(pos, chunk);
        }
        
        return chunks[pos];
    }

    public bool ChunkExistsAt(Vector2Int pos)
    {
        return chunks.ContainsKey(pos);
    }
    
    public bool ChunkLoadedAt(Vector2Int pos)
    {
        return ChunkExistsAt(pos) && chunks[pos].isLoaded;
    }

    public void GenerateTerrain(int x, int z)
    {
        for (int nx = -1; nx <= 1; ++nx)
        {
            for (int nz = -1; nz <= 1; ++nz) {
            
                LoadChunk(new Vector2Int(x + nx, z + nz));
            }
        }
    }

    public void LoadChunk(Vector2Int pos)
    {
        var chunk = GetChunk(pos);
        
        if (chunk.isLoaded)
        {
            chunk.SetUnloadedBlocks();
            return;
        }

        var newChunk = new Chunk(pos);
        newChunk.Load(terrainGenerator);
        newChunk.SetUnloadedBlocks();
        
        lock (GenerationLock)
        {
            chunks[pos] = newChunk;
        }
    }
    
    public void UnloadChunk(Vector2Int pos)
    {
        if (ChunkLoadedAt(pos))
        {
            foreach (var section in chunks[pos].chunkSections)
            {
                WorldRenderer.Instance.RemoveSection(section);
            }
            chunks.Remove(pos, out _);
        }
    }
    
    public BiomeId GetBiomeAt(Vector2Int pos)
    {
        return terrainGenerator.GetBiomeId(
            GetChunk(new Vector2Int(pos.x / WorldConstants.chunk_size, pos.y / WorldConstants.chunk_size)), pos.x, pos.y);
    }

    public void Clear()
    {
        chunks.Clear();
    }
}
