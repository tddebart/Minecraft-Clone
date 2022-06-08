
using System.Collections.Generic;
using UnityEngine;

public static class TreeGenerator
{
    public static void MakeOakTree(System.Random rnd, Vector3Int pos, Chunk chunk)
    {
        var treeHeight = rnd.Next(1, 10);
        switch (treeHeight)
        {
            case 1:
                treeHeight = 4;
                break;
            case <=7:
                treeHeight = 5;
                break;
            default:
                treeHeight = 6;
                break;
        }

        var blockPos = pos;
        
        for (var i = 0; i < treeHeight; i++)
        {
            blockPos.y = pos.y + i;
            chunk.SetBlock(blockPos, new Block(BlockId.OakLog));
        }
        
        var leavePositions = new List<Vector3Int>();

        // First cube
        for (var x = pos.x-2; x < pos.x+3; x++)
        {
            for (var z = pos.z-2; z < pos.z+3; z++)
            {
                if (x != pos.x || z != pos.z)
                {
                    leavePositions.Add(new Vector3Int(x, blockPos.y-2, z));
                    leavePositions.Add(new Vector3Int(x, blockPos.y-1, z));
                }
            }
        }
                
        // Second plus
        for (var x = pos.x-1; x < pos.x+2; x++)
        {
            for (var z = pos.z-1; z < pos.z+2; z++)
            {
                if (x != pos.x-1 && x != pos.x+1 || z != pos.z-1 && z != pos.z+1)
                {
                    if (x != pos.x || z != pos.z)
                    {
                        leavePositions.Add(new Vector3Int(x, blockPos.y, z));
                    }
                    leavePositions.Add(new Vector3Int(x, blockPos.y+1, z));
                }
            }
        }
        
        foreach (var leavePos in leavePositions)
        {
            if (chunk.GetBlock(leavePos).id == BlockId.Air)
            {
                chunk.SetBlock(leavePos, new Block(BlockId.OakLeaves));
            }
        }
    }
}
