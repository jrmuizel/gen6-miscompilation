//-----------------------------------------------------------------------------
// Generated with NVIDIA Nsight Graphics 2021.2.1.0
// 
// File: Resources00.cpp
// 
//-----------------------------------------------------------------------------

#include <vector>
#include <d3d9.h>
#include <d3d11.h>
#include <dxgi1_2.h>
#include <d3dcompiler.h>
#pragma comment(lib, "d3dcompiler")

#ifndef FUNCTION_OVERRIDES_H_DEF
#include "function_overrides.h"
#define FUNCTION_OVERRIDES_H_DEF
#endif
#include "DXGIReplay.h"
#include "D3D11Replay.h"
#include "Helpers.h"
#include "ReplayHelpers.h"
#include "Resources.h"
#include "WindowSystem.h"

NV_REPLAY_BEGIN_RESOURCE_INIT()

//-----------------------------------------------------------------------------
// CreateResources00
//-----------------------------------------------------------------------------
void CreateResources00()
{
    BEGIN_DATA_SCOPE_FUNCTION();

    static D3D_FEATURE_LEVEL D3D_FEATURE_LEVEL_temp_1[2] = { D3D_FEATURE_LEVEL_10_1, D3D_FEATURE_LEVEL_10_0 };
    static D3D_FEATURE_LEVEL D3D_FEATURE_LEVEL_temp_2 = D3D_FEATURE_LEVEL_10_1;
    result = My_D3D11CreateDevice(NULL, D3D_DRIVER_TYPE_HARDWARE, nullptr, 0u, D3D_FEATURE_LEVEL_temp_1, 2u, 7u, &pID3D11Device_uid_4, &D3D_FEATURE_LEVEL_temp_2, &pID3D11DeviceContext_uid_5);
    NV_CHECK_RESULT(result);
    NV_SET_OBJECT_NAME(pID3D11Device_uid_4, "Device 1");

    static D3D11_BLEND_DESC D3D11_BLEND_DESC_temp_1 = {0, 0, {{0, D3D11_BLEND_ONE, D3D11_BLEND_ZERO, D3D11_BLEND_OP_ADD, D3D11_BLEND_ONE, D3D11_BLEND_ZERO, D3D11_BLEND_OP_ADD, 15},{0, D3D11_BLEND_ONE, D3D11_BLEND_ZERO, D3D11_BLEND_OP_ADD, D3D11_BLEND_ONE, D3D11_BLEND_ZERO, D3D11_BLEND_OP_ADD, 15},{0, D3D11_BLEND_ONE, D3D11_BLEND_ZERO, D3D11_BLEND_OP_ADD, D3D11_BLEND_ONE, D3D11_BLEND_ZERO, D3D11_BLEND_OP_ADD, 15},{0, D3D11_BLEND_ONE, D3D11_BLEND_ZERO, D3D11_BLEND_OP_ADD, D3D11_BLEND_ONE, D3D11_BLEND_ZERO, D3D11_BLEND_OP_ADD, 15},{0, D3D11_BLEND_ONE, D3D11_BLEND_ZERO, D3D11_BLEND_OP_ADD, D3D11_BLEND_ONE, D3D11_BLEND_ZERO, D3D11_BLEND_OP_ADD, 15},{0, D3D11_BLEND_ONE, D3D11_BLEND_ZERO, D3D11_BLEND_OP_ADD, D3D11_BLEND_ONE, D3D11_BLEND_ZERO, D3D11_BLEND_OP_ADD, 15},{0, D3D11_BLEND_ONE, D3D11_BLEND_ZERO, D3D11_BLEND_OP_ADD, D3D11_BLEND_ONE, D3D11_BLEND_ZERO, D3D11_BLEND_OP_ADD, 15},{0, D3D11_BLEND_ONE, D3D11_BLEND_ZERO, D3D11_BLEND_OP_ADD, D3D11_BLEND_ONE, D3D11_BLEND_ZERO, D3D11_BLEND_OP_ADD, 15}}};
    result = My_ID3D11Device_CreateBlendState(pID3D11Device_uid_4, &D3D11_BLEND_DESC_temp_1, &pID3D11BlendState_uid_7);
    NV_CHECK_RESULT(result);
    NV_SET_OBJECT_NAME(pID3D11BlendState_uid_7, "BlendState 1");

    result = My_ID3D11Device_QueryInterface(pID3D11Device_uid_4, __uuidof(IDXGIDevice), ((void**)&pIUnknown_uid_11));
    NV_CHECK_RESULT(result);
    NV_SET_OBJECT_NAME(pIUnknown_uid_11, "0x0000024E24A66BB8");

    result = My_IDXGIObject_GetParent(((IDXGIObject*)pIUnknown_uid_11), __uuidof(IDXGIAdapter), ((void**)&pIUnknown_uid_12));
    NV_CHECK_RESULT(result);
    NV_SET_OBJECT_NAME(pIUnknown_uid_12, "0x0000024E255B9A30");

    result = My_IDXGIObject_GetParent(((IDXGIObject*)pIUnknown_uid_12), __uuidof(IDXGIFactory), ((void**)&pIUnknown_uid_13));
    NV_CHECK_RESULT(result);
    NV_SET_OBJECT_NAME(pIUnknown_uid_13, "0x0000024E24A49010");

    static DXGI_SWAP_CHAIN_DESC1 DXGI_SWAP_CHAIN_DESC1_temp_1 = {1920u, 1080u, DXGI_FORMAT_B8G8R8A8_UNORM, 0, {1u, 0u}, DXGI_CPU_ACCESS_NONE | DXGI_USAGE_SHADER_INPUT | DXGI_USAGE_RENDER_TARGET_OUTPUT | DXGI_USAGE_BACK_BUFFER, 1u, DXGI_SCALING_STRETCH, DXGI_SWAP_EFFECT_SEQUENTIAL, DXGI_ALPHA_MODE_UNSPECIFIED, (DXGI_SWAP_CHAIN_FLAG)0};
    result = DXGIReplay_CreateSwapChainForHwnd(((IDXGIFactory2*)pIUnknown_uid_13), ((IUnknown*)pID3D11Device_uid_4), hwnd_00000000000B0FC6, &DXGI_SWAP_CHAIN_DESC1_temp_1, NULL, NULL, &pIDXGISwapChain1_uid_14);
    NV_CHECK_RESULT(result);
    NV_SET_OBJECT_NAME(pIDXGISwapChain1_uid_14, "0x0000024E25694040");

    result = My_IDXGISwapChain_GetBuffer(((IDXGISwapChain*)pIDXGISwapChain1_uid_14), 0u, __uuidof(ID3D11Texture2D), ((void**)&pIUnknown_uid_15));
    NV_CHECK_RESULT(result);
    NV_SET_OBJECT_NAME(pIUnknown_uid_15, "Texture2D 1");

    static D3D11_TEX2D_RTV D3D11_TEX2D_RTV_temp_1 = {0u};
    static D3D11_RENDER_TARGET_VIEW_DESC D3D11_RENDER_TARGET_VIEW_DESC_temp_1;
        D3D11_RENDER_TARGET_VIEW_DESC_temp_1.Format = DXGI_FORMAT_B8G8R8A8_UNORM;
        D3D11_RENDER_TARGET_VIEW_DESC_temp_1.ViewDimension = D3D11_RTV_DIMENSION_TEXTURE2D;
        D3D11_RENDER_TARGET_VIEW_DESC_temp_1.Texture2D = D3D11_TEX2D_RTV_temp_1;
    result = My_ID3D11Device_CreateRenderTargetView(pID3D11Device_uid_4, ((ID3D11Resource*)pIUnknown_uid_15), &D3D11_RENDER_TARGET_VIEW_DESC_temp_1, &pID3D11RenderTargetView_uid_16);
    NV_CHECK_RESULT(result);
    NV_SET_OBJECT_NAME(pID3D11RenderTargetView_uid_16, "RTV 1");

    // Manage lifetime of scoped variables
    {
        BEGIN_DATA_SCOPE();

        std::vector<uint8_t> std_vector_of_uint8_t_temp_9;
        Serialization::BlobProxy<uint8_t*> Serialization_BlobProxy_of_uint8_t__temp_9;
        static D3D11_TEXTURE2D_DESC D3D11_TEXTURE2D_DESC_temp_17 = {1920u, 1080u, 1u, 1u, DXGI_FORMAT_B8G8R8A8_UNORM, {1u, 0u}, D3D11_USAGE_DEFAULT, D3D11_BIND_RENDER_TARGET | D3D11_BIND_SHADER_RESOURCE, (D3D11_CPU_ACCESS_FLAG)0, (D3D11_RESOURCE_MISC_FLAG)0};
        result = My_ID3D11Device_CreateTexture2D(pID3D11Device_uid_4, &D3D11_TEXTURE2D_DESC_temp_17, InitializeSubresourceDataD3D11(30, std_vector_of_uint8_t_temp_9, Serialization_BlobProxy_of_uint8_t__temp_9), &pID3D11Texture2D_uid_18);
        NV_CHECK_RESULT(result);
    }
    NV_SET_OBJECT_NAME(pID3D11Texture2D_uid_18, "Texture2D 2");

    static D3D11_TEX2D_RTV D3D11_TEX2D_RTV_temp_2 = {0u};
    static D3D11_RENDER_TARGET_VIEW_DESC D3D11_RENDER_TARGET_VIEW_DESC_temp_2;
        D3D11_RENDER_TARGET_VIEW_DESC_temp_2.Format = DXGI_FORMAT_B8G8R8A8_UNORM;
        D3D11_RENDER_TARGET_VIEW_DESC_temp_2.ViewDimension = D3D11_RTV_DIMENSION_TEXTURE2D;
        D3D11_RENDER_TARGET_VIEW_DESC_temp_2.Texture2D = D3D11_TEX2D_RTV_temp_2;
    result = My_ID3D11Device_CreateRenderTargetView(pID3D11Device_uid_4, ((ID3D11Resource*)pID3D11Texture2D_uid_18), &D3D11_RENDER_TARGET_VIEW_DESC_temp_2, &pID3D11RenderTargetView_uid_19);
    NV_CHECK_RESULT(result);
    NV_SET_OBJECT_NAME(pID3D11RenderTargetView_uid_19, "RTV 2");

    static D3D11_TEX2D_SRV D3D11_TEX2D_SRV_temp_1 = {0u, 1u};
    static D3D11_SHADER_RESOURCE_VIEW_DESC D3D11_SHADER_RESOURCE_VIEW_DESC_temp_1;
        D3D11_SHADER_RESOURCE_VIEW_DESC_temp_1.Format = DXGI_FORMAT_B8G8R8A8_UNORM;
        D3D11_SHADER_RESOURCE_VIEW_DESC_temp_1.ViewDimension = D3D_SRV_DIMENSION_TEXTURE2D;
        D3D11_SHADER_RESOURCE_VIEW_DESC_temp_1.Texture2D = D3D11_TEX2D_SRV_temp_1;
    result = My_ID3D11Device_CreateShaderResourceView(pID3D11Device_uid_4, ((ID3D11Resource*)pID3D11Texture2D_uid_18), &D3D11_SHADER_RESOURCE_VIEW_DESC_temp_1, &pID3D11ShaderResourceView_uid_20);
    NV_CHECK_RESULT(result);
    NV_SET_OBJECT_NAME(pID3D11ShaderResourceView_uid_20, "SRV 2");

    // Manage lifetime of scoped variables
    {
        BEGIN_DATA_SCOPE();

        std::vector<uint8_t> std_vector_of_uint8_t_temp_10;
        Serialization::BlobProxy<uint8_t*> Serialization_BlobProxy_of_uint8_t__temp_10;
        static D3D11_TEXTURE2D_DESC D3D11_TEXTURE2D_DESC_temp_18 = {1920u, 1080u, 1u, 1u, DXGI_FORMAT_R24G8_TYPELESS, {1u, 0u}, D3D11_USAGE_DEFAULT, D3D11_BIND_DEPTH_STENCIL | D3D11_BIND_SHADER_RESOURCE, (D3D11_CPU_ACCESS_FLAG)0, (D3D11_RESOURCE_MISC_FLAG)0};
        result = My_ID3D11Device_CreateTexture2D(pID3D11Device_uid_4, &D3D11_TEXTURE2D_DESC_temp_18, InitializeSubresourceDataD3D11(31, std_vector_of_uint8_t_temp_10, Serialization_BlobProxy_of_uint8_t__temp_10), &pID3D11Texture2D_uid_21);
        NV_CHECK_RESULT(result);
    }
    NV_SET_OBJECT_NAME(pID3D11Texture2D_uid_21, "Texture2D 3");

    static D3D11_TEX2D_DSV D3D11_TEX2D_DSV_temp_1 = {0u};
    static D3D11_DEPTH_STENCIL_VIEW_DESC D3D11_DEPTH_STENCIL_VIEW_DESC_temp_1;
        D3D11_DEPTH_STENCIL_VIEW_DESC_temp_1.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;
        D3D11_DEPTH_STENCIL_VIEW_DESC_temp_1.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;
        D3D11_DEPTH_STENCIL_VIEW_DESC_temp_1.Flags = 0u;
        D3D11_DEPTH_STENCIL_VIEW_DESC_temp_1.Texture2D = D3D11_TEX2D_DSV_temp_1;
    result = My_ID3D11Device_CreateDepthStencilView(pID3D11Device_uid_4, ((ID3D11Resource*)pID3D11Texture2D_uid_21), &D3D11_DEPTH_STENCIL_VIEW_DESC_temp_1, &pID3D11DepthStencilView_uid_22);
    NV_CHECK_RESULT(result);
    NV_SET_OBJECT_NAME(pID3D11DepthStencilView_uid_22, "DSV 1");

    // Manage lifetime of scoped variables
    {
        BEGIN_DATA_SCOPE();

        std::vector<uint8_t> std_vector_of_uint8_t_temp_11;
        Serialization::BlobProxy<uint8_t*> Serialization_BlobProxy_of_uint8_t__temp_11;
        static D3D11_BUFFER_DESC D3D11_BUFFER_DESC_temp_11 = {1048576u, D3D11_USAGE_DYNAMIC, D3D11_BIND_VERTEX_BUFFER, D3D11_CPU_ACCESS_WRITE, (D3D11_RESOURCE_MISC_FLAG)0, 0u};
        result = My_ID3D11Device_CreateBuffer(pID3D11Device_uid_4, &D3D11_BUFFER_DESC_temp_11, InitializeSubresourceDataD3D11(32, std_vector_of_uint8_t_temp_11, Serialization_BlobProxy_of_uint8_t__temp_11), &pID3D11Buffer_uid_24);
        NV_CHECK_RESULT(result);
    }
    NV_SET_OBJECT_NAME(pID3D11Buffer_uid_24, "Buffer 1");

    result = My_ID3D11Device_CreatePixelShader(pID3D11Device_uid_4, NV_GET_RESOURCE(const void*, 33), 528ull, NULL, &pID3D11PixelShader_uid_29);
    NV_CHECK_RESULT(result);
    NV_SET_OBJECT_NAME(pID3D11PixelShader_uid_29, "PixelShader 1");

    result = My_ID3D11Device_CreateVertexShader(pID3D11Device_uid_4, NV_GET_RESOURCE(const void*, 34), 808ull, NULL, &pID3D11VertexShader_uid_31);
    NV_CHECK_RESULT(result);
    NV_SET_OBJECT_NAME(pID3D11VertexShader_uid_31, "VertexShader 1");

    result = My_ID3D11Device_CreateGeometryShader(pID3D11Device_uid_4, NV_GET_RESOURCE(const void*, 35), 1788ull, NULL, &pID3D11GeometryShader_uid_33);
    NV_CHECK_RESULT(result);
    NV_SET_OBJECT_NAME(pID3D11GeometryShader_uid_33, "GeometryShader 1");

    // Manage lifetime of scoped variables
    {
        BEGIN_DATA_SCOPE();

        std::vector<uint8_t> std_vector_of_uint8_t_temp_12;
        Serialization::BlobProxy<uint8_t*> Serialization_BlobProxy_of_uint8_t__temp_12;
        static D3D11_BUFFER_DESC D3D11_BUFFER_DESC_temp_12 = {64u, D3D11_USAGE_DYNAMIC, D3D11_BIND_VERTEX_BUFFER, D3D11_CPU_ACCESS_WRITE, (D3D11_RESOURCE_MISC_FLAG)0, 0u};
        result = My_ID3D11Device_CreateBuffer(pID3D11Device_uid_4, &D3D11_BUFFER_DESC_temp_12, InitializeSubresourceDataD3D11(36, std_vector_of_uint8_t_temp_12, Serialization_BlobProxy_of_uint8_t__temp_12), &pID3D11Buffer_uid_34);
        NV_CHECK_RESULT(result);
    }
    NV_SET_OBJECT_NAME(pID3D11Buffer_uid_34, "Buffer 4");

    static D3D11_SAMPLER_DESC D3D11_SAMPLER_DESC_temp_1 = {D3D11_FILTER_MIN_MAG_MIP_POINT, D3D11_TEXTURE_ADDRESS_CLAMP, D3D11_TEXTURE_ADDRESS_CLAMP, D3D11_TEXTURE_ADDRESS_CLAMP, 0.0f, 0u, D3D11_COMPARISON_NEVER, {0.0f,0.0f,0.0f,0.0f}, 0.0f, HexToFloat(0x7F7FFFFF/*3.40282e+38f*/)};
    result = My_ID3D11Device_CreateSamplerState(pID3D11Device_uid_4, &D3D11_SAMPLER_DESC_temp_1, &pID3D11SamplerState_uid_35);
    NV_CHECK_RESULT(result);
    NV_SET_OBJECT_NAME(pID3D11SamplerState_uid_35, "SamplerState 2");

    static D3D11_INPUT_ELEMENT_DESC D3D11_INPUT_ELEMENT_DESC_temp_1[2] = { {"POSITION", 0u, DXGI_FORMAT_R32G32_FLOAT, 0u, 0u, D3D11_INPUT_PER_VERTEX_DATA, 0u}, {"TEXCOORD", 0u, DXGI_FORMAT_R32G32_FLOAT, 0u, 8u, D3D11_INPUT_PER_VERTEX_DATA, 0u} };
    result = My_ID3D11Device_CreateInputLayout(pID3D11Device_uid_4, D3D11_INPUT_ELEMENT_DESC_temp_1, 2u, NV_GET_RESOURCE(const void*, 37), 728ull, &pID3D11InputLayout_uid_36);
    NV_CHECK_RESULT(result);
    NV_SET_OBJECT_NAME(pID3D11InputLayout_uid_36, "InputLayout 1");

    result = My_ID3D11Device_CreateVertexShader(pID3D11Device_uid_4, NV_GET_RESOURCE(const void*, 38), 728ull, NULL, &pID3D11VertexShader_uid_37);
    NV_CHECK_RESULT(result);
    NV_SET_OBJECT_NAME(pID3D11VertexShader_uid_37, "VertexShader 2");

    result = My_ID3D11Device_CreatePixelShader(pID3D11Device_uid_4, NV_GET_RESOURCE(const void*, 39), 704ull, NULL, &pID3D11PixelShader_uid_38);
    NV_CHECK_RESULT(result);
    NV_SET_OBJECT_NAME(pID3D11PixelShader_uid_38, "PixelShader 2");

    static D3D11_RASTERIZER_DESC D3D11_RASTERIZER_DESC_temp_1 = {D3D11_FILL_SOLID, D3D11_CULL_NONE, 0, 0, 0.0f, 0.0f, TRUE, FALSE, FALSE, FALSE};
    result = My_ID3D11Device_CreateRasterizerState(pID3D11Device_uid_4, &D3D11_RASTERIZER_DESC_temp_1, &pID3D11RasterizerState_uid_39);
    NV_CHECK_RESULT(result);
    NV_SET_OBJECT_NAME(pID3D11RasterizerState_uid_39, "RasterizerState 2");

    // Manage lifetime of scoped variables
    {
        BEGIN_DATA_SCOPE();

        std::vector<uint8_t> std_vector_of_uint8_t_temp_13;
        Serialization::BlobProxy<uint8_t*> Serialization_BlobProxy_of_uint8_t__temp_13;
        static D3D11_TEXTURE2D_DESC D3D11_TEXTURE2D_DESC_temp_19 = {1024u, 512u, 1u, 1u, DXGI_FORMAT_R8G8B8A8_UNORM, {1u, 0u}, D3D11_USAGE_DEFAULT, D3D11_BIND_RENDER_TARGET | D3D11_BIND_SHADER_RESOURCE, (D3D11_CPU_ACCESS_FLAG)0, (D3D11_RESOURCE_MISC_FLAG)0};
        result = My_ID3D11Device_CreateTexture2D(pID3D11Device_uid_4, &D3D11_TEXTURE2D_DESC_temp_19, InitializeSubresourceDataD3D11(40, std_vector_of_uint8_t_temp_13, Serialization_BlobProxy_of_uint8_t__temp_13), &pID3D11Texture2D_uid_40);
        NV_CHECK_RESULT(result);
    }
    NV_SET_OBJECT_NAME(pID3D11Texture2D_uid_40, "Texture2D 5");

    static D3D11_TEX2D_RTV D3D11_TEX2D_RTV_temp_3 = {0u};
    static D3D11_RENDER_TARGET_VIEW_DESC D3D11_RENDER_TARGET_VIEW_DESC_temp_3;
        D3D11_RENDER_TARGET_VIEW_DESC_temp_3.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
        D3D11_RENDER_TARGET_VIEW_DESC_temp_3.ViewDimension = D3D11_RTV_DIMENSION_TEXTURE2D;
        D3D11_RENDER_TARGET_VIEW_DESC_temp_3.Texture2D = D3D11_TEX2D_RTV_temp_3;
    result = My_ID3D11Device_CreateRenderTargetView(pID3D11Device_uid_4, ((ID3D11Resource*)pID3D11Texture2D_uid_40), &D3D11_RENDER_TARGET_VIEW_DESC_temp_3, &pID3D11RenderTargetView_uid_42);
    NV_CHECK_RESULT(result);
    NV_SET_OBJECT_NAME(pID3D11RenderTargetView_uid_42, "RTV 3");

    // Manage lifetime of scoped variables
    {
        BEGIN_DATA_SCOPE();

        std::vector<uint8_t> std_vector_of_uint8_t_temp_14;
        Serialization::BlobProxy<uint8_t*> Serialization_BlobProxy_of_uint8_t__temp_14;
        static D3D11_TEXTURE2D_DESC D3D11_TEXTURE2D_DESC_temp_20 = {1024u, 512u, 1u, 1u, DXGI_FORMAT_R24G8_TYPELESS, {1u, 0u}, D3D11_USAGE_DEFAULT, D3D11_BIND_DEPTH_STENCIL | D3D11_BIND_SHADER_RESOURCE, (D3D11_CPU_ACCESS_FLAG)0, (D3D11_RESOURCE_MISC_FLAG)0};
        result = My_ID3D11Device_CreateTexture2D(pID3D11Device_uid_4, &D3D11_TEXTURE2D_DESC_temp_20, InitializeSubresourceDataD3D11(41, std_vector_of_uint8_t_temp_14, Serialization_BlobProxy_of_uint8_t__temp_14), ((ID3D11Texture2D**)&pID3D11Resource_uid_43));
        NV_CHECK_RESULT(result);
    }
    NV_SET_OBJECT_NAME(pID3D11Resource_uid_43, "Texture2D 6");

    static D3D11_TEX2D_DSV D3D11_TEX2D_DSV_temp_2 = {0u};
    static D3D11_DEPTH_STENCIL_VIEW_DESC D3D11_DEPTH_STENCIL_VIEW_DESC_temp_2;
        D3D11_DEPTH_STENCIL_VIEW_DESC_temp_2.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;
        D3D11_DEPTH_STENCIL_VIEW_DESC_temp_2.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;
        D3D11_DEPTH_STENCIL_VIEW_DESC_temp_2.Flags = 0u;
        D3D11_DEPTH_STENCIL_VIEW_DESC_temp_2.Texture2D = D3D11_TEX2D_DSV_temp_2;
    result = My_ID3D11Device_CreateDepthStencilView(pID3D11Device_uid_4, pID3D11Resource_uid_43, &D3D11_DEPTH_STENCIL_VIEW_DESC_temp_2, &pID3D11DepthStencilView_uid_45);
    NV_CHECK_RESULT(result);
    NV_SET_OBJECT_NAME(pID3D11DepthStencilView_uid_45, "DSV 2");

    // Manage lifetime of scoped variables
    {
        BEGIN_DATA_SCOPE();

        std::vector<uint8_t> std_vector_of_uint8_t_temp_15;
        Serialization::BlobProxy<uint8_t*> Serialization_BlobProxy_of_uint8_t__temp_15;
        static D3D11_TEXTURE2D_DESC D3D11_TEXTURE2D_DESC_temp_21 = {427u, 640u, 1u, 1u, DXGI_FORMAT_R8_UNORM, {1u, 0u}, D3D11_USAGE_DEFAULT, D3D11_BIND_RENDER_TARGET | D3D11_BIND_SHADER_RESOURCE, (D3D11_CPU_ACCESS_FLAG)0, (D3D11_RESOURCE_MISC_FLAG)0};
        result = My_ID3D11Device_CreateTexture2D(pID3D11Device_uid_4, &D3D11_TEXTURE2D_DESC_temp_21, InitializeSubresourceDataD3D11(42, std_vector_of_uint8_t_temp_15, Serialization_BlobProxy_of_uint8_t__temp_15), ((ID3D11Texture2D**)&pID3D11Resource_uid_46));
        NV_CHECK_RESULT(result);
    }
    NV_SET_OBJECT_NAME(pID3D11Resource_uid_46, "Texture2D 7");

    static D3D11_DEPTH_STENCIL_DESC D3D11_DEPTH_STENCIL_DESC_temp_1 = {1, D3D11_DEPTH_WRITE_MASK_ALL, D3D11_COMPARISON_ALWAYS, 0, 255, 255, {D3D11_STENCIL_OP_KEEP, D3D11_STENCIL_OP_KEEP, D3D11_STENCIL_OP_KEEP, D3D11_COMPARISON_ALWAYS}, {D3D11_STENCIL_OP_KEEP, D3D11_STENCIL_OP_KEEP, D3D11_STENCIL_OP_KEEP, D3D11_COMPARISON_ALWAYS}};
    result = My_ID3D11Device_CreateDepthStencilState(pID3D11Device_uid_4, &D3D11_DEPTH_STENCIL_DESC_temp_1, &pID3D11DepthStencilState_uid_56);
    NV_CHECK_RESULT(result);
    NV_SET_OBJECT_NAME(pID3D11DepthStencilState_uid_56, "DepthStencilState 2");

    // Manage lifetime of scoped variables
    {
        BEGIN_DATA_SCOPE();

        std::vector<uint8_t> std_vector_of_uint8_t_temp_16;
        Serialization::BlobProxy<uint8_t*> Serialization_BlobProxy_of_uint8_t__temp_16;
        static D3D11_BUFFER_DESC D3D11_BUFFER_DESC_temp_13 = {64u, D3D11_USAGE_DYNAMIC, D3D11_BIND_CONSTANT_BUFFER, D3D11_CPU_ACCESS_WRITE, (D3D11_RESOURCE_MISC_FLAG)0, 0u};
        result = My_ID3D11Device_CreateBuffer(pID3D11Device_uid_4, &D3D11_BUFFER_DESC_temp_13, InitializeSubresourceDataD3D11(43, std_vector_of_uint8_t_temp_16, Serialization_BlobProxy_of_uint8_t__temp_16), &pID3D11Buffer_uid_57);
        NV_CHECK_RESULT(result);
    }
    NV_SET_OBJECT_NAME(pID3D11Buffer_uid_57, "Buffer 6");

    result = My_ID3D11Device_CreateVertexShader(pID3D11Device_uid_4, NV_GET_RESOURCE(const void*, 44), 1432ull, NULL, &pID3D11VertexShader_uid_58);
    NV_CHECK_RESULT(result);
    NV_SET_OBJECT_NAME(pID3D11VertexShader_uid_58, "VertexShader 3");

    result = My_ID3D11Device_CreatePixelShader(pID3D11Device_uid_4, NV_GET_RESOURCE(const void*, 45), 1020ull, NULL, &pID3D11PixelShader_uid_60);
    NV_CHECK_RESULT(result);
    NV_SET_OBJECT_NAME(pID3D11PixelShader_uid_60, "PixelShader 3");

    result = My_ID3D11Device_CreatePixelShader(pID3D11Device_uid_4, NV_GET_RESOURCE(const void*, 46), 532ull, NULL, &pID3D11PixelShader_uid_61);
    NV_CHECK_RESULT(result);
    NV_SET_OBJECT_NAME(pID3D11PixelShader_uid_61, "PixelShader 4");

    // Manage lifetime of scoped variables
    {
        BEGIN_DATA_SCOPE();

        std::vector<uint8_t> std_vector_of_uint8_t_temp_17;
        Serialization::BlobProxy<uint8_t*> Serialization_BlobProxy_of_uint8_t__temp_17;
        static D3D11_TEXTURE2D_DESC D3D11_TEXTURE2D_DESC_temp_22 = {1024u, 20u, 1u, 1u, DXGI_FORMAT_R32G32B32A32_FLOAT, {1u, 0u}, D3D11_USAGE_DEFAULT, D3D11_BIND_RENDER_TARGET | D3D11_BIND_SHADER_RESOURCE, (D3D11_CPU_ACCESS_FLAG)0, (D3D11_RESOURCE_MISC_FLAG)0};
        result = My_ID3D11Device_CreateTexture2D(pID3D11Device_uid_4, &D3D11_TEXTURE2D_DESC_temp_22, InitializeSubresourceDataD3D11(47, std_vector_of_uint8_t_temp_17, Serialization_BlobProxy_of_uint8_t__temp_17), &pID3D11Texture2D_uid_65);
        NV_CHECK_RESULT(result);
    }
    NV_SET_OBJECT_NAME(pID3D11Texture2D_uid_65, "Texture2D 10");

    static D3D11_TEX2D_RTV D3D11_TEX2D_RTV_temp_4 = {0u};
    static D3D11_RENDER_TARGET_VIEW_DESC D3D11_RENDER_TARGET_VIEW_DESC_temp_4;
        D3D11_RENDER_TARGET_VIEW_DESC_temp_4.Format = DXGI_FORMAT_R32G32B32A32_FLOAT;
        D3D11_RENDER_TARGET_VIEW_DESC_temp_4.ViewDimension = D3D11_RTV_DIMENSION_TEXTURE2D;
        D3D11_RENDER_TARGET_VIEW_DESC_temp_4.Texture2D = D3D11_TEX2D_RTV_temp_4;
    result = My_ID3D11Device_CreateRenderTargetView(pID3D11Device_uid_4, ((ID3D11Resource*)pID3D11Texture2D_uid_65), &D3D11_RENDER_TARGET_VIEW_DESC_temp_4, &pID3D11RenderTargetView_uid_67);
    NV_CHECK_RESULT(result);
    NV_SET_OBJECT_NAME(pID3D11RenderTargetView_uid_67, "RTV 7");

    static D3D11_DEPTH_STENCIL_DESC D3D11_DEPTH_STENCIL_DESC_temp_2 = {0, D3D11_DEPTH_WRITE_MASK_ALL, D3D11_COMPARISON_LESS, 0, 255, 255, {D3D11_STENCIL_OP_KEEP, D3D11_STENCIL_OP_KEEP, D3D11_STENCIL_OP_KEEP, D3D11_COMPARISON_ALWAYS}, {D3D11_STENCIL_OP_KEEP, D3D11_STENCIL_OP_KEEP, D3D11_STENCIL_OP_KEEP, D3D11_COMPARISON_ALWAYS}};
    result = My_ID3D11Device_CreateDepthStencilState(pID3D11Device_uid_4, &D3D11_DEPTH_STENCIL_DESC_temp_2, &pID3D11DepthStencilState_uid_68);
    NV_CHECK_RESULT(result);
    NV_SET_OBJECT_NAME(pID3D11DepthStencilState_uid_68, "DepthStencilState 3");

    // Manage lifetime of scoped variables
    {
        BEGIN_DATA_SCOPE();

        std::vector<uint8_t> std_vector_of_uint8_t_temp_18;
        Serialization::BlobProxy<uint8_t*> Serialization_BlobProxy_of_uint8_t__temp_18;
        static D3D11_BUFFER_DESC D3D11_BUFFER_DESC_temp_14 = {576u, D3D11_USAGE_DYNAMIC, D3D11_BIND_CONSTANT_BUFFER, D3D11_CPU_ACCESS_WRITE, (D3D11_RESOURCE_MISC_FLAG)0, 0u};
        result = My_ID3D11Device_CreateBuffer(pID3D11Device_uid_4, &D3D11_BUFFER_DESC_temp_14, InitializeSubresourceDataD3D11(48, std_vector_of_uint8_t_temp_18, Serialization_BlobProxy_of_uint8_t__temp_18), &pID3D11Buffer_uid_69);
        NV_CHECK_RESULT(result);
    }
    NV_SET_OBJECT_NAME(pID3D11Buffer_uid_69, "Buffer 8");

    // Manage lifetime of scoped variables
    {
        BEGIN_DATA_SCOPE();

        std::vector<uint8_t> std_vector_of_uint8_t_temp_19;
        Serialization::BlobProxy<uint8_t*> Serialization_BlobProxy_of_uint8_t__temp_19;
        static D3D11_BUFFER_DESC D3D11_BUFFER_DESC_temp_15 = {576u, D3D11_USAGE_DYNAMIC, D3D11_BIND_CONSTANT_BUFFER, D3D11_CPU_ACCESS_WRITE, (D3D11_RESOURCE_MISC_FLAG)0, 0u};
        result = My_ID3D11Device_CreateBuffer(pID3D11Device_uid_4, &D3D11_BUFFER_DESC_temp_15, InitializeSubresourceDataD3D11(49, std_vector_of_uint8_t_temp_19, Serialization_BlobProxy_of_uint8_t__temp_19), &pID3D11Buffer_uid_70);
        NV_CHECK_RESULT(result);
    }
    NV_SET_OBJECT_NAME(pID3D11Buffer_uid_70, "Buffer 9");

    static D3D11_INPUT_ELEMENT_DESC D3D11_INPUT_ELEMENT_DESC_temp_2[2] = { {"TEXCOORD", 0u, DXGI_FORMAT_R32G32B32A32_FLOAT, 0u, 0u, D3D11_INPUT_PER_VERTEX_DATA, 0u}, {"TEXCOORD", 1u, DXGI_FORMAT_R16G16_UNORM, 1u, 0u, D3D11_INPUT_PER_VERTEX_DATA, 0u} };
    result = My_ID3D11Device_CreateInputLayout(pID3D11Device_uid_4, D3D11_INPUT_ELEMENT_DESC_temp_2, 2u, NV_GET_RESOURCE(const void*, 50), 808ull, &pID3D11InputLayout_uid_71);
    NV_CHECK_RESULT(result);
    NV_SET_OBJECT_NAME(pID3D11InputLayout_uid_71, "InputLayout 2");

    // Manage lifetime of scoped variables
    {
        BEGIN_DATA_SCOPE();

        std::vector<uint8_t> std_vector_of_uint8_t_temp_20;
        Serialization::BlobProxy<uint8_t*> Serialization_BlobProxy_of_uint8_t__temp_20;
        static D3D11_BUFFER_DESC D3D11_BUFFER_DESC_temp_16 = {1048576u, D3D11_USAGE_STAGING, (D3D11_BIND_FLAG)0, D3D11_CPU_ACCESS_READ | D3D11_CPU_ACCESS_WRITE, (D3D11_RESOURCE_MISC_FLAG)0, 0u};
        result = My_ID3D11Device_CreateBuffer(pID3D11Device_uid_4, &D3D11_BUFFER_DESC_temp_16, InitializeSubresourceDataD3D11(51, std_vector_of_uint8_t_temp_20, Serialization_BlobProxy_of_uint8_t__temp_20), &pID3D11Buffer_uid_72);
        NV_CHECK_RESULT(result);
    }
    NV_SET_OBJECT_NAME(pID3D11Buffer_uid_72, "Buffer 10");

    // Manage lifetime of scoped variables
    {
        BEGIN_DATA_SCOPE();

        std::vector<uint8_t> std_vector_of_uint8_t_temp_21;
        Serialization::BlobProxy<uint8_t*> Serialization_BlobProxy_of_uint8_t__temp_21;
        static D3D11_BUFFER_DESC D3D11_BUFFER_DESC_temp_17 = {1048576u, D3D11_USAGE_DEFAULT, D3D11_BIND_SHADER_RESOURCE, (D3D11_CPU_ACCESS_FLAG)0, (D3D11_RESOURCE_MISC_FLAG)0, 0u};
        result = My_ID3D11Device_CreateBuffer(pID3D11Device_uid_4, &D3D11_BUFFER_DESC_temp_17, InitializeSubresourceDataD3D11(52, std_vector_of_uint8_t_temp_21, Serialization_BlobProxy_of_uint8_t__temp_21), ((ID3D11Buffer**)&pID3D11Resource_uid_77));
        NV_CHECK_RESULT(result);
    }
    NV_SET_OBJECT_NAME(pID3D11Resource_uid_77, "Buffer 11");

    static D3D11_BUFFER_SRV D3D11_BUFFER_SRV_temp_1 = {0u, 65536u};
    static D3D11_SHADER_RESOURCE_VIEW_DESC D3D11_SHADER_RESOURCE_VIEW_DESC_temp_2;
        D3D11_SHADER_RESOURCE_VIEW_DESC_temp_2.Format = DXGI_FORMAT_R32G32B32A32_FLOAT;
        D3D11_SHADER_RESOURCE_VIEW_DESC_temp_2.ViewDimension = D3D_SRV_DIMENSION_BUFFER;
        D3D11_SHADER_RESOURCE_VIEW_DESC_temp_2.Buffer = D3D11_BUFFER_SRV_temp_1;
    result = My_ID3D11Device_CreateShaderResourceView(pID3D11Device_uid_4, pID3D11Resource_uid_77, &D3D11_SHADER_RESOURCE_VIEW_DESC_temp_2, &pID3D11ShaderResourceView_uid_78);
    NV_CHECK_RESULT(result);
    NV_SET_OBJECT_NAME(pID3D11ShaderResourceView_uid_78, "SRV 12");

    static D3D11_BUFFER_SRV D3D11_BUFFER_SRV_temp_2 = {0u, 65536u};
    static D3D11_SHADER_RESOURCE_VIEW_DESC D3D11_SHADER_RESOURCE_VIEW_DESC_temp_3;
        D3D11_SHADER_RESOURCE_VIEW_DESC_temp_3.Format = DXGI_FORMAT_R32G32B32A32_SINT;
        D3D11_SHADER_RESOURCE_VIEW_DESC_temp_3.ViewDimension = D3D_SRV_DIMENSION_BUFFER;
        D3D11_SHADER_RESOURCE_VIEW_DESC_temp_3.Buffer = D3D11_BUFFER_SRV_temp_2;
    result = My_ID3D11Device_CreateShaderResourceView(pID3D11Device_uid_4, pID3D11Resource_uid_77, &D3D11_SHADER_RESOURCE_VIEW_DESC_temp_3, &pID3D11ShaderResourceView_uid_83);
    NV_CHECK_RESULT(result);
    NV_SET_OBJECT_NAME(pID3D11ShaderResourceView_uid_83, "SRV 14");

    result = My_ID3D11Device_CreatePixelShader(pID3D11Device_uid_4, NV_GET_RESOURCE(const void*, 53), 500ull, NULL, &pID3D11PixelShader_uid_93);
    NV_CHECK_RESULT(result);
    NV_SET_OBJECT_NAME(pID3D11PixelShader_uid_93, "PixelShader 6");

    result = My_ID3D11Device_CreateVertexShader(pID3D11Device_uid_4, NV_GET_RESOURCE(const void*, 54), 960ull, NULL, &pID3D11VertexShader_uid_95);
    NV_CHECK_RESULT(result);
    NV_SET_OBJECT_NAME(pID3D11VertexShader_uid_95, "VertexShader 4");

    // Manage lifetime of scoped variables
    {
        BEGIN_DATA_SCOPE();

        std::vector<uint8_t> std_vector_of_uint8_t_temp_22;
        Serialization::BlobProxy<uint8_t*> Serialization_BlobProxy_of_uint8_t__temp_22;
        static D3D11_BUFFER_DESC D3D11_BUFFER_DESC_temp_18 = {12u, D3D11_USAGE_DEFAULT, D3D11_BIND_INDEX_BUFFER, (D3D11_CPU_ACCESS_FLAG)0, (D3D11_RESOURCE_MISC_FLAG)0, 0u};
        result = My_ID3D11Device_CreateBuffer(pID3D11Device_uid_4, &D3D11_BUFFER_DESC_temp_18, InitializeSubresourceDataD3D11(55, std_vector_of_uint8_t_temp_22, Serialization_BlobProxy_of_uint8_t__temp_22), &pID3D11Buffer_uid_96);
        NV_CHECK_RESULT(result);
    }
    NV_SET_OBJECT_NAME(pID3D11Buffer_uid_96, "Buffer 12");

    // Manage lifetime of scoped variables
    {
        BEGIN_DATA_SCOPE();

        std::vector<uint8_t> std_vector_of_uint8_t_temp_23;
        Serialization::BlobProxy<uint8_t*> Serialization_BlobProxy_of_uint8_t__temp_23;
        static D3D11_BUFFER_DESC D3D11_BUFFER_DESC_temp_19 = {80u, D3D11_USAGE_DEFAULT, D3D11_BIND_CONSTANT_BUFFER, (D3D11_CPU_ACCESS_FLAG)0, (D3D11_RESOURCE_MISC_FLAG)0, 0u};
        result = My_ID3D11Device_CreateBuffer(pID3D11Device_uid_4, &D3D11_BUFFER_DESC_temp_19, InitializeSubresourceDataD3D11(56, std_vector_of_uint8_t_temp_23, Serialization_BlobProxy_of_uint8_t__temp_23), &pID3D11Buffer_uid_97);
        NV_CHECK_RESULT(result);
    }
    NV_SET_OBJECT_NAME(pID3D11Buffer_uid_97, "Buffer 13");

    static D3D11_INPUT_ELEMENT_DESC D3D11_INPUT_ELEMENT_DESC_temp_3[3] = { {"TEXCOORD", 0u, DXGI_FORMAT_R8G8_UNORM, 0u, 0u, D3D11_INPUT_PER_VERTEX_DATA, 0u}, {"TEXCOORD", 1u, DXGI_FORMAT_R32G32B32A32_FLOAT, 1u, 0u, D3D11_INPUT_PER_INSTANCE_DATA, 1u}, {"TEXCOORD", 2u, DXGI_FORMAT_R32G32B32A32_FLOAT, 2u, 0u, D3D11_INPUT_PER_INSTANCE_DATA, 1u} };
    result = My_ID3D11Device_CreateInputLayout(pID3D11Device_uid_4, D3D11_INPUT_ELEMENT_DESC_temp_3, 3u, NV_GET_RESOURCE(const void*, 57), 960ull, &pID3D11InputLayout_uid_98);
    NV_CHECK_RESULT(result);
    NV_SET_OBJECT_NAME(pID3D11InputLayout_uid_98, "InputLayout 3");

    // Manage lifetime of scoped variables
    {
        BEGIN_DATA_SCOPE();

        std::vector<uint8_t> std_vector_of_uint8_t_temp_24;
        Serialization::BlobProxy<uint8_t*> Serialization_BlobProxy_of_uint8_t__temp_24;
        static D3D11_BUFFER_DESC D3D11_BUFFER_DESC_temp_20 = {8u, D3D11_USAGE_DEFAULT, D3D11_BIND_STREAM_OUTPUT | D3D11_BIND_VERTEX_BUFFER, (D3D11_CPU_ACCESS_FLAG)0, (D3D11_RESOURCE_MISC_FLAG)0, 0u};
        result = My_ID3D11Device_CreateBuffer(pID3D11Device_uid_4, &D3D11_BUFFER_DESC_temp_20, InitializeSubresourceDataD3D11(58, std_vector_of_uint8_t_temp_24, Serialization_BlobProxy_of_uint8_t__temp_24), &pID3D11Buffer_uid_99);
        NV_CHECK_RESULT(result);
    }
    NV_SET_OBJECT_NAME(pID3D11Buffer_uid_99, "Buffer 14");

    result = My_ID3D11Device_CreatePixelShader(pID3D11Device_uid_4, NV_GET_RESOURCE(const void*, 59), 532ull, NULL, &pID3D11PixelShader_uid_101);
    NV_CHECK_RESULT(result);
    NV_SET_OBJECT_NAME(pID3D11PixelShader_uid_101, "PixelShader 7");

    ID3DBlob* vsBlob;
    ID3DBlob* errors;

    D3DCompileFromFile(L"..\\vs.hlsl", nullptr, nullptr, "main", "vs_4_1",/*D3DCOMPILE_DEBUG | D3DCOMPILE_SKIP_OPTIMIZATION*/ D3DCOMPILE_OPTIMIZATION_LEVEL2, 0, &vsBlob, &errors);
    if (errors) {
        OutputDebugStringA("Failed to compile");
                    OutputDebugStringA( (char*)errors->GetBufferPointer() );

        exit(1);
    }

    //ID3D11VertexShader* vertexShader;

    //device->CreateVertexShader(vsBlob->GetBufferPointer(), vsBlob->GetBufferSize(), nullptr, &vertexShader);
    result = My_ID3D11Device_CreateVertexShader(pID3D11Device_uid_4, vsBlob->GetBufferPointer(), vsBlob->GetBufferSize(), NULL, &pID3D11VertexShader_uid_103);
    
    //result = My_ID3D11Device_CreateVertexShader(pID3D11Device_uid_4, NV_GET_RESOURCE(const void*, 60), 2800ull, NULL, &pID3D11VertexShader_uid_103);
    NV_CHECK_RESULT(result);
    NV_SET_OBJECT_NAME(pID3D11VertexShader_uid_103, "VertexShader 5");

    static D3D11_RASTERIZER_DESC D3D11_RASTERIZER_DESC_temp_2 = {D3D11_FILL_SOLID, D3D11_CULL_NONE, 0, 0, 0.0f, 0.0f, TRUE, TRUE, FALSE, FALSE};
    result = My_ID3D11Device_CreateRasterizerState(pID3D11Device_uid_4, &D3D11_RASTERIZER_DESC_temp_2, &pID3D11RasterizerState_uid_104);
    NV_CHECK_RESULT(result);
    NV_SET_OBJECT_NAME(pID3D11RasterizerState_uid_104, "RasterizerState 3");

    static D3D11_DEPTH_STENCIL_DESC D3D11_DEPTH_STENCIL_DESC_temp_3 = {1, D3D11_DEPTH_WRITE_MASK_ALL, D3D11_COMPARISON_LESS_EQUAL, 0, 255, 255, {D3D11_STENCIL_OP_KEEP, D3D11_STENCIL_OP_KEEP, D3D11_STENCIL_OP_KEEP, D3D11_COMPARISON_ALWAYS}, {D3D11_STENCIL_OP_KEEP, D3D11_STENCIL_OP_KEEP, D3D11_STENCIL_OP_KEEP, D3D11_COMPARISON_ALWAYS}};
    result = My_ID3D11Device_CreateDepthStencilState(pID3D11Device_uid_4, &D3D11_DEPTH_STENCIL_DESC_temp_3, &pID3D11DepthStencilState_uid_105);
    NV_CHECK_RESULT(result);
    NV_SET_OBJECT_NAME(pID3D11DepthStencilState_uid_105, "DepthStencilState 4");

    static D3D11_SAMPLER_DESC D3D11_SAMPLER_DESC_temp_2 = {D3D11_FILTER_MIN_MAG_LINEAR_MIP_POINT, D3D11_TEXTURE_ADDRESS_CLAMP, D3D11_TEXTURE_ADDRESS_CLAMP, D3D11_TEXTURE_ADDRESS_WRAP, 0.0f, 0u, D3D11_COMPARISON_NEVER, {0.0f,0.0f,0.0f,0.0f}, HexToFloat(0xC47A0000/*-1000.0f*/), HexToFloat(0x447A0000/*1000.0f*/)};
    result = My_ID3D11Device_CreateSamplerState(pID3D11Device_uid_4, &D3D11_SAMPLER_DESC_temp_2, &pID3D11SamplerState_uid_106);
    NV_CHECK_RESULT(result);
    NV_SET_OBJECT_NAME(pID3D11SamplerState_uid_106, "SamplerState 3");

    static D3D11_TEX2D_SRV D3D11_TEX2D_SRV_temp_2 = {0u, 1u};
    static D3D11_SHADER_RESOURCE_VIEW_DESC D3D11_SHADER_RESOURCE_VIEW_DESC_temp_4;
        D3D11_SHADER_RESOURCE_VIEW_DESC_temp_4.Format = DXGI_FORMAT_R8_UNORM;
        D3D11_SHADER_RESOURCE_VIEW_DESC_temp_4.ViewDimension = D3D_SRV_DIMENSION_TEXTURE2D;
        D3D11_SHADER_RESOURCE_VIEW_DESC_temp_4.Texture2D = D3D11_TEX2D_SRV_temp_2;
    result = My_ID3D11Device_CreateShaderResourceView(pID3D11Device_uid_4, pID3D11Resource_uid_46, &D3D11_SHADER_RESOURCE_VIEW_DESC_temp_4, &pID3D11ShaderResourceView_uid_107);
    NV_CHECK_RESULT(result);
    NV_SET_OBJECT_NAME(pID3D11ShaderResourceView_uid_107, "SRV 17");

    static D3D11_SAMPLER_DESC D3D11_SAMPLER_DESC_temp_3 = {D3D11_FILTER_MIN_MAG_MIP_POINT, D3D11_TEXTURE_ADDRESS_CLAMP, D3D11_TEXTURE_ADDRESS_CLAMP, D3D11_TEXTURE_ADDRESS_WRAP, 0.0f, 0u, D3D11_COMPARISON_NEVER, {0.0f,0.0f,0.0f,0.0f}, HexToFloat(0xC47A0000/*-1000.0f*/), HexToFloat(0x447A0000/*1000.0f*/)};
    result = My_ID3D11Device_CreateSamplerState(pID3D11Device_uid_4, &D3D11_SAMPLER_DESC_temp_3, &pID3D11SamplerState_uid_108);
    NV_CHECK_RESULT(result);
    NV_SET_OBJECT_NAME(pID3D11SamplerState_uid_108, "SamplerState 4");

    static D3D11_TEX2D_SRV D3D11_TEX2D_SRV_temp_3 = {0u, 1u};
    static D3D11_SHADER_RESOURCE_VIEW_DESC D3D11_SHADER_RESOURCE_VIEW_DESC_temp_5;
        D3D11_SHADER_RESOURCE_VIEW_DESC_temp_5.Format = DXGI_FORMAT_R32G32B32A32_FLOAT;
        D3D11_SHADER_RESOURCE_VIEW_DESC_temp_5.ViewDimension = D3D_SRV_DIMENSION_TEXTURE2D;
        D3D11_SHADER_RESOURCE_VIEW_DESC_temp_5.Texture2D = D3D11_TEX2D_SRV_temp_3;
    result = My_ID3D11Device_CreateShaderResourceView(pID3D11Device_uid_4, ((ID3D11Resource*)pID3D11Texture2D_uid_65), &D3D11_SHADER_RESOURCE_VIEW_DESC_temp_5, &pID3D11ShaderResourceView_uid_110);
    NV_CHECK_RESULT(result);
    NV_SET_OBJECT_NAME(pID3D11ShaderResourceView_uid_110, "SRV 19");

    // Manage lifetime of scoped variables
    {
        BEGIN_DATA_SCOPE();

        std::vector<uint8_t> std_vector_of_uint8_t_temp_25;
        Serialization::BlobProxy<uint8_t*> Serialization_BlobProxy_of_uint8_t__temp_25;
        static D3D11_BUFFER_DESC D3D11_BUFFER_DESC_temp_21 = {80u, D3D11_USAGE_DEFAULT, D3D11_BIND_CONSTANT_BUFFER, (D3D11_CPU_ACCESS_FLAG)0, (D3D11_RESOURCE_MISC_FLAG)0, 0u};
        result = My_ID3D11Device_CreateBuffer(pID3D11Device_uid_4, &D3D11_BUFFER_DESC_temp_21, InitializeSubresourceDataD3D11(61, std_vector_of_uint8_t_temp_25, Serialization_BlobProxy_of_uint8_t__temp_25), &pID3D11Buffer_uid_113);
        NV_CHECK_RESULT(result);
    }
    NV_SET_OBJECT_NAME(pID3D11Buffer_uid_113, "Buffer 15");

    static D3D11_INPUT_ELEMENT_DESC D3D11_INPUT_ELEMENT_DESC_temp_4[2] = { {"TEXCOORD", 0u, DXGI_FORMAT_R8G8_UNORM, 0u, 0u, D3D11_INPUT_PER_VERTEX_DATA, 0u}, {"TEXCOORD", 1u, DXGI_FORMAT_R32G32B32A32_SINT, 1u, 0u, D3D11_INPUT_PER_INSTANCE_DATA, 1u} };
    result = My_ID3D11Device_CreateInputLayout(pID3D11Device_uid_4, D3D11_INPUT_ELEMENT_DESC_temp_4, 2u, NV_GET_RESOURCE(const void*, 62), 2800ull, &pID3D11InputLayout_uid_114);
    NV_CHECK_RESULT(result);
    NV_SET_OBJECT_NAME(pID3D11InputLayout_uid_114, "InputLayout 4");

    result = My_ID3D11Device_CreatePixelShader(pID3D11Device_uid_4, NV_GET_RESOURCE(const void*, 63), 632ull, NULL, &pID3D11PixelShader_uid_120);
    NV_CHECK_RESULT(result);
    NV_SET_OBJECT_NAME(pID3D11PixelShader_uid_120, "PixelShader 9");

    result = My_ID3D11Device_CreateVertexShader(pID3D11Device_uid_4, NV_GET_RESOURCE(const void*, 64), 2044ull, NULL, &pID3D11VertexShader_uid_122);
    NV_CHECK_RESULT(result);
    NV_SET_OBJECT_NAME(pID3D11VertexShader_uid_122, "VertexShader 7");

    static D3D11_TEX2D_SRV D3D11_TEX2D_SRV_temp_4 = {0u, 1u};
    static D3D11_SHADER_RESOURCE_VIEW_DESC D3D11_SHADER_RESOURCE_VIEW_DESC_temp_6;
        D3D11_SHADER_RESOURCE_VIEW_DESC_temp_6.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
        D3D11_SHADER_RESOURCE_VIEW_DESC_temp_6.ViewDimension = D3D_SRV_DIMENSION_TEXTURE2D;
        D3D11_SHADER_RESOURCE_VIEW_DESC_temp_6.Texture2D = D3D11_TEX2D_SRV_temp_4;
    result = My_ID3D11Device_CreateShaderResourceView(pID3D11Device_uid_4, ((ID3D11Resource*)pID3D11Texture2D_uid_40), &D3D11_SHADER_RESOURCE_VIEW_DESC_temp_6, &pID3D11ShaderResourceView_uid_123);
    NV_CHECK_RESULT(result);
    NV_SET_OBJECT_NAME(pID3D11ShaderResourceView_uid_123, "SRV 22");

    // Manage lifetime of scoped variables
    {
        BEGIN_DATA_SCOPE();

        std::vector<uint8_t> std_vector_of_uint8_t_temp_26;
        Serialization::BlobProxy<uint8_t*> Serialization_BlobProxy_of_uint8_t__temp_26;
        static D3D11_BUFFER_DESC D3D11_BUFFER_DESC_temp_22 = {80u, D3D11_USAGE_DEFAULT, D3D11_BIND_CONSTANT_BUFFER, (D3D11_CPU_ACCESS_FLAG)0, (D3D11_RESOURCE_MISC_FLAG)0, 0u};
        result = My_ID3D11Device_CreateBuffer(pID3D11Device_uid_4, &D3D11_BUFFER_DESC_temp_22, InitializeSubresourceDataD3D11(65, std_vector_of_uint8_t_temp_26, Serialization_BlobProxy_of_uint8_t__temp_26), &pID3D11Buffer_uid_124);
        NV_CHECK_RESULT(result);
    }
    NV_SET_OBJECT_NAME(pID3D11Buffer_uid_124, "Buffer 16");

    static D3D11_INPUT_ELEMENT_DESC D3D11_INPUT_ELEMENT_DESC_temp_5[5] = { {"TEXCOORD", 0u, DXGI_FORMAT_R8G8_UNORM, 0u, 0u, D3D11_INPUT_PER_VERTEX_DATA, 0u}, {"TEXCOORD", 1u, DXGI_FORMAT_R32G32B32A32_FLOAT, 1u, 0u, D3D11_INPUT_PER_INSTANCE_DATA, 1u}, {"TEXCOORD", 2u, DXGI_FORMAT_R32G32B32A32_FLOAT, 2u, 0u, D3D11_INPUT_PER_INSTANCE_DATA, 1u}, {"TEXCOORD", 3u, DXGI_FORMAT_R32G32B32A32_FLOAT, 3u, 0u, D3D11_INPUT_PER_INSTANCE_DATA, 1u}, {"TEXCOORD", 4u, DXGI_FORMAT_R32G32B32A32_FLOAT, 4u, 0u, D3D11_INPUT_PER_INSTANCE_DATA, 1u} };
    result = My_ID3D11Device_CreateInputLayout(pID3D11Device_uid_4, D3D11_INPUT_ELEMENT_DESC_temp_5, 5u, NV_GET_RESOURCE(const void*, 66), 2044ull, &pID3D11InputLayout_uid_125);
    NV_CHECK_RESULT(result);
    NV_SET_OBJECT_NAME(pID3D11InputLayout_uid_125, "InputLayout 5");

    // Manage lifetime of scoped variables
    {
        BEGIN_DATA_SCOPE();

        std::vector<uint8_t> std_vector_of_uint8_t_temp_27;
        Serialization::BlobProxy<uint8_t*> Serialization_BlobProxy_of_uint8_t__temp_27;
        static D3D11_TEXTURE2D_DESC D3D11_TEXTURE2D_DESC_temp_23 = {1024u, 2u, 1u, 1u, DXGI_FORMAT_R32G32B32A32_FLOAT, {1u, 0u}, D3D11_USAGE_DEFAULT, D3D11_BIND_RENDER_TARGET | D3D11_BIND_SHADER_RESOURCE, (D3D11_CPU_ACCESS_FLAG)0, (D3D11_RESOURCE_MISC_FLAG)0};
        result = My_ID3D11Device_CreateTexture2D(pID3D11Device_uid_4, &D3D11_TEXTURE2D_DESC_temp_23, InitializeSubresourceDataD3D11(67, std_vector_of_uint8_t_temp_27, Serialization_BlobProxy_of_uint8_t__temp_27), ((ID3D11Texture2D**)&pID3D11Resource_uid_128));
        NV_CHECK_RESULT(result);
    }
    NV_SET_OBJECT_NAME(pID3D11Resource_uid_128, "Texture2D 20");

    static D3D11_TEX2D_RTV D3D11_TEX2D_RTV_temp_5 = {0u};
    static D3D11_RENDER_TARGET_VIEW_DESC D3D11_RENDER_TARGET_VIEW_DESC_temp_5;
        D3D11_RENDER_TARGET_VIEW_DESC_temp_5.Format = DXGI_FORMAT_R32G32B32A32_FLOAT;
        D3D11_RENDER_TARGET_VIEW_DESC_temp_5.ViewDimension = D3D11_RTV_DIMENSION_TEXTURE2D;
        D3D11_RENDER_TARGET_VIEW_DESC_temp_5.Texture2D = D3D11_TEX2D_RTV_temp_5;
    result = My_ID3D11Device_CreateRenderTargetView(pID3D11Device_uid_4, pID3D11Resource_uid_128, &D3D11_RENDER_TARGET_VIEW_DESC_temp_5, &pID3D11RenderTargetView_uid_130);
    NV_CHECK_RESULT(result);
    NV_SET_OBJECT_NAME(pID3D11RenderTargetView_uid_130, "RTV 12");

    // Manage lifetime of scoped variables
    {
        BEGIN_DATA_SCOPE();

        std::vector<uint8_t> std_vector_of_uint8_t_temp_28;
        Serialization::BlobProxy<uint8_t*> Serialization_BlobProxy_of_uint8_t__temp_28;
        static D3D11_TEXTURE2D_DESC D3D11_TEXTURE2D_DESC_temp_24 = {1024u, 2u, 1u, 1u, DXGI_FORMAT_R32G32B32A32_SINT, {1u, 0u}, D3D11_USAGE_DEFAULT, D3D11_BIND_RENDER_TARGET | D3D11_BIND_SHADER_RESOURCE, (D3D11_CPU_ACCESS_FLAG)0, (D3D11_RESOURCE_MISC_FLAG)0};
        result = My_ID3D11Device_CreateTexture2D(pID3D11Device_uid_4, &D3D11_TEXTURE2D_DESC_temp_24, InitializeSubresourceDataD3D11(68, std_vector_of_uint8_t_temp_28, Serialization_BlobProxy_of_uint8_t__temp_28), &pID3D11Texture2D_uid_132);
        NV_CHECK_RESULT(result);
    }
    NV_SET_OBJECT_NAME(pID3D11Texture2D_uid_132, "Texture2D 22");

    static D3D11_TEX2D_RTV D3D11_TEX2D_RTV_temp_6 = {0u};
    static D3D11_RENDER_TARGET_VIEW_DESC D3D11_RENDER_TARGET_VIEW_DESC_temp_6;
        D3D11_RENDER_TARGET_VIEW_DESC_temp_6.Format = DXGI_FORMAT_R32G32B32A32_SINT;
        D3D11_RENDER_TARGET_VIEW_DESC_temp_6.ViewDimension = D3D11_RTV_DIMENSION_TEXTURE2D;
        D3D11_RENDER_TARGET_VIEW_DESC_temp_6.Texture2D = D3D11_TEX2D_RTV_temp_6;
    result = My_ID3D11Device_CreateRenderTargetView(pID3D11Device_uid_4, ((ID3D11Resource*)pID3D11Texture2D_uid_132), &D3D11_RENDER_TARGET_VIEW_DESC_temp_6, &pID3D11RenderTargetView_uid_134);
    NV_CHECK_RESULT(result);
    NV_SET_OBJECT_NAME(pID3D11RenderTargetView_uid_134, "RTV 13");

    // Manage lifetime of scoped variables
    {
        BEGIN_DATA_SCOPE();

        std::vector<uint8_t> std_vector_of_uint8_t_temp_29;
        Serialization::BlobProxy<uint8_t*> Serialization_BlobProxy_of_uint8_t__temp_29;
        static D3D11_TEXTURE2D_DESC D3D11_TEXTURE2D_DESC_temp_25 = {1024u, 2u, 1u, 1u, DXGI_FORMAT_R32G32B32A32_FLOAT, {1u, 0u}, D3D11_USAGE_DEFAULT, D3D11_BIND_RENDER_TARGET | D3D11_BIND_SHADER_RESOURCE, (D3D11_CPU_ACCESS_FLAG)0, (D3D11_RESOURCE_MISC_FLAG)0};
        result = My_ID3D11Device_CreateTexture2D(pID3D11Device_uid_4, &D3D11_TEXTURE2D_DESC_temp_25, InitializeSubresourceDataD3D11(69, std_vector_of_uint8_t_temp_29, Serialization_BlobProxy_of_uint8_t__temp_29), &pID3D11Texture2D_uid_136);
        NV_CHECK_RESULT(result);
    }
    NV_SET_OBJECT_NAME(pID3D11Texture2D_uid_136, "Texture2D 24");

    static D3D11_TEX2D_RTV D3D11_TEX2D_RTV_temp_7 = {0u};
    static D3D11_RENDER_TARGET_VIEW_DESC D3D11_RENDER_TARGET_VIEW_DESC_temp_7;
        D3D11_RENDER_TARGET_VIEW_DESC_temp_7.Format = DXGI_FORMAT_R32G32B32A32_FLOAT;
        D3D11_RENDER_TARGET_VIEW_DESC_temp_7.ViewDimension = D3D11_RTV_DIMENSION_TEXTURE2D;
        D3D11_RENDER_TARGET_VIEW_DESC_temp_7.Texture2D = D3D11_TEX2D_RTV_temp_7;
    result = My_ID3D11Device_CreateRenderTargetView(pID3D11Device_uid_4, ((ID3D11Resource*)pID3D11Texture2D_uid_136), &D3D11_RENDER_TARGET_VIEW_DESC_temp_7, &pID3D11RenderTargetView_uid_138);
    NV_CHECK_RESULT(result);
    NV_SET_OBJECT_NAME(pID3D11RenderTargetView_uid_138, "RTV 14");

    // Manage lifetime of scoped variables
    {
        BEGIN_DATA_SCOPE();

        std::vector<uint8_t> std_vector_of_uint8_t_temp_30;
        Serialization::BlobProxy<uint8_t*> Serialization_BlobProxy_of_uint8_t__temp_30;
        static D3D11_TEXTURE2D_DESC D3D11_TEXTURE2D_DESC_temp_26 = {1024u, 2u, 1u, 1u, DXGI_FORMAT_R32G32B32A32_FLOAT, {1u, 0u}, D3D11_USAGE_DEFAULT, D3D11_BIND_RENDER_TARGET | D3D11_BIND_SHADER_RESOURCE, (D3D11_CPU_ACCESS_FLAG)0, (D3D11_RESOURCE_MISC_FLAG)0};
        result = My_ID3D11Device_CreateTexture2D(pID3D11Device_uid_4, &D3D11_TEXTURE2D_DESC_temp_26, InitializeSubresourceDataD3D11(70, std_vector_of_uint8_t_temp_30, Serialization_BlobProxy_of_uint8_t__temp_30), ((ID3D11Texture2D**)&pID3D11Resource_uid_140));
        NV_CHECK_RESULT(result);
    }
    NV_SET_OBJECT_NAME(pID3D11Resource_uid_140, "Texture2D 26");

    static D3D11_TEX2D_RTV D3D11_TEX2D_RTV_temp_8 = {0u};
    static D3D11_RENDER_TARGET_VIEW_DESC D3D11_RENDER_TARGET_VIEW_DESC_temp_8;
        D3D11_RENDER_TARGET_VIEW_DESC_temp_8.Format = DXGI_FORMAT_R32G32B32A32_FLOAT;
        D3D11_RENDER_TARGET_VIEW_DESC_temp_8.ViewDimension = D3D11_RTV_DIMENSION_TEXTURE2D;
        D3D11_RENDER_TARGET_VIEW_DESC_temp_8.Texture2D = D3D11_TEX2D_RTV_temp_8;
    result = My_ID3D11Device_CreateRenderTargetView(pID3D11Device_uid_4, pID3D11Resource_uid_140, &D3D11_RENDER_TARGET_VIEW_DESC_temp_8, &pID3D11RenderTargetView_uid_142);
    NV_CHECK_RESULT(result);
    NV_SET_OBJECT_NAME(pID3D11RenderTargetView_uid_142, "RTV 15");

    static D3D11_TEX2D_SRV D3D11_TEX2D_SRV_temp_5 = {0u, 1u};
    static D3D11_SHADER_RESOURCE_VIEW_DESC D3D11_SHADER_RESOURCE_VIEW_DESC_temp_7;
        D3D11_SHADER_RESOURCE_VIEW_DESC_temp_7.Format = DXGI_FORMAT_R32G32B32A32_FLOAT;
        D3D11_SHADER_RESOURCE_VIEW_DESC_temp_7.ViewDimension = D3D_SRV_DIMENSION_TEXTURE2D;
        D3D11_SHADER_RESOURCE_VIEW_DESC_temp_7.Texture2D = D3D11_TEX2D_SRV_temp_5;
    result = My_ID3D11Device_CreateShaderResourceView(pID3D11Device_uid_4, pID3D11Resource_uid_140, &D3D11_SHADER_RESOURCE_VIEW_DESC_temp_7, &pID3D11ShaderResourceView_uid_213);
    NV_CHECK_RESULT(result);
    NV_SET_OBJECT_NAME(pID3D11ShaderResourceView_uid_213, "SRV 34");

    static D3D11_TEX2D_SRV D3D11_TEX2D_SRV_temp_6 = {0u, 1u};
    static D3D11_SHADER_RESOURCE_VIEW_DESC D3D11_SHADER_RESOURCE_VIEW_DESC_temp_8;
        D3D11_SHADER_RESOURCE_VIEW_DESC_temp_8.Format = DXGI_FORMAT_R32G32B32A32_FLOAT;
        D3D11_SHADER_RESOURCE_VIEW_DESC_temp_8.ViewDimension = D3D_SRV_DIMENSION_TEXTURE2D;
        D3D11_SHADER_RESOURCE_VIEW_DESC_temp_8.Texture2D = D3D11_TEX2D_SRV_temp_6;
    result = My_ID3D11Device_CreateShaderResourceView(pID3D11Device_uid_4, pID3D11Resource_uid_128, &D3D11_SHADER_RESOURCE_VIEW_DESC_temp_8, &pID3D11ShaderResourceView_uid_214);
    NV_CHECK_RESULT(result);
    NV_SET_OBJECT_NAME(pID3D11ShaderResourceView_uid_214, "SRV 35");

    static D3D11_TEX2D_SRV D3D11_TEX2D_SRV_temp_7 = {0u, 1u};
    static D3D11_SHADER_RESOURCE_VIEW_DESC D3D11_SHADER_RESOURCE_VIEW_DESC_temp_9;
        D3D11_SHADER_RESOURCE_VIEW_DESC_temp_9.Format = DXGI_FORMAT_R32G32B32A32_SINT;
        D3D11_SHADER_RESOURCE_VIEW_DESC_temp_9.ViewDimension = D3D_SRV_DIMENSION_TEXTURE2D;
        D3D11_SHADER_RESOURCE_VIEW_DESC_temp_9.Texture2D = D3D11_TEX2D_SRV_temp_7;
    result = My_ID3D11Device_CreateShaderResourceView(pID3D11Device_uid_4, ((ID3D11Resource*)pID3D11Texture2D_uid_132), &D3D11_SHADER_RESOURCE_VIEW_DESC_temp_9, &pID3D11ShaderResourceView_uid_215);
    NV_CHECK_RESULT(result);
    NV_SET_OBJECT_NAME(pID3D11ShaderResourceView_uid_215, "SRV 36");

    static D3D11_QUERY_DESC D3D11_QUERY_DESC_temp_1 = {D3D11_QUERY_EVENT, 0u};
    result = My_ID3D11Device_CreateQuery(pID3D11Device_uid_4, &D3D11_QUERY_DESC_temp_1, &pID3D11Query_uid_225);
    NV_CHECK_RESULT(result);
}

//-----------------------------------------------------------------------------
// OnBeforeWinResourcesInit00
//-----------------------------------------------------------------------------
void OnBeforeWinResourcesInit00()
{
    BEGIN_DATA_SCOPE_FUNCTION();

}

//-----------------------------------------------------------------------------
// CreateWinResources00
//-----------------------------------------------------------------------------
void CreateWinResources00()
{
    BEGIN_DATA_SCOPE_FUNCTION();

    // Create hwnd_00000000000B0FC6
    {
        BEGIN_DATA_SCOPE();

        NV_THROW_IF(!RegisterReplayerWindowClass(currentInstance, CS_HREDRAW | CS_OWNDC | CS_VREDRAW), "Failed to register window class");
        const uint32_t x = 0u;
        const uint32_t y = 0u;
        const uint32_t Width = 1920u;
        const uint32_t Height = 1080u;
        const DWORD Style = WS_BORDER | WS_DLGFRAME | WS_OVERLAPPED | WS_SYSMENU | WS_TILED | WS_VISIBLE;
        const DWORD ExtendedStyle = 0;
        PROCESS_DPI_AWARENESS DpiAwareness = PROCESS_SYSTEM_DPI_AWARE;
        hwnd_00000000000B0FC6 = CreateReplayerWindow(currentInstance, nullptr, x, y, Width, Height, Style, ExtendedStyle, DpiAwareness);
        NV_THROW_IF(!hwnd_00000000000B0FC6, "Failed to create replayer window");
    }
}

//-----------------------------------------------------------------------------
// OnAfterWinResourcesInit00
//-----------------------------------------------------------------------------
void OnAfterWinResourcesInit00()
{
    BEGIN_DATA_SCOPE_FUNCTION();

}

//-----------------------------------------------------------------------------
// ReleaseResources00
//-----------------------------------------------------------------------------
void ReleaseResources00()
{
    BEGIN_DATA_SCOPE_FUNCTION();

    if (pID3D11Query_uid_225)
    {
        My_ID3D11Query_Release(pID3D11Query_uid_225);
    }

    if (pID3D11ShaderResourceView_uid_215)
    {
        My_ID3D11ShaderResourceView_Release(pID3D11ShaderResourceView_uid_215);
    }

    if (pID3D11ShaderResourceView_uid_214)
    {
        My_ID3D11ShaderResourceView_Release(pID3D11ShaderResourceView_uid_214);
    }

    if (pID3D11ShaderResourceView_uid_213)
    {
        My_ID3D11ShaderResourceView_Release(pID3D11ShaderResourceView_uid_213);
    }

    if (pID3D11RenderTargetView_uid_142)
    {
        My_ID3D11RenderTargetView_Release(pID3D11RenderTargetView_uid_142);
    }

    if (pID3D11Resource_uid_140)
    {
        My_ID3D11Resource_Release(pID3D11Resource_uid_140);
    }

    if (pID3D11RenderTargetView_uid_138)
    {
        My_ID3D11RenderTargetView_Release(pID3D11RenderTargetView_uid_138);
    }

    if (pID3D11Texture2D_uid_136)
    {
        My_ID3D11Texture2D_Release(pID3D11Texture2D_uid_136);
    }

    if (pID3D11RenderTargetView_uid_134)
    {
        My_ID3D11RenderTargetView_Release(pID3D11RenderTargetView_uid_134);
    }

    if (pID3D11Texture2D_uid_132)
    {
        My_ID3D11Texture2D_Release(pID3D11Texture2D_uid_132);
    }

    if (pID3D11RenderTargetView_uid_130)
    {
        My_ID3D11RenderTargetView_Release(pID3D11RenderTargetView_uid_130);
    }

    if (pID3D11Resource_uid_128)
    {
        My_ID3D11Resource_Release(pID3D11Resource_uid_128);
    }

    if (pID3D11InputLayout_uid_125)
    {
        My_ID3D11InputLayout_Release(pID3D11InputLayout_uid_125);
    }

    if (pID3D11Buffer_uid_124)
    {
        My_ID3D11Buffer_Release(pID3D11Buffer_uid_124);
    }

    if (pID3D11ShaderResourceView_uid_123)
    {
        My_ID3D11ShaderResourceView_Release(pID3D11ShaderResourceView_uid_123);
    }

    if (pID3D11VertexShader_uid_122)
    {
        My_ID3D11VertexShader_Release(pID3D11VertexShader_uid_122);
    }

    if (pID3D11PixelShader_uid_120)
    {
        My_ID3D11PixelShader_Release(pID3D11PixelShader_uid_120);
    }

    if (pID3D11InputLayout_uid_114)
    {
        My_ID3D11InputLayout_Release(pID3D11InputLayout_uid_114);
    }

    if (pID3D11Buffer_uid_113)
    {
        My_ID3D11Buffer_Release(pID3D11Buffer_uid_113);
    }

    if (pID3D11ShaderResourceView_uid_110)
    {
        My_ID3D11ShaderResourceView_Release(pID3D11ShaderResourceView_uid_110);
    }

    if (pID3D11SamplerState_uid_108)
    {
        My_ID3D11SamplerState_Release(pID3D11SamplerState_uid_108);
    }

    if (pID3D11ShaderResourceView_uid_107)
    {
        My_ID3D11ShaderResourceView_Release(pID3D11ShaderResourceView_uid_107);
    }

    if (pID3D11SamplerState_uid_106)
    {
        My_ID3D11SamplerState_Release(pID3D11SamplerState_uid_106);
    }

    if (pID3D11DepthStencilState_uid_105)
    {
        My_ID3D11DepthStencilState_Release(pID3D11DepthStencilState_uid_105);
    }

    if (pID3D11RasterizerState_uid_104)
    {
        My_ID3D11RasterizerState_Release(pID3D11RasterizerState_uid_104);
    }

    if (pID3D11VertexShader_uid_103)
    {
        My_ID3D11VertexShader_Release(pID3D11VertexShader_uid_103);
    }

    if (pID3D11PixelShader_uid_101)
    {
        My_ID3D11PixelShader_Release(pID3D11PixelShader_uid_101);
    }

    if (pID3D11Buffer_uid_99)
    {
        My_ID3D11Buffer_Release(pID3D11Buffer_uid_99);
    }

    if (pID3D11InputLayout_uid_98)
    {
        My_ID3D11InputLayout_Release(pID3D11InputLayout_uid_98);
    }

    if (pID3D11Buffer_uid_97)
    {
        My_ID3D11Buffer_Release(pID3D11Buffer_uid_97);
    }

    if (pID3D11Buffer_uid_96)
    {
        My_ID3D11Buffer_Release(pID3D11Buffer_uid_96);
    }

    if (pID3D11VertexShader_uid_95)
    {
        My_ID3D11VertexShader_Release(pID3D11VertexShader_uid_95);
    }

    if (pID3D11PixelShader_uid_93)
    {
        My_ID3D11PixelShader_Release(pID3D11PixelShader_uid_93);
    }

    if (pID3D11ShaderResourceView_uid_83)
    {
        My_ID3D11ShaderResourceView_Release(pID3D11ShaderResourceView_uid_83);
    }

    if (pID3D11ShaderResourceView_uid_78)
    {
        My_ID3D11ShaderResourceView_Release(pID3D11ShaderResourceView_uid_78);
    }

    if (pID3D11Resource_uid_77)
    {
        My_ID3D11Resource_Release(pID3D11Resource_uid_77);
    }

    if (pID3D11Buffer_uid_72)
    {
        My_ID3D11Buffer_Release(pID3D11Buffer_uid_72);
    }

    if (pID3D11InputLayout_uid_71)
    {
        My_ID3D11InputLayout_Release(pID3D11InputLayout_uid_71);
    }

    if (pID3D11Buffer_uid_70)
    {
        My_ID3D11Buffer_Release(pID3D11Buffer_uid_70);
    }

    if (pID3D11Buffer_uid_69)
    {
        My_ID3D11Buffer_Release(pID3D11Buffer_uid_69);
    }

    if (pID3D11DepthStencilState_uid_68)
    {
        My_ID3D11DepthStencilState_Release(pID3D11DepthStencilState_uid_68);
    }

    if (pID3D11RenderTargetView_uid_67)
    {
        My_ID3D11RenderTargetView_Release(pID3D11RenderTargetView_uid_67);
    }

    if (pID3D11Texture2D_uid_65)
    {
        My_ID3D11Texture2D_Release(pID3D11Texture2D_uid_65);
    }

    if (pID3D11PixelShader_uid_61)
    {
        My_ID3D11PixelShader_Release(pID3D11PixelShader_uid_61);
    }

    if (pID3D11PixelShader_uid_60)
    {
        My_ID3D11PixelShader_Release(pID3D11PixelShader_uid_60);
    }

    if (pID3D11VertexShader_uid_58)
    {
        My_ID3D11VertexShader_Release(pID3D11VertexShader_uid_58);
    }

    if (pID3D11Buffer_uid_57)
    {
        My_ID3D11Buffer_Release(pID3D11Buffer_uid_57);
    }

    if (pID3D11DepthStencilState_uid_56)
    {
        My_ID3D11DepthStencilState_Release(pID3D11DepthStencilState_uid_56);
    }

    if (pID3D11Resource_uid_46)
    {
        My_ID3D11Resource_Release(pID3D11Resource_uid_46);
    }

    if (pID3D11DepthStencilView_uid_45)
    {
        My_ID3D11DepthStencilView_Release(pID3D11DepthStencilView_uid_45);
    }

    if (pID3D11Resource_uid_43)
    {
        My_ID3D11Resource_Release(pID3D11Resource_uid_43);
    }

    if (pID3D11RenderTargetView_uid_42)
    {
        My_ID3D11RenderTargetView_Release(pID3D11RenderTargetView_uid_42);
    }

    if (pID3D11Texture2D_uid_40)
    {
        My_ID3D11Texture2D_Release(pID3D11Texture2D_uid_40);
    }

    if (pID3D11RasterizerState_uid_39)
    {
        My_ID3D11RasterizerState_Release(pID3D11RasterizerState_uid_39);
    }

    if (pID3D11PixelShader_uid_38)
    {
        My_ID3D11PixelShader_Release(pID3D11PixelShader_uid_38);
    }

    if (pID3D11VertexShader_uid_37)
    {
        My_ID3D11VertexShader_Release(pID3D11VertexShader_uid_37);
    }

    if (pID3D11InputLayout_uid_36)
    {
        My_ID3D11InputLayout_Release(pID3D11InputLayout_uid_36);
    }

    if (pID3D11SamplerState_uid_35)
    {
        My_ID3D11SamplerState_Release(pID3D11SamplerState_uid_35);
    }

    if (pID3D11Buffer_uid_34)
    {
        My_ID3D11Buffer_Release(pID3D11Buffer_uid_34);
    }

    if (pID3D11GeometryShader_uid_33)
    {
        My_ID3D11GeometryShader_Release(pID3D11GeometryShader_uid_33);
    }

    if (pID3D11VertexShader_uid_31)
    {
        My_ID3D11VertexShader_Release(pID3D11VertexShader_uid_31);
    }

    if (pID3D11PixelShader_uid_29)
    {
        My_ID3D11PixelShader_Release(pID3D11PixelShader_uid_29);
    }

    if (pID3D11Buffer_uid_24)
    {
        My_ID3D11Buffer_Release(pID3D11Buffer_uid_24);
    }

    if (pID3D11DepthStencilView_uid_22)
    {
        My_ID3D11DepthStencilView_Release(pID3D11DepthStencilView_uid_22);
    }

    if (pID3D11Texture2D_uid_21)
    {
        My_ID3D11Texture2D_Release(pID3D11Texture2D_uid_21);
    }

    if (pID3D11ShaderResourceView_uid_20)
    {
        My_ID3D11ShaderResourceView_Release(pID3D11ShaderResourceView_uid_20);
    }

    if (pID3D11RenderTargetView_uid_19)
    {
        My_ID3D11RenderTargetView_Release(pID3D11RenderTargetView_uid_19);
    }

    if (pID3D11Texture2D_uid_18)
    {
        My_ID3D11Texture2D_Release(pID3D11Texture2D_uid_18);
    }

    if (pID3D11RenderTargetView_uid_16)
    {
        My_ID3D11RenderTargetView_Release(pID3D11RenderTargetView_uid_16);
    }

    if (pIUnknown_uid_15)
    {
        My_IUnknown_Release(pIUnknown_uid_15);
    }

    if (pIDXGISwapChain1_uid_14)
    {
        pIDXGISwapChain1_uid_14->SetFullscreenState(0, nullptr);
        My_IDXGISwapChain1_Release(pIDXGISwapChain1_uid_14);
    }

    if (pIUnknown_uid_13)
    {
        My_IUnknown_Release(pIUnknown_uid_13);
    }

    if (pIUnknown_uid_12)
    {
        My_IUnknown_Release(pIUnknown_uid_12);
    }

    if (pIUnknown_uid_11)
    {
        My_IUnknown_Release(pIUnknown_uid_11);
    }

    if (pID3D11BlendState_uid_7)
    {
        My_ID3D11BlendState_Release(pID3D11BlendState_uid_7);
    }

    if (pID3D11DeviceContext_uid_5)
    {
        My_ID3D11DeviceContext_Release(pID3D11DeviceContext_uid_5);
    }

    if (pID3D11Device_uid_4)
    {
        My_ID3D11Device_Release(pID3D11Device_uid_4);
    }

    if (pIUnknown_uid_15_Staging)
    {
        My_ID3D11Texture2D_Release(pIUnknown_uid_15_Staging);
    }

    if (pID3D11Texture2D_uid_40_Staging)
    {
        My_ID3D11Texture2D_Release(pID3D11Texture2D_uid_40_Staging);
    }

    if (pID3D11Resource_uid_46_Staging)
    {
        My_ID3D11Texture2D_Release(pID3D11Resource_uid_46_Staging);
    }

    if (pID3D11Texture2D_uid_65_Staging)
    {
        My_ID3D11Texture2D_Release(pID3D11Texture2D_uid_65_Staging);
    }

    if (pID3D11Buffer_uid_96_Staging)
    {
        My_ID3D11Buffer_Release(pID3D11Buffer_uid_96_Staging);
    }

    if (pID3D11Buffer_uid_97_Staging)
    {
        My_ID3D11Buffer_Release(pID3D11Buffer_uid_97_Staging);
    }

    if (pID3D11Buffer_uid_99_Staging)
    {
        My_ID3D11Buffer_Release(pID3D11Buffer_uid_99_Staging);
    }

    if (pID3D11Buffer_uid_113_Staging)
    {
        My_ID3D11Buffer_Release(pID3D11Buffer_uid_113_Staging);
    }

    if (pID3D11Buffer_uid_124_Staging)
    {
        My_ID3D11Buffer_Release(pID3D11Buffer_uid_124_Staging);
    }

    if (pID3D11Resource_uid_128_Staging)
    {
        My_ID3D11Texture2D_Release(pID3D11Resource_uid_128_Staging);
    }

    if (pID3D11Texture2D_uid_132_Staging)
    {
        My_ID3D11Texture2D_Release(pID3D11Texture2D_uid_132_Staging);
    }

    if (pID3D11Texture2D_uid_136_Staging)
    {
        My_ID3D11Texture2D_Release(pID3D11Texture2D_uid_136_Staging);
    }

    if (pID3D11Resource_uid_140_Staging)
    {
        My_ID3D11Texture2D_Release(pID3D11Resource_uid_140_Staging);
    }
}

//-----------------------------------------------------------------------------
// ReleaseWinResources00
//-----------------------------------------------------------------------------
void ReleaseWinResources00()
{
    BEGIN_DATA_SCOPE_FUNCTION();

    // Release hwnd_00000000000B0FC6
    DestroyWindow(hwnd_00000000000B0FC6);
}

//-----------------------------------------------------------------------------
// OnAfterWinResourcesReleased00
//-----------------------------------------------------------------------------
void OnAfterWinResourcesReleased00()
{
    BEGIN_DATA_SCOPE_FUNCTION();

}

//-----------------------------------------------------------------------------
// Captured Resources
//-----------------------------------------------------------------------------
ID3D11Device* pID3D11Device_uid_4 = NULL;
ID3D11DeviceContext* pID3D11DeviceContext_uid_5 = NULL;
ID3D11BlendState* pID3D11BlendState_uid_7 = NULL;
IUnknown* pIUnknown_uid_11 = NULL;
IUnknown* pIUnknown_uid_12 = NULL;
IUnknown* pIUnknown_uid_13 = NULL;
IDXGISwapChain1* pIDXGISwapChain1_uid_14 = NULL;
IUnknown* pIUnknown_uid_15 = NULL;
ID3D11RenderTargetView* pID3D11RenderTargetView_uid_16 = NULL;
ID3D11Texture2D* pID3D11Texture2D_uid_18 = NULL;
ID3D11RenderTargetView* pID3D11RenderTargetView_uid_19 = NULL;
ID3D11ShaderResourceView* pID3D11ShaderResourceView_uid_20 = NULL;
ID3D11Texture2D* pID3D11Texture2D_uid_21 = NULL;
ID3D11DepthStencilView* pID3D11DepthStencilView_uid_22 = NULL;
ID3D11Buffer* pID3D11Buffer_uid_24 = NULL;
ID3D11PixelShader* pID3D11PixelShader_uid_29 = NULL;
ID3D11VertexShader* pID3D11VertexShader_uid_31 = NULL;
ID3D11GeometryShader* pID3D11GeometryShader_uid_33 = NULL;
ID3D11Buffer* pID3D11Buffer_uid_34 = NULL;
ID3D11SamplerState* pID3D11SamplerState_uid_35 = NULL;
ID3D11InputLayout* pID3D11InputLayout_uid_36 = NULL;
ID3D11VertexShader* pID3D11VertexShader_uid_37 = NULL;
ID3D11PixelShader* pID3D11PixelShader_uid_38 = NULL;
ID3D11RasterizerState* pID3D11RasterizerState_uid_39 = NULL;
ID3D11Texture2D* pID3D11Texture2D_uid_40 = NULL;
ID3D11RenderTargetView* pID3D11RenderTargetView_uid_42 = NULL;
ID3D11Resource* pID3D11Resource_uid_43 = NULL;
ID3D11DepthStencilView* pID3D11DepthStencilView_uid_45 = NULL;
ID3D11Resource* pID3D11Resource_uid_46 = NULL;
ID3D11DepthStencilState* pID3D11DepthStencilState_uid_56 = NULL;
ID3D11Buffer* pID3D11Buffer_uid_57 = NULL;
ID3D11VertexShader* pID3D11VertexShader_uid_58 = NULL;
ID3D11PixelShader* pID3D11PixelShader_uid_60 = NULL;
ID3D11PixelShader* pID3D11PixelShader_uid_61 = NULL;
ID3D11Texture2D* pID3D11Texture2D_uid_65 = NULL;
ID3D11RenderTargetView* pID3D11RenderTargetView_uid_67 = NULL;
ID3D11DepthStencilState* pID3D11DepthStencilState_uid_68 = NULL;
ID3D11Buffer* pID3D11Buffer_uid_69 = NULL;
ID3D11Buffer* pID3D11Buffer_uid_70 = NULL;
ID3D11InputLayout* pID3D11InputLayout_uid_71 = NULL;
ID3D11Buffer* pID3D11Buffer_uid_72 = NULL;
ID3D11Resource* pID3D11Resource_uid_77 = NULL;
ID3D11ShaderResourceView* pID3D11ShaderResourceView_uid_78 = NULL;
ID3D11ShaderResourceView* pID3D11ShaderResourceView_uid_83 = NULL;
ID3D11PixelShader* pID3D11PixelShader_uid_93 = NULL;
ID3D11VertexShader* pID3D11VertexShader_uid_95 = NULL;
ID3D11Buffer* pID3D11Buffer_uid_96 = NULL;
ID3D11Buffer* pID3D11Buffer_uid_97 = NULL;
ID3D11InputLayout* pID3D11InputLayout_uid_98 = NULL;
ID3D11Buffer* pID3D11Buffer_uid_99 = NULL;
ID3D11PixelShader* pID3D11PixelShader_uid_101 = NULL;
ID3D11VertexShader* pID3D11VertexShader_uid_103 = NULL;
ID3D11RasterizerState* pID3D11RasterizerState_uid_104 = NULL;
ID3D11DepthStencilState* pID3D11DepthStencilState_uid_105 = NULL;
ID3D11SamplerState* pID3D11SamplerState_uid_106 = NULL;
ID3D11ShaderResourceView* pID3D11ShaderResourceView_uid_107 = NULL;
ID3D11SamplerState* pID3D11SamplerState_uid_108 = NULL;
ID3D11ShaderResourceView* pID3D11ShaderResourceView_uid_110 = NULL;
ID3D11Buffer* pID3D11Buffer_uid_113 = NULL;
ID3D11InputLayout* pID3D11InputLayout_uid_114 = NULL;
ID3D11PixelShader* pID3D11PixelShader_uid_120 = NULL;
ID3D11VertexShader* pID3D11VertexShader_uid_122 = NULL;
ID3D11ShaderResourceView* pID3D11ShaderResourceView_uid_123 = NULL;
ID3D11Buffer* pID3D11Buffer_uid_124 = NULL;
ID3D11InputLayout* pID3D11InputLayout_uid_125 = NULL;
ID3D11Resource* pID3D11Resource_uid_128 = NULL;
ID3D11RenderTargetView* pID3D11RenderTargetView_uid_130 = NULL;
ID3D11Texture2D* pID3D11Texture2D_uid_132 = NULL;
ID3D11RenderTargetView* pID3D11RenderTargetView_uid_134 = NULL;
ID3D11Texture2D* pID3D11Texture2D_uid_136 = NULL;
ID3D11RenderTargetView* pID3D11RenderTargetView_uid_138 = NULL;
ID3D11Resource* pID3D11Resource_uid_140 = NULL;
ID3D11RenderTargetView* pID3D11RenderTargetView_uid_142 = NULL;
ID3D11ShaderResourceView* pID3D11ShaderResourceView_uid_213 = NULL;
ID3D11ShaderResourceView* pID3D11ShaderResourceView_uid_214 = NULL;
ID3D11ShaderResourceView* pID3D11ShaderResourceView_uid_215 = NULL;
ID3D11Query* pID3D11Query_uid_225 = NULL;
HWND hwnd_00000000000B0FC6;
ID3D11Texture2D* pIUnknown_uid_15_Staging = NULL;
ID3D11Texture2D* pID3D11Texture2D_uid_40_Staging = NULL;
ID3D11Texture2D* pID3D11Resource_uid_46_Staging = NULL;
ID3D11Texture2D* pID3D11Texture2D_uid_65_Staging = NULL;
ID3D11Buffer* pID3D11Buffer_uid_96_Staging = NULL;
ID3D11Buffer* pID3D11Buffer_uid_97_Staging = NULL;
ID3D11Buffer* pID3D11Buffer_uid_99_Staging = NULL;
ID3D11Buffer* pID3D11Buffer_uid_113_Staging = NULL;
ID3D11Buffer* pID3D11Buffer_uid_124_Staging = NULL;
ID3D11Texture2D* pID3D11Resource_uid_128_Staging = NULL;
ID3D11Texture2D* pID3D11Texture2D_uid_132_Staging = NULL;
ID3D11Texture2D* pID3D11Texture2D_uid_136_Staging = NULL;
ID3D11Texture2D* pID3D11Resource_uid_140_Staging = NULL;
NV_REPLAY_END_RESOURCE_INIT()
