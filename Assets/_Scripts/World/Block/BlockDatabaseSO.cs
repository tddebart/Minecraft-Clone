
using UnityEngine;

[CreateAssetMenu(fileName = "BlockDatabaseSO", order = 0)]
public class BlockDatabaseSO : ScriptableObject
{
    public Vector2Int textureResolution;
    public BlockData[] BlockData;
}
