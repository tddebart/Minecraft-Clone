
using System;
using System.Numerics;
using UnityEngine;
using Vector2 = UnityEngine.Vector2;
using Vector3 = UnityEngine.Vector3;

public static class ChunkMeshBuilder
{
    private const int xMin = 0;
    private const int yMin = 0;
    private const int zMin = 0;
    private const int xMax = 16;
    private const int yMax = 16;
    private const int zMax = 16;
    
    public static readonly Direction[] directions =
    {
        Direction.forwards,
        Direction.backwards,
        Direction.left,
        Direction.right,
        Direction.up,
        Direction.down,
    };
    
    public static void BuildMesh(ChunkSection section, ref ChunkMesh solidMesh, ref ChunkMesh liquidMesh)
    {
        var pos = Vector3Int.zero;
            // if(!ShouldMakeLayer(section, y)) continue;

        for (var x = 0; x < WorldConstants.chunk_size; x++)
        {
            for (var y = 0; y < WorldConstants.chunk_size; y++)
            {
                for (var z = 0; z < WorldConstants.chunk_size; z++)
                {
                        pos.Set(x,y,z);
                        var block = section.GetBlock(pos);

                        if(block.id == 0) continue;
                        
                        var activeMesh = block.GetData().isOpaque ? solidMesh : liquidMesh;

                        foreach (var direction in directions)
                        {
                            var neighborPos = pos + direction.GetVector();
                            var neighborBlock = section.GetBlock(neighborPos);
                            
                            if (!neighborBlock.GetData().isOpaque)
                            {
                                if(block.id == BlockId.Water && neighborBlock.id == BlockId.Water) continue;
                                GetFaceDataIn(direction, pos, activeMesh, ref section, block.GetData());
                            }
                        }
                }
            }
        }
    }

    public static void GetFaceDataIn(Direction dir, Vector3Int pos, ChunkMesh chunkMesh, ref ChunkSection section, BlockData blockData)
    {
        SetFaceVertices(dir, pos, chunkMesh);
        
        chunkMesh.AddQuadTriangles();
        var uvs = GetFaceUvs(dir, blockData);
        chunkMesh.uv.AddRange(uvs);
    }

    public static void SetFaceVertices(Direction dir, Vector3Int pos, ChunkMesh chunkMesh)
    {
        var min = new Vector3(pos.x + xMin / 16f + 0.0005f, pos.y + yMin / 16f + 0.0005f, pos.z + zMin / 16f + 0.0005f);
        var max = new Vector3(pos.x + xMax / 16f + 0.0005f, pos.y + yMax / 16f + 0.0005f, pos.z + zMax / 16f + 0.0005f);

        //order of vertices matters for the normals and how we render the mesh
        switch (dir)
        {
            case Direction.backwards:
                chunkMesh.AddVertex(min); // ---
                chunkMesh.AddVertex(new Vector3(pos.x + xMin/16f+0.0005f ,pos.y + yMax/16f+0.0005f, pos.z + zMin/16f+0.0005f )); // -+-
                chunkMesh.AddVertex(new Vector3(pos.x + xMax/16f+0.0005f, pos.y + yMax/16f+0.0005f, pos.z + zMin/16f+0.0005f )); // ++-
                chunkMesh.AddVertex(new Vector3(pos.x + xMax/16f+0.0005f, pos.y + yMin/16f+0.0005f , pos.z + zMin/16f+0.0005f )); // +--
                break;
            case Direction.forwards:
                chunkMesh.AddVertex(new Vector3(pos.x + xMax/16f+0.0005f, pos.y + yMin/16f+0.0005f, pos.z + zMax/16f+0.0005f )); // +-+
                chunkMesh.AddVertex(max); // +++
                chunkMesh.AddVertex(new Vector3(pos.x + xMin/16f+0.0005f, pos.y + yMax/16f+0.0005f, pos.z + zMax/16f+0.0005f )); // -++
                chunkMesh.AddVertex(new Vector3(pos.x + xMin/16f+0.0005f, pos.y + yMin/16f+0.0005f, pos.z + zMax/16f+0.0005f )); // --+
                break;
            case Direction.left:
                chunkMesh.AddVertex(new Vector3(pos.x + xMin/16f+0.0005f, pos.y + yMin/16f+0.0005f, pos.z + zMax/16f+0.0005f)); // --+
                chunkMesh.AddVertex(new Vector3(pos.x + xMin/16f+0.0005f, pos.y + yMax/16f+0.0005f, pos.z + zMax/16f+0.0005f)); // -++
                chunkMesh.AddVertex(new Vector3(pos.x + xMin/16f+0.0005f, pos.y + yMax/16f+0.0005f, pos.z + zMin/16f+0.0005f)); // -+-
                chunkMesh.AddVertex(min); // ---
                break;
            case Direction.right:
                chunkMesh.AddVertex(new Vector3(pos.x + xMax/16f+0.0005f, pos.y + yMin/16f+0.0005f, pos.z + zMin/16f+0.0005f)); // +--
                chunkMesh.AddVertex(new Vector3(pos.x + xMax/16f+0.0005f, pos.y + yMax/16f+0.0005f, pos.z + zMin/16f+0.0005f)); // ++-
                chunkMesh.AddVertex(max); // +++
                chunkMesh.AddVertex(new Vector3(pos.x + xMax/16f+0.0005f, pos.y + yMin/16f+0.0005f, pos.z + zMax/16f+0.0005f)); // +-+
                break;
            case Direction.down:
                chunkMesh.AddVertex(min); // ---
                chunkMesh.AddVertex(new Vector3(pos.x + xMax/16f+0.0005f, pos.y + yMin/16f+0.0005f, pos.z + zMin/16f+0.0005f)); // +--
                chunkMesh.AddVertex(new Vector3(pos.x + xMax/16f+0.0005f, pos.y + yMin/16f+0.0005f, pos.z + zMax/16f+0.0005f)); // +-+
                chunkMesh.AddVertex(new Vector3(pos.x + xMin/16f+0.0005f, pos.y + yMin/16f+0.0005f, pos.z + zMax/16f+0.0005f)); // --+
                break;
            case Direction.up:
                chunkMesh.AddVertex(new Vector3(pos.x + xMin/16f+0.0005f, pos.y + yMax/16f+0.0005f, pos.z + zMax/16f+0.0005f)); // -++
                chunkMesh.AddVertex(max); // +++
                chunkMesh.AddVertex(new Vector3(pos.x + xMax/16f+0.0005f, pos.y + yMax/16f+0.0005f, pos.z + zMin/16f+0.0005f)); // ++-
                chunkMesh.AddVertex(new Vector3(pos.x + xMin/16f+0.0005f, pos.y + yMax/16f+0.0005f, pos.z + zMin/16f+0.0005f)); // -+-
                break;
        }
    }

    public static Vector2[] GetFaceUvs(Direction dir, BlockData data)
    {
        var uvs = new Vector2[4];

        var tilePos = TexturePosition(dir, data);
        var tileSizeX = BlockDatabase.Instance.TileSizeX;
        var tileSizeY = BlockDatabase.Instance.TileSizeY;
        
        uvs[0] = new Vector2(tilePos.x * tileSizeX, tilePos.y * tileSizeY);
        uvs[1] = new Vector2(tilePos.x * tileSizeX, (tilePos.y + 1) * tileSizeY);
        uvs[2] = new Vector2((tilePos.x + 1) * tileSizeX, (tilePos.y + 1) * tileSizeY);
        uvs[3] = new Vector2((tilePos.x + 1) * tileSizeX, tilePos.y * tileSizeY);
        
        return uvs;
    }

    public static Vector2Int TexturePosition(Direction dir, BlockData data)
    {
        return dir switch
        {
            Direction.up => data.textureData.up,
            Direction.down => data.textureData.down,
            _ => data.textureData.side
        };
    }

    private static bool ShouldMakeLayer(ChunkSection section, int y)
    {
        var adjacentIsSolid = new Func<int, int,bool>((dx, dz) =>
        {
            var adSection = section.GetAdjacent(dx, dz);
            return adSection.GetLayer(y).IsAllSolid();
        });
        
        return !section.GetLayer(y).IsAllSolid() ||
               !section.GetLayer(y+1).IsAllSolid() ||
               !section.GetLayer(y-1).IsAllSolid() ||
               !adjacentIsSolid(1,0) || adjacentIsSolid(0,1) || adjacentIsSolid(-1,0) || adjacentIsSolid(0,-1);
    }
}
