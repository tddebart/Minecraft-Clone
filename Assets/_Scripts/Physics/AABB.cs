
using UnityEngine;

public struct AABB
{
    public Vector3 position;
    public readonly Vector3 dimensions;
    
    public AABB(Vector3 position, Vector3 dimensions)
    {
        this.position = position;
        this.dimensions = dimensions;
    }

    public void Update(Vector3 pos)
    {
        position = pos;
    }
    
    public Vector3 GetVN(Vector3 normal)
    {
        var result = position;
        
        if (normal.x < 0)
        {
            result.x += dimensions.x;
        }
        
        if (normal.y < 0)
        {
            result.y += dimensions.y;
        }
        
        if (normal.z < 0)
        {
            result.z += dimensions.z;
        }
        
        return result;
    }
    
    public Vector3 GetVP(Vector3 normal)
    {
        var result = position;
        
        if (normal.x > 0)
        {
            result.x += dimensions.x;
        }
        
        if (normal.y > 0)
        {
            result.y += dimensions.y;
        }
        
        if (normal.z > 0)
        {
            result.z += dimensions.z;
        }
        
        return result;
    }
}
