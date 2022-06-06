using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WorldRenderer : MonoBehaviour
{
    public GameObject chunkPrefab;

    public static WorldRenderer Instance;
    
    public Queue<ChunkSectionRenderer> chunkSectionPool = new();

    private void Awake()
    {
        Instance = this;
    }

    private void Start()
    {
        StartCoroutine(RemoveFarChunks());
    }

    public ChunkSectionRenderer RenderSection(ChunkSection section)
    {
        ChunkSectionRenderer newRenderer;
        if (chunkSectionPool.Count > 0)
        {
            newRenderer = chunkSectionPool.Dequeue();
            newRenderer.transform.position = section.globalPos;
        }
        else
        {
            var sectionObj = Instantiate(chunkPrefab, section.globalPos, Quaternion.identity, transform);
            newRenderer = sectionObj.GetComponent<ChunkSectionRenderer>();
        }
        
        
        newRenderer.Initialize(section);
        newRenderer.Render();
        newRenderer.gameObject.SetActive(true);
        
        return newRenderer;
    }
    
    public void RemoveSection(ChunkSection section)
    {
        if(!section.hasRenderer) return;
        
        var renderer = section.renderer;
        renderer.gameObject.SetActive(false);
        chunkSectionPool.Enqueue(renderer);
    }

    public IEnumerator RemoveFarChunks()
    {
        yield return new WaitForSeconds(0.5f);
        foreach (var chunkKVP in World.Instance.chunkManager.chunks)
        {
            var chunk = chunkKVP.Value;
            
            var renderDistance = World.Instance.renderDistance;

            var pos = World.Instance.playerPos;
            pos.x /= WorldConstants.chunk_size;
            pos.z /= WorldConstants.chunk_size;
            
            var minX = pos.x - (renderDistance+1);
            var minZ = pos.z - (renderDistance+1);
            var maxX = pos.x + renderDistance+1;
            var maxZ = pos.z + renderDistance+1;

            var chunkPos = chunk.position;
            
            if(chunkPos.x < minX || chunkPos.x > maxX || chunkPos.y < minZ || chunkPos.y > maxZ)
            {
                // if (chunk.busyLevel == 0)
                // {
                    World.Instance.chunkManager.UnloadChunk(chunk.position);
                // }
            }
        }
        
        StartCoroutine(RemoveFarChunks());
    }
}