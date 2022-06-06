using System;
using System.Diagnostics;
using UnityEngine;
using Debug = UnityEngine.Debug;

public class Test : MonoBehaviour
{
    private void Start()
    {
        var watch = Stopwatch.StartNew();
        bool x;
        for (var i = 0; i < 1000000; i++)
        {
            x = i < WorldConstants.chunk_size;
        }
        watch.Stop();
        Debug.Log("Took " + watch.ElapsedMilliseconds + "ms");
    }
}