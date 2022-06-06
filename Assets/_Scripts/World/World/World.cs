using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Threading;
using System.Threading.Tasks;
using Baracuda.Monitoring;
using UnityEngine;
using Debug = UnityEngine.Debug;
using Object = UnityEngine.Object;

public partial class World : MonitoredBehaviour
{
    public static World Instance;

    public int renderDistance = 3;
    private int loadDistance = 2;
    public int seed = 420;
    public Vector3Int playerPos;
    public GameObject player;

    public static bool isRunning = true;
    
    public ChunkManager chunkManager;
    private List<UnloadedBlock> unloadedBlocks = new();

    [Monitor]
    public long firstTimeTaken;
    
    private Object mainLock = new Object();

    private Thread loadThread;

    protected override void Awake()
    {
        base.Awake();
        Instance = this;
    }

    private void Start()
    {
        if (seed == 0)
        {
            seed = new System.Random().Next(424, 325322);
        }
        
        loadThread = new Thread(LoadChunks);
        loadThread.Start();
        // StartCoroutine(LoadChunks(Vector3Int.zero));
        
        // await Task.Delay(1500).ConfigureAwait(true);

        // foreach (var chunk in chunkManager.chunks.Values)
        // {
        //     var chunkMesh = chunk.GetSection(0).solidMesh;
        //     var mesh = new Mesh();
        //     mesh.SetVertices(chunkMesh.vertices);
        //     mesh.SetTriangles(chunkMesh.triangles, 0);
        //     mesh.SetUVs(0, chunkMesh.uv);
        //     mesh.RecalculateNormals();
        //     // mesh.Optimize();
        //
        //     var obj = new GameObject("ChunkMesh");
        //     obj.AddComponent<MeshFilter>().mesh = mesh;
        //     obj.AddComponent<MeshRenderer>().material = new Material(Shader.Find("Standard"));
        //     obj.transform.position = chunk.globalPos;
        //     obj.transform.parent = transform;
        // }
    }

    public void SetBlock(Vector3Int pos, Block block)
    {
        if (pos.y < 0) return;

        UpdateChunk(pos);

        var blockPosXZ = GetBlockXZ(pos.x, pos.z);
        var blockPos = new Vector3Int(blockPosXZ.x, pos.y, blockPosXZ.y);
        var chunkPos = GetChunkXZ(pos.x, pos.z);
        var chunk = chunkManager.GetChunk(chunkPos);
        
        var oldBlock = chunk.GetBlock(blockPos);
        block.light = oldBlock.light;
        
        if (block.GetData().isOpaque)
        {
            //TODO: Update light    
        }
        
        chunk.SetBlock(blockPos, block);
        
        //TODO: update ambient light

        if (block.id == 0)
        {
            // block broken update
        }
    }

    public Block GetBlock(Vector3Int pos)
    {
        var blockPos = GetBlockXZ(pos.x, pos.z);
        var chunkPos = GetChunkXZ(pos.x, pos.z);
        var chunk = chunkManager.GetChunk(chunkPos);
        
        chunk.busyLevel++;
        if (chunk.isLoaded)
        {
            var block = chunk.GetBlockInChunk(new Vector3Int(blockPos.x,pos.y, blockPos.y));
            chunk.busyLevel--;
            return block;
        }
        else
        {
            chunk.busyLevel--;
            return new Block(BlockId.Air);
        }
    }

    public void UpdateChunk(Vector3Int blockPos)
    {
        lock (mainLock)
        {
            var chunkPos = GetChunkXZ(blockPos.x, blockPos.z);
            var chunkSectionY = blockPos.y / WorldConstants.chunk_size;
            
            var sectionBlockXZ = GetBlockXZ(blockPos.x, blockPos.z);
            var sectionBlockY = blockPos.y % WorldConstants.chunk_size;
            
            int xx = 0, yy = 0, zz = 0;
            int sectionsX = 0, sectionsY = 0, sectionsZ = 0;

            if (sectionBlockXZ.x == 0)
            {
                xx = -1;
                sectionsX++;
            }
            else if (sectionBlockXZ.x == WorldConstants.chunk_size - 1)
            {
               xx = 1;
                sectionsX++;
            }
            
            if (sectionBlockY == 0) {
                yy = -1;
                ++sectionsY;
            }
            else if (sectionBlockY == WorldConstants.chunk_size - 1) {
                yy = 1;
                ++sectionsY;
            }

            if (sectionBlockXZ.y == 0) {
                zz = -1;
                ++sectionsZ;
            }
            else if (sectionBlockXZ.y == WorldConstants.chunk_size - 1) {
                zz = 1;
                ++sectionsZ;
            }
            
            for (int x = chunkPos.x, secX = 0; secX++ < sectionsX; x += xx)
            {
                for (int y = chunkSectionY, secY = 0; secY++ < sectionsY; y += yy)
                {
                    for (int z = chunkPos.y, secZ = 0; secZ++ < sectionsZ; z += zz) {
                        if (x >= 0 && z >= 0) {
                            var newKey = new Vector3Int(x, y, z);
                            //addChunkToUpdateBatch(newKey,
                            //	m_chunkManager.getChunk(newKey.x, newKey.z).getSection(newKey.y));
                            var chunk = chunkManager.GetChunk(new Vector2Int(newKey.x,newKey.z));
                            if (chunk.isLoaded)
                            {
                                chunkUpdates.Add(newKey, chunk.GetSection(newKey.y));
                            }
                        }
                    }
                }
            }
        }
    }

    public static Vector2Int GetBlockXZ(int x, int z)
    {
        var pos = new Vector2Int(x % WorldConstants.chunk_size, z % WorldConstants.chunk_size);
        if(pos.x < 0) pos.x = WorldConstants.chunk_size + pos.x;
        if(pos.y < 0) pos.y = WorldConstants.chunk_size + pos.y;
        return pos;
    }

    public static Vector2Int GetChunkXZ(int x, int z)
    {
        return new Vector2Int(Mathf.FloorToInt(x / (float)WorldConstants.chunk_size), Mathf.FloorToInt(z / (float)WorldConstants.chunk_size));
    }


    protected override void OnDestroy()
    {
        loadThread?.Abort();
    }
}
