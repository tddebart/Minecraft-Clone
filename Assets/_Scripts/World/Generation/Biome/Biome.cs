
using System;
using UnityEditor;
using UnityEditor.UIElements;
using UnityEngine;

public enum BiomeId
{
    ValleyBiome = 0,
    ForestBiome = 1,
    TundraBiome = 2,
    DesertBiome = 3,
    OceanBiome = 4,
    MountainBiome = 5,
}

public enum TreeType
{
    OakTree = 0,
    BirchTree = 1,
}

[Serializable]
public class Biome
{
    public BiomeId biomeId;
    
    [Space]
    public BlockId SurfaceBlock;
    public BlockId UnderSurfaceBlock;
    public BlockId UnderGroundBlock;
    public BlockId UnderWaterBlock;
    public BlockId WaterSurfaceBlock;
    public BlockId WaterBlock;
    [Space]
    
    public int TreeFrequency;
    public TreeType[] TreeTypes;


    public void MakeTree(System.Random rnd, Vector3Int pos, Chunk chunk)
    {
        var rndN = rnd.Next(0, 25*TreeTypes.Length);

        for (var i = 1; i < TreeTypes.Length+1; i++)
        {
            if (rndN < 25*i)
            {
                var treeType = TreeTypes[i-1];
                MakeTree(rnd,pos, treeType,chunk);
            }
        }
    }
    
    private void MakeTree(System.Random rnd, Vector3Int pos, TreeType treeType, Chunk chunk)
    {
        switch (treeType)
        {
            case TreeType.OakTree:
                TreeGenerator.MakeOakTree(rnd, pos, chunk);
                break;
        }
    }
}
