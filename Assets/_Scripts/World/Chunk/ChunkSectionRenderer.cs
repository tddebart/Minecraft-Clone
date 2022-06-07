using System.Linq;
using UnityEngine;

public class ChunkSectionRenderer : MonoBehaviour
{
    public ChunkSection section;

    private MeshFilter meshFilter;
    private MeshRenderer meshRenderer;
    private Mesh mesh;

    public void Initialize(ChunkSection section)
    {
        this.section = section;
        
        meshFilter = GetComponent<MeshFilter>();
        meshRenderer = GetComponent<MeshRenderer>();
        meshFilter.sharedMesh = new Mesh();
        mesh = meshFilter.sharedMesh;
        mesh.indexFormat = UnityEngine.Rendering.IndexFormat.UInt32;
    }

    public void Render()
    {
        var solidMesh = section.solidMesh;
        var liquidMesh = section.liquidMesh;

        mesh.Clear();
        mesh.MarkDynamic();
        mesh.subMeshCount = 2;

        solidMesh.vertices.AddRange(liquidMesh.vertices);
        mesh.SetVertices(solidMesh.vertices);
        mesh.SetTriangles(solidMesh.triangles, 0);
        mesh.SetTriangles(liquidMesh.triangles.Select(val => val + (solidMesh.vertices.Count-liquidMesh.vertices.Count)).ToList(), 1);
        solidMesh.uv.AddRange(liquidMesh.uv);
        mesh.SetUVs(0, solidMesh.uv);
        mesh.RecalculateNormals();
        mesh.Optimize();
    }
}