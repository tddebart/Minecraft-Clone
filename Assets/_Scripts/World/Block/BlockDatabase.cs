
using System;
using UnityEngine;

public class BlockDatabase : MonoBehaviour
{
    public static BlockDatabase Instance;
    
    public float TileSizeX => 16f/blockDatabaseSO.textureResolution.x;
    public float TileSizeY => 16f/blockDatabaseSO.textureResolution.y;
    
    public BlockDatabaseSO blockDatabaseSO;
    private BlockData[] blocks;
    
    void Awake()
    {
        OnValidate();
    }

    private void OnValidate()
    {
        blocks = new BlockData[blockDatabaseSO.BlockData.Length];
        foreach (var blockData in blockDatabaseSO.BlockData)
        {
            blocks[(int)blockData.blockId] = blockData;
        }
        Instance = this;
    }

    public static BlockData GetData(BlockId id)
    {
        try
        {
            return Instance.blocks[(int)id];
        }
        catch (IndexOutOfRangeException)
        {
            Debug.LogWarning($"BlockId {id} is not in the database");
        }
        
        return null;
    }
}
