
using System;
using UnityEngine;

public struct NoiseParameters {
    public int octaves;
    public int amplitude;
    public int smoothness;
    public int heightOffset;
	
    public float roughness;
};
public class NoiseGenerator
{
    private int seed;
    private NoiseParameters noiseParameters;
    
    public NoiseGenerator(int seed)
    {
        this.seed = seed;
        
        noiseParameters.octaves = 7;
        noiseParameters.amplitude = 30;
        noiseParameters.smoothness = 100;
        noiseParameters.heightOffset = 35;
        noiseParameters.roughness = 0.5f;
    }

    public float GetHeight(Vector2Int posI, Vector2Int chunkPos)
    {
        var pos = new Vector2(
            posI.x + chunkPos.x*WorldConstants.chunk_size,
            posI.y + chunkPos.y*WorldConstants.chunk_size
            );

        var totalValue = 0f;

        for (var i = 0; i < noiseParameters.octaves -1; i++)
        {
            var frequency = Mathf.Pow(2, i);
            var amplitude = Mathf.Pow(noiseParameters.roughness, i);
            
            totalValue += Noise(
                pos.x*frequency/noiseParameters.smoothness,
                pos.y*frequency/noiseParameters.smoothness
                )*amplitude;
        }
        
        var val = (totalValue / 2.1f+1.2f) * noiseParameters.amplitude + noiseParameters.heightOffset;
        
        return Math.Abs(val);
    }
    
    private float Noise(float x, float z)
    {
        var floorX = Mathf.FloorToInt(x);
        var floorZ = Mathf.FloorToInt(z);
        
        float s = 0f, t = 0f, u = 0f, v = 0f;

        s = GetNoise(floorX, floorZ);
        t = GetNoise(floorX + 1, floorZ);
        u = GetNoise(floorX, floorZ + 1);
        v = GetNoise(floorX + 1, floorZ + 1); // Get the surrounding noise values to calculate the interpolation
        
        var i1 = Mathf.Lerp(s, t, x - floorX);
        var i2 = Mathf.Lerp(u, v, x - floorX);
        
        var i3 = Mathf.Lerp(i1, i2, z - floorZ);
        
        return i3;
    }

    private float GetNoise(int n)
    {
        n += seed;
        n = (n << 13) ^ n;
        var newN = (n * (n * n * 60493 + 19990303) + 1376312589) & 0x7fffffff;
        
        return 1.0f - (newN / 1073741824f);
    }

    private float GetNoise(float x, float z)
    {
        return GetNoise(Mathf.FloorToInt(x + z * 57f));
    }
    
}
