struct VS_OUTPUT
{
    float4 dx_Position : SV_Position;
    float4 gl_Position : TEXCOORD1;
    float2 v0 : TEXCOORD0;
};


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

int2 gl_texture2DSize(uint samplerIndex)
{
    int baseLevel = samplerMetadata[samplerIndex].baseLevel;
    uint width;
    uint height;
    uint numberOfLevels;
    textures2D[samplerIndex].GetDimensions(baseLevel, width, height, numberOfLevels);
    return int2(width, height);
}

float4 gl_texture2DFetch(uint samplerIndex, int2 t, int mip)
{
    return textures2D[samplerIndex].Load(int3(t.x, t.y, mip));
}

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
{
    initAttributes(input);

    gl_Position = mul(transpose(_uTransform), float4((float2(10.00, 10.00) + (float2(427.00, 256.00) * _aPosition)), 1., 1.));

    float2 texture_size = {100000, 100000};

    int format = int_ctor(gl_texture2DFetch(_sGpuCache, int2(1022, 1), 0).z);

    float2 uv = float2(427.0, 640.0) * _aPosition;

    if (format == 1) {
        texture_size = float2(427.0, 640.0) * (gl_texture2DFetch(_sGpuCache, int2(1022, 1), 0).z-0.5);
    } else if (format == 0) {
        texture_size = float2(427.0, 640.0) * (gl_texture2DFetch(_sGpuCache, int2(1022, 1), 0).z-0.5);
    } if (format == 2) {
        texture_size = float2(427.0, 640.0) * (gl_texture2DFetch(_sGpuCache, int2(1022, 1), 0).z-0.5);
    }

    _vUv_Y = (uv / texture_size);

    return generateOutput(input);
}