
using System;
using UnityEngine;

public enum Direction
{
    forwards, // Z+ direction
    backwards, // Z- direction
    left, // X- direction
    right, // X+ direction
    up, // Y+ direction
    down // Y- direction
}

public static class DirectionExtensions
{
    public static Vector3Int GetVector(this Direction dir)
    {
        return dir switch
        {
            Direction.up => Vector3Int.up,
            Direction.down => Vector3Int.down,
            Direction.left => Vector3Int.left,
            Direction.right => Vector3Int.right,
            Direction.forwards => Vector3Int.forward,
            Direction.backwards => Vector3Int.back,
            _ => throw new Exception("Invalid direction"),
        };
    }
    
    public static Direction GetOpposite(this Direction dir)
    {
        return dir switch
        {
            Direction.up => Direction.down,
            Direction.down => Direction.up,
            Direction.left => Direction.right,
            Direction.right => Direction.left,
            Direction.forwards => Direction.backwards,
            Direction.backwards => Direction.forwards,
            _ => throw new Exception("Invalid direction"),
        };
    }
}