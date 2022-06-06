
using System;
using UnityEngine;

[Serializable]
public class BlockData
{
    public BlockId blockId;
    public TextureData textureData;
    public bool isOpaque = true;
    public bool isSolid = true;
}

[Serializable]
public class TextureData
{
    public Vector2Int up, down, side;
}
