
using UnityEngine;

public abstract class IChunk
{
    public World world => World.Instance;
    
    public abstract Block GetBlock(Vector3Int pos);
    public abstract void SetBlock(Vector3Int pos, Block block);
}
