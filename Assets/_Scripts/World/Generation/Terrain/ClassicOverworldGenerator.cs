
using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class ClassicOverworldGenerator : TerrainGenerator
{
    public Biome[] biomes;
    
    public NoiseGenerator noiseGenerator;

    private Chunk processChunk;
    private int[,] heightMap = new int[WorldConstants.chunk_size, WorldConstants.chunk_size];

    public override void Initialize()
    {
        noiseGenerator = new NoiseGenerator(World.Instance.seed);
    }

    public override void GenerateTerrainFor(Chunk chunk)
    {
        processChunk = chunk;

        GetHeightMap();
        
        SetBlocks(Mathf.Max(heightMap.Cast<int>().Max(), WorldConstants.water_level)+1);
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
        var rnd = new System.Random(World.Instance.seed);
        
        List<Vector3Int> trees = new List<Vector3Int>();
        
        for (var y = 0; y < maxHeight; y++)
        {
            for (var x = 0; x < WorldConstants.chunk_size; x++)
            {
                for (var z = 0; z < WorldConstants.chunk_size; z++)
                {
                    var pos = new Vector3Int(x, y, z);
                    var height = heightMap[x, z];
                    var biome = biomes[0];


                    if (y > height)
                    {
                        if (y < WorldConstants.water_level)
                        {
                            if (processChunk.GetBlock(pos).id == BlockId.Air)
                            {
                                processChunk.SetBlock(pos, new Block(biome.WaterBlock));
                            }
                        } 
                        else if (y == WorldConstants.water_level)
                        {
                            if (processChunk.GetBlock(pos).id == BlockId.Air)
                            {
                                processChunk.SetBlock(pos, new Block(biome.WaterSurfaceBlock));
                            }
                        }
                    }
                    else if (y == height)
                    {
                        if (y >= WorldConstants.water_level)
                        {
                            if (processChunk.GetBlock(pos).id == BlockId.Air)
                            {
                                processChunk.SetBlock(pos, new Block(biome.SurfaceBlock));
                            }


                            if (rnd.Next(0, biome.TreeFrequency) == 0)
                            {
                                trees.Add(pos+Vector3Int.up);
                            }
                        }
                        else
                        {
                            if (processChunk.GetBlock(pos).id == BlockId.Air)
                            {
                                processChunk.SetBlock(pos, new Block(biome.UnderWaterBlock));
                                processChunk.SetBlock(pos+Vector3Int.down, new Block(biome.UnderWaterBlock));
                            }
                        }
                    }
                    else if (y >= height - 3)
                    {
                        if (processChunk.GetBlock(pos).id == BlockId.Air)
                        {
                            processChunk.SetBlock(pos, new Block(biome.UnderSurfaceBlock));
                        }
                    }
                    else
                    {
                        if (processChunk.GetBlock(pos).id == BlockId.Air)
                        {
                            processChunk.SetBlock(pos, new Block(biome.UnderGroundBlock));
                        }
                    }
                }
            }
        }

        foreach (var pos in trees)
        {
            if (processChunk.GetBlock(pos).id != BlockId.Air) continue;
            if(processChunk.GetBlock(pos+Vector3Int.down).id is not BlockId.Grass or BlockId.Dirt) continue;
            if(pos.y-1 <= WorldConstants.water_level) continue;
            
            // processChunk.SetBlock(pos, new Block(BlockId.Sand));
            biomes[0].MakeTree(rnd, pos, processChunk);
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
