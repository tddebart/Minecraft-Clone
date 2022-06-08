
using System;
using UnityEngine;

[Serializable]
public class BlockData
{
    public BlockId blockId;
    public TextureData textureData;
    public bool isOpaque => Opacity==15;
    [Range(0, 15)]
    public int Opacity = 15;
    public bool isSemiTransparent;
    public bool isSolid = true;
}

[Serializable]
public class TextureData
{
    public Vector2Int up, down, side;
}
