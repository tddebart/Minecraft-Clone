
using System;
using System.Linq;
using UnityEngine;

public class ClassicOverworldGenerator : TerrainGenerator
{
    public Biome[] biomes;
    
    public NoiseGenerator noiseGenerator;

    private Chunk processChunk;
    private int[,] heightMap = new int[WorldConstants.chunk_size, WorldConstants.chunk_size];

    private void Start()
    {
        noiseGenerator = new NoiseGenerator(World.Instance.seed);
    }

    public override void GenerateTerrainFor(Chunk chunk)
    {
        processChunk = chunk;

        GetHeightMap();

        var rnd = new System.Random();
        SetBlocks(Mathf.Max(heightMap.Cast<int>().Max(), 66));
    }

    public void GetHeightMap()
    {
        var getHeightAt = new Func<int, int, float>((x, z) =>
        {
            return noiseGenerator.GetHeight(new Vector2Int(x,z), processChunk.position);
        });
        
        var bottomLeft = getHeightAt(0, 0);
        var bottomRight = getHeightAt(WorldConstants.chunk_size, 0);
        var topLeft = getHeightAt(0, WorldConstants.chunk_size);
        var topRight = getHeightAt(WorldConstants.chunk_size, WorldConstants.chunk_size);
        
        for (int x = 0; x < WorldConstants.chunk_size; x++)
        {
            for (int z = 0; z < WorldConstants.chunk_size; z++)
            {
                var smooth = GeneralMaths.SmoothInterpolation(bottomLeft,topLeft,topRight,bottomRight, x, z);
                heightMap[x, z] = Mathf.RoundToInt(smooth);
            }
        }
    }

    public void SetBlocks(int maxHeight)
    {
        for (var y = 0; y < maxHeight; y++)
        {
            for (var x = 0; x < WorldConstants.chunk_size; x++)
            {
                for (var z = 0; z < WorldConstants.chunk_size; z++)
                {
                    var pos = new Vector3Int(x, y, z);
                    var height = heightMap[x, z];

                    if (y > height && y < 66)
                    {
                        if (processChunk.GetBlock(pos).id == BlockId.Air)
                        {
                            processChunk.SetBlock(pos, new Block(BlockId.Water));
                        }
                        continue;
                    }

                    if (y > height) continue;
                    
                    if (processChunk.GetBlock(pos).id == BlockId.Air)
                    {
                        processChunk.SetBlock(pos, new Block(BlockId.Grass));
                    }
                }
            }
        }
    }

    public override int GetMinimumSpawnHeight()
    {
        throw new System.NotImplementedException();
    }

    public override BiomeId GetBiomeId(Chunk chunk, int x, int z)
    {
        throw new System.NotImplementedException();
    }
}
