struct VS_OUTPUT
{
    float4 dx_Position : SV_Position;
    float4 gl_Position : TEXCOORD1;
    float2 v0 : TEXCOORD0;
};
// GLSL
//
// #version 300 es
// // brush_yuv_image
// // features: ["TEXTURE_2D", "YUV"]
// 
// uniform highp mat4 uTransform;
// in highp vec2 aPosition;
// uniform lowp sampler2D sColor0;
// uniform highp sampler2D sRenderTasks;
// uniform highp sampler2D sGpuCache;
// uniform highp sampler2D sPrimitiveHeadersF;
// uniform highp isampler2D sPrimitiveHeadersI;
// in highp ivec4 aData;
// out highp vec2 vUv_Y;
// void main ()
// {
//   int instance_picture_task_address_1;
//   instance_picture_task_address_1 = (aData.y >> 16);
//   ivec2 tmpvar_2;
//   tmpvar_2.x = int((2u * (
//     uint(aData.x)
//    % 512u)));
//   tmpvar_2.y = int((uint(aData.x) / 512u));
//   vec4 tmpvar_3;
//   tmpvar_3 = texelFetch (sPrimitiveHeadersF, tmpvar_2, 0);
//   ivec2 tmpvar_4;
//   tmpvar_4.x = int((2u * (
//     uint(aData.x)
//    % 512u)));
//   tmpvar_4.y = int((uint(aData.x) / 512u));
//   ivec4 tmpvar_5;
//   tmpvar_5 = texelFetch (sPrimitiveHeadersI, tmpvar_4, 0);
//   ivec2 tmpvar_6;
//   tmpvar_6.x = int((2u * (
//     uint(instance_picture_task_address_1)
//    % 512u)));
//   tmpvar_6.y = int((uint(instance_picture_task_address_1) / 512u));
//   vec2 tmpvar_7;
//   tmpvar_7 = (tmpvar_3.xy + (tmpvar_3.zw * aPosition));
//   vec4 tmpvar_8;
//   tmpvar_8.xy = (tmpvar_7 + (-(texelFetch (sRenderTasks, 
//     (tmpvar_6 + ivec2(1, 0))
//   , 0).yz) + texelFetch (sRenderTasks, tmpvar_6, 0).xy));
//   tmpvar_8.z = float(tmpvar_5.x);
//   tmpvar_8.w = 1.0;
//   gl_Position = (uTransform * tmpvar_8);
//   highp vec2 texture_size_9;
//   ivec2 tmpvar_10;
//   tmpvar_10.x = int((uint(tmpvar_5.y) % 1024u));
//   tmpvar_10.y = int((uint(tmpvar_5.y) / 1024u));
//   int tmpvar_11;
//   tmpvar_11 = int(texelFetch (sGpuCache, tmpvar_10, 0).z);
//   vec2 tmpvar_12;
//   tmpvar_12 = (vec2(427.0, 640.0) * ((tmpvar_7 - tmpvar_3.xy) / tmpvar_3.zw));
//   vUv_Y = tmpvar_12;
//   if ((tmpvar_11 == 1)) {
//     texture_size_9 = vec2(textureSize (sColor0, 0));
//   } else {
//     if ((tmpvar_11 == 0)) {
//       texture_size_9 = vec2(textureSize (sColor0, 0));
//     };
//   };
//   if ((tmpvar_11 == 2)) {
//     texture_size_9 = vec2(textureSize (sColor0, 0));
//   };
//   vUv_Y = (tmpvar_12 / texture_size_9);
// }
// 

float float_ctor(int x0)
{
    return float(x0);
}
float2 vec2_ctor(int2 x0)
{
    return float2(x0);
}
int int_ctor(float x0)
{
    return int(x0);
}
int int_ctor(uint x0)
{
    return int(x0);
}
uint uint_ctor(int x0)
{
    return uint(x0);
}
// Uniforms

uniform float4x4 _uTransform : register(c1);
static const uint _sColor0 = 0;
static const uint _sRenderTasks = 1;
static const uint _sGpuCache = 2;
static const uint _sPrimitiveHeadersF = 3;
uniform Texture2D<float4> textures2D[4] : register(t0);
uniform SamplerState samplers2D[4] : register(s0);
static const uint _sPrimitiveHeadersI = 4;
static const uint textureIndexOffset2D_int4_ = 4;
static const uint samplerIndexOffset2D_int4_ = 4;
uniform Texture2D<int4> textures2D_int4_[1] : register(t4);
uniform SamplerState samplers2D_int4_[1] : register(s4);
#ifdef ANGLE_ENABLE_LOOP_FLATTEN
    #define LOOP [loop]
    #define FLATTEN [flatten]
#else
    #define LOOP
    #define FLATTEN
#endif

#define ATOMIC_COUNTER_ARRAY_STRIDE 4

// Attributes
static float2 _aPosition =
{
    0, 0
};
static int4 _aData =
{
    0, 0, 0, 0
};

static float4 gl_Position = float4(0, 0, 0, 0);

// Varyings
static  float2 _vUv_Y =
{
    0, 0
};

cbuffer DriverConstants : register(b1)
{
    float4 dx_ViewAdjust : packoffset(c1);
    float2 dx_ViewCoords : packoffset(c2);
    float2 dx_ViewScale  : packoffset(c3);
    struct SamplerMetadata
    {
        int baseLevel;
        int internalFormatBits;
        int wrapModes;
        int padding;
        int4 intBorderColor;
    };
    SamplerMetadata samplerMetadata[5] : packoffset(c4);
};

int2 gl_texture2DSize(uint samplerIndex, int lod)
{
    int baseLevel = samplerMetadata[samplerIndex].baseLevel;
    uint width;
    uint height;
    uint numberOfLevels;
    textures2D[samplerIndex].GetDimensions(baseLevel, width, height, numberOfLevels);
    width = max(width >> lod, 1);
    height = max(height >> lod, 1);
    return int2(width, height);
}

float4 gl_texture2DFetch(uint samplerIndex, int2 t, int mip)
{
    return textures2D[samplerIndex].Load(int3(t.x, t.y, mip));
}

int4 gl_texture2D_int4_Fetch(uint samplerIndex, int2 t, int mip)
{
    const uint textureIndex = samplerIndex - textureIndexOffset2D_int4_;
    const uint samplerArrayIndex = samplerIndex - samplerIndexOffset2D_int4_;
    return textures2D_int4_[textureIndex].Load(int3(t.x, t.y, mip));
}

#line 5 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"

#line 6 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"

#line 7 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"

#line 8 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"

#line 9 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"

#line 10 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"

#line 11 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"

#line 12 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"

#line 13 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"

#line 14 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"
struct VS_INPUT
{
    float2 _aPosition : TEXCOORD0;
    int4 _aData : TEXCOORD1;
};

void initAttributes(VS_INPUT input)
{
    _aPosition = input._aPosition;
    _aData = input._aData;
}

VS_OUTPUT generateOutput(VS_INPUT input)
{
    VS_OUTPUT output;
    output.gl_Position = gl_Position;
    output.dx_Position.x = gl_Position.x;
    output.dx_Position.y = - gl_Position.y;
    output.dx_Position.z = (gl_Position.z + gl_Position.w) * 0.5;
    output.dx_Position.w = gl_Position.w;
    output.v0 = _vUv_Y;

    return output;
}

VS_OUTPUT main(VS_INPUT input)
#line 15 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"
{
    initAttributes(input);

    #line 16 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"
    int _instance_picture_task_address_11037 =
    {
        0
};

    #line 17 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"
    (_instance_picture_task_address_11037 = (_aData.y >> 16));

    #line 18 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"
    int2 _tmpvar_21038 =
    {
        0, 0
};

    #line 19 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"
    (_tmpvar_21038.x = int_ctor((2 * (uint_ctor(_aData.x) % 512))));

    #line 22 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"
    (_tmpvar_21038.y = int_ctor((uint_ctor(_aData.x) / 512)));

    #line 23 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"
    float4 _tmpvar_31039 =
    {
        0, 0, 0, 0
};

    #line 24 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"
    (_tmpvar_31039 = gl_texture2DFetch(_sPrimitiveHeadersF, _tmpvar_21038, 0));

    #line 25 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"
    int2 _tmpvar_41040 =
    {
        0, 0
};

    #line 26 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"
    (_tmpvar_41040.x = int_ctor((2 * (uint_ctor(_aData.x) % 512))));

    #line 29 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"
    (_tmpvar_41040.y = int_ctor((uint_ctor(_aData.x) / 512)));

    #line 30 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"
    int4 _tmpvar_51041 =
    {
        0, 0, 0, 0
};

    #line 31 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"
    (_tmpvar_51041 = gl_texture2D_int4_Fetch(_sPrimitiveHeadersI, _tmpvar_41040, 0));

    #line 32 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"
    int2 _tmpvar_61042 =
    {
        0, 0
};

    #line 33 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"
    (_tmpvar_61042.x = int_ctor((2 * (uint_ctor(_instance_picture_task_address_11037) % 512))));

    #line 36 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"
    (_tmpvar_61042.y = int_ctor((uint_ctor(_instance_picture_task_address_11037) / 512)));

    #line 37 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"
    float2 _tmpvar_71043 =
    {
        0, 0
};

    #line 38 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"
    (_tmpvar_71043 = (_tmpvar_31039.xy + (_tmpvar_31039.zw * _aPosition)));

    #line 39 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"
    float4 _tmpvar_81044 =
    {
        0, 0, 0, 0
};

    #line 40 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"
    (_tmpvar_81044.xy = (_tmpvar_71043 + ((-gl_texture2DFetch(_sRenderTasks, (_tmpvar_61042 + int2(1, 0)), 0).yz) + gl_texture2DFetch(_sRenderTasks, _tmpvar_61042, 0).xy)));

    #line 43 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"
    (_tmpvar_81044.z = float_ctor(_tmpvar_51041.x));

    #line 44 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"
    (_tmpvar_81044.w = 1.0);

    #line 45 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"
    (gl_Position = mul(transpose(_uTransform), _tmpvar_81044));

    #line 46 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"
    float2 _texture_size_91045 =
    {
        0, 0
};

    #line 47 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"
    int2 _tmpvar_101046 =
    {
        0, 0
};

    #line 48 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"
    (_tmpvar_101046.x = int_ctor((uint_ctor(_tmpvar_51041.y) % 1024)));

    #line 49 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"
    (_tmpvar_101046.y = int_ctor((uint_ctor(_tmpvar_51041.y) / 1024)));

    #line 50 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"
    int _tmpvar_111047 =
    {
        0
};

    #line 51 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"
    (_tmpvar_111047 = int_ctor(gl_texture2DFetch(_sGpuCache, _tmpvar_101046, 0).z));

    #line 52 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"
    float2 _tmpvar_121048 =
    {
        0, 0
};

    #line 53 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"
    (_tmpvar_121048 = (float2(427.0, 640.0) * ((_tmpvar_71043 - _tmpvar_31039.xy) / _tmpvar_31039.zw)));

    #line 54 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"
    (_vUv_Y = _tmpvar_121048);

    #line 55 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"
    if ((_tmpvar_111047 == 1))
        #line 55 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"
        #line 55 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"
    {

        #line 56 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"
        (_texture_size_91045 = vec2_ctor(gl_texture2DSize(_sColor0, 0)));

        #line 57 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"
    }

    #line 55 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"
    else 
        #line 57 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"
        #line 57 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"
    {

        #line 58 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"
        if ((_tmpvar_111047 == 0))
            #line 58 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"
            #line 58 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"
        {

            #line 59 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"
            (_texture_size_91045 = vec2_ctor(gl_texture2DSize(_sColor0, 0)));

            #line 60 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"
        }

        #line 58 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"

        #line 61 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"
    }

    #line 57 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"

    #line 62 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"
    if ((_tmpvar_111047 == 2))
        #line 62 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"
        #line 62 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"
    {

        #line 63 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"
        (_texture_size_91045 = vec2_ctor(gl_texture2DSize(_sColor0, 0)));

        #line 64 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"
    }

    #line 62 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"

    #line 65 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"
    (_vUv_Y = (_tmpvar_121048 / _texture_size_91045));

    #line 66 "C:\Users\mozilla\AppData\Local\Temp\sh211F.tmp"
    return generateOutput(input);
}