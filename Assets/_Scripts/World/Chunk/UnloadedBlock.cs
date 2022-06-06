
using UnityEngine;

public struct UnloadedBlock
{
    public Vector3Int pos;
    public Block block;

    public UnloadedBlock(Vector3Int pos, Block block)
    {
        this.pos = pos;
        this.block = block;
    }
}
