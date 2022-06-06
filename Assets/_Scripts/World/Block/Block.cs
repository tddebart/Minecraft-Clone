using System;

public class Block
{
    public char light;
    public BlockId id;

    public Block()
    {
    }
    
    public Block(BlockId id)
    {
        this.id = id;
    }
    
    public BlockData GetData()
    {
        return BlockDatabase.GetData(id);
    }
}
