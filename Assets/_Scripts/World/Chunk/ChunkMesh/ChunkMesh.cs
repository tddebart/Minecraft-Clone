
using System.Collections.Generic;
using UnityEngine;

public class ChunkMesh
{
    public List<Vector3> vertices = new();
    public List<int> triangles = new();
    public List<Vector2> uv = new();
    public List<Color> colors = new();
    public List<float> skyLight = new();
    public List<float> blockLight = new();
    public List<Vector3> sides = new();

    public void AddVertex(Vector3 vertices)
    {
        this.vertices.Add(vertices);
    }
    
    public void AddColor(Color color) 
    {
        this.colors.Add(color);
    }

    public void AddQuadTriangles()
    {
        triangles.Add(vertices.Count - 4); // vertex 0
        triangles.Add(vertices.Count - 3); // vertex 1
        triangles.Add(vertices.Count - 2); // vertex 2
        
        triangles.Add(vertices.Count - 4); // vertex 0
        triangles.Add(vertices.Count - 2); // vertex 2
        triangles.Add(vertices.Count - 1); // vertex 3
    }
}
