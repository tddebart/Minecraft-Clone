using UnityEngine;

public abstract class TerrainGenerator : MonoBehaviour
{
    public abstract void Initialize();
    public abstract void GenerateTerrainFor(Chunk chunk);
    public abstract int GetMinimumSpawnHeight();
    public abstract BiomeId GetBiomeId(Chunk chunk, int x, int z);
}
