
public static class GeneralMaths
{
    public static float SmoothInterpolation(float bottomLeft, float topLeft, float topRight, float bottomRight, float x, float z)
    {
        var width = WorldConstants.chunk_size;
        var height = WorldConstants.chunk_size;
        
        var xValue = 1 - x / width;
        var zValue = 1 - z / height;

        var a = SmoothStep(bottomLeft, bottomRight, xValue);
        var b = SmoothStep(topLeft, topRight, xValue);
        
        return SmoothStep(a, b, zValue);
    }

    public static float SmoothStep(float edge1, float edge2, float x)
    {
        // Scale, bias and saturate x to 0..1 range
        x = x * x * (3 - 2 * x);
        // Evaluate polynomial
        return (edge1 * x) + (edge2 * (1 - x));
    }
}
