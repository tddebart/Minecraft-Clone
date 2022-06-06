
using System;
using System.Collections.Generic;
using System.Diagnostics;
using UnityEngine;
using Debug = UnityEngine.Debug;

public partial class World
{
    private Dictionary<Vector3Int, ChunkSection> chunkUpdates = new();
    public Queue<ChunkSection> chunkRenderQueue = new();
    
    public void AddUnloadedBlock(Vector3Int pos, Block block)
    {
        var unloadedBlock = new UnloadedBlock(pos, block);
        unloadedBlocks.Add(unloadedBlock);
    }
    
    public void SetAllUnloadedBlocks()
    {
        foreach (var block in unloadedBlocks)
        {
            var blockPos = GetBlockXZ(block.pos.x, block.pos.z);
            var chunkPos = GetChunkXZ(block.pos.x, block.pos.z);
            
            lock (mainLock)
            {
                var chunk = chunkManager.GetChunk(chunkPos);
                chunk.busyLevel++;
                if (chunk.isLoaded)
                {
                    chunk.SetBlockInChunk(new Vector3Int(blockPos.x, block.pos.y, blockPos.y), block.block);
                    
                    // update ambientocclusion
                }
                else
                {
                    var unloadedBlock = block;
                    unloadedBlock.pos.x = blockPos.x;
                    unloadedBlock.pos.y = blockPos.y;
                    chunk.AddUnloadedBlock(unloadedBlock);
                }
                chunk.busyLevel--;
            }
            
        }
        unloadedBlocks.Clear();
    }
    
    public void LoadChunks()
    {
        List<Chunk> chunksToUpdate = new();

        var firstTime = true;
        var watch = Stopwatch.StartNew();
        // try
        // {
            while (isRunning)
            {
                var pos = playerPos;
                
                pos.x /= WorldConstants.chunk_size;
                pos.z /= WorldConstants.chunk_size;

                
                //TODO: somehow make this parallel
                for (var i = 0; i < loadDistance; i++)
                {
                    // await Task.Delay(1).ConfigureAwait(false);

                    var minX = pos.x - (i+1);
                    var minZ = pos.z - (i+1);
                    var maxX = pos.x + i+1;
                    var maxZ = pos.z + i+1;

                    for (var x = minX; x <= maxX; x++)
                    {
                        for (var z = minZ; z <= maxZ; z++)
                        {
                            // var chunk1 = chunkManager.GetChunk(new Vector2Int(x, z));
                            // if(chunk1.isLoaded) continue;
                            
                            chunkManager.GenerateTerrain(x, z);
                            
                            var chunk = chunkManager.GetChunk(new Vector2Int(x, z));
                            chunk.busyLevel++;
                            chunksToUpdate.Add(chunk);
                        }
                    }
                }

                SetAllUnloadedBlocks();

                foreach (var chunk in chunksToUpdate)
                {
                    // calculate light

                    lock (mainLock)
                    {
                        // make mesh
                        chunk.MakeMesh();
                        chunk.busyLevel--;
                    }
                }

                chunksToUpdate.Clear();

                loadDistance++;
                if (loadDistance > renderDistance)
                {
                    loadDistance = 2;
                }
                
                

                if (firstTime)
                {
                    watch.Stop();
                    firstTime = false;
                    firstTimeTaken = watch.ElapsedMilliseconds;
                    Debug.Log($"First chunk load took {watch.ElapsedMilliseconds}ms");
                }
            }
        // }
        // catch (Exception e)
        // {
            // Debug.LogException(e);
        // }


        Debug.Log("Done");
        
        // yield return null;
    }

    private void Update()
    {
        if(chunkRenderQueue.Count > 0)
        {
            var chunk = chunkRenderQueue.Dequeue();
            chunk.UpdateRenderer();
        }
        
        playerPos = Vector3Int.RoundToInt(player.transform.position);
    }
}
