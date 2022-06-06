// addresses https://forum.unity.com/threads/gltfutility-a-simple-gltf-plugin.654319/page-3#post-6041123
 
// relevant documentation:
// https://docs.unity3d.com/Manual/SL-Blend.html
// https://docs.unity3d.com/Manual/SL-CullAndDepth.html
// https://forum.unity.com/threads/function-of-the-clip-command.93179/
// clip() is basically the same as 'discard' https://learnopengl.com/Advanced-OpenGL/Blending
// https://answers.unity.com/questions/1242982/discard-pixels-from-fragment-shader-based-on-scree.html
 
// if you don't want 'float4 _MainTex_ST;' and TRANSFORM_TEX(v.uv, _MainTex);
// https://docs.unity3d.com/ScriptReference/MaterialProperty.PropFlags.NoScaleOffset.html
 
Shader "Custom/UnlitTransparentWithDepth" {
 
    Properties {
        [NoScaleOffset] _MainTex ("Albedo (RGB)", 2D) = "white" {}
    }
 
    // multiple render passes, in order to write to the zbuffer before drawing visible surfaces
    SubShader {
        Tags {
            "Queue" = "Transparent"
        }
 
        Pass {
            ZWrite On
            Cull Off // make double sided
            ColorMask 0 // don't draw any color
 
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
 
            #include "UnityCG.cginc"
 
            struct appdata
            {
                float4 vertex : POSITION;
                float2 uv : TEXCOORD0;
            };
 
            struct v2f
            {
                float2 uv : TEXCOORD0;
                float4 vertex : SV_POSITION;
            };
 
            sampler2D _MainTex;
 
            v2f vert (appdata v)
            {
                v2f o;
                o.vertex = UnityObjectToClipPos(v.vertex);
                o.uv = v.uv; // just pass through with no scale/offset
                return o;
            }
 
            fixed4 frag (v2f i) : SV_Target
            {
                fixed4 col = tex2D(_MainTex, i.uv);
                clip(col.a - .97); // remove non-opaque pixels from writing to zbuffer
                return col;
            }
            ENDCG
        }
 
        Pass
        {
            ZWrite Off
            Cull Off // make double sided
            Blend SrcAlpha OneMinusSrcAlpha
 
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
 
            #include "UnityCG.cginc"
 
            struct appdata
            {
                float4 vertex : POSITION;
                float2 uv : TEXCOORD0;
            };
 
            struct v2f
            {
                float2 uv : TEXCOORD0;
                float4 vertex : SV_POSITION;
            };
 
            sampler2D _MainTex;
 
            v2f vert (appdata v)
            {
                v2f o;
                o.vertex = UnityObjectToClipPos(v.vertex);
                o.uv = v.uv; // just pass through with no scale/offset
                return o;
            }
 
            fixed4 frag (v2f i) : SV_Target
            {
                fixed4 col = tex2D(_MainTex, i.uv);
                return col;
            }
            ENDCG
        }
    }
}
    