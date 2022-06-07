Shader "Inverse_Shader" {
    SubShader
    {
        Tags { "Queue"="Transparent" }
//        ZWrite On
//        ColorMask 0
        Blend OneMinusDstColor OneMinusSrcAlpha //invert blending, so long as FG color is 1,1,1,1
        BlendOp Add
       
        Pass
        {
       
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
             
            struct vertexInput
            {
                float4 vertex: POSITION;
                float4 color : COLOR;  
            };
             
            struct fragmentInput
            {
                float4 pos : SV_POSITION;
                float4 color : COLOR0;
            };
             
            fragmentInput vert( vertexInput i )
            {
                fragmentInput o;
                o.pos = UnityObjectToClipPos(i.vertex);
                o.color = float4(1,1,1,1);
                return o;
            }
             
            half4 frag( fragmentInput i ) : COLOR
            {
                // i.color = ;
                return (i.color.r + i.color.g + i.color.b) / 3.0;
            }
             
            ENDCG
        }
    }
}