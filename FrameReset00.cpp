//-----------------------------------------------------------------------------
// Generated with NVIDIA Nsight Graphics 2021.2.1.0
// 
// File: FrameReset00.cpp
// 
//-----------------------------------------------------------------------------

#include <vector>
#include <sstream>

#include <d3d9.h>
#include <d3d11.h>
#include <dxgi1_2.h>

#ifndef FUNCTION_OVERRIDES_H_DEF
#include "function_overrides.h"
#define FUNCTION_OVERRIDES_H_DEF
#endif
#include "DXGIReplay.h"
#include "D3D11Replay.h"
#include "Helpers.h"
#include "ReplayHelpers.h"
#include "Resources.h"
#include "Application.h"

NV_REPLAY_BEGIN_FRAME_SETUP()

//-----------------------------------------------------------------------------
// ResetInitialFrameState00
//-----------------------------------------------------------------------------
void ResetInitialFrameState00(bool firstTime)
{
    BEGIN_DATA_SCOPE_FUNCTION();

    My_D3DPERF_BeginEvent(0xFFC86464u, L"ResetInitialFrameState");

    // Initialize shader resources to zero
    {
        BEGIN_DATA_SCOPE();

        static ID3D11ShaderResourceView* pID3D11ShaderResourceView_temp_29[128] = { NULL };
        My_ID3D11DeviceContext_CSSetShaderResources(pID3D11DeviceContext_uid_5, 0, 128ull, pID3D11ShaderResourceView_temp_29);

        static ID3D11ShaderResourceView* pID3D11ShaderResourceView_temp_30[128] = { NULL };
        My_ID3D11DeviceContext_VSSetShaderResources(pID3D11DeviceContext_uid_5, 0, 128ull, pID3D11ShaderResourceView_temp_30);

        static ID3D11ShaderResourceView* pID3D11ShaderResourceView_temp_31[128] = { NULL };
        My_ID3D11DeviceContext_HSSetShaderResources(pID3D11DeviceContext_uid_5, 0, 128ull, pID3D11ShaderResourceView_temp_31);

        static ID3D11ShaderResourceView* pID3D11ShaderResourceView_temp_32[128] = { NULL };
        My_ID3D11DeviceContext_DSSetShaderResources(pID3D11DeviceContext_uid_5, 0, 128ull, pID3D11ShaderResourceView_temp_32);

        static ID3D11ShaderResourceView* pID3D11ShaderResourceView_temp_33[128] = { NULL };
        My_ID3D11DeviceContext_GSSetShaderResources(pID3D11DeviceContext_uid_5, 0, 128ull, pID3D11ShaderResourceView_temp_33);

        static ID3D11ShaderResourceView* pID3D11ShaderResourceView_temp_34[128] = { NULL };
        My_ID3D11DeviceContext_PSSetShaderResources(pID3D11DeviceContext_uid_5, 0, 128ull, pID3D11ShaderResourceView_temp_34);
    }

    static ID3D11Buffer* pID3D11Buffer_temp_20[14] = { NULL };
    My_ID3D11DeviceContext_CSSetConstantBuffers(pID3D11DeviceContext_uid_5, 0, 14ull, pID3D11Buffer_temp_20);

    static ID3D11SamplerState* pID3D11SamplerState_temp_11[16] = { NULL };
    My_ID3D11DeviceContext_CSSetSamplers(pID3D11DeviceContext_uid_5, 0, 16ull, pID3D11SamplerState_temp_11);

    My_ID3D11DeviceContext_CSSetShader(pID3D11DeviceContext_uid_5, NULL, nullptr, 0u);

    static ID3D11ShaderResourceView* pID3D11ShaderResourceView_temp_35[128] = { NULL };
    My_ID3D11DeviceContext_CSSetShaderResources(pID3D11DeviceContext_uid_5, 0, 128ull, pID3D11ShaderResourceView_temp_35);

    static ID3D11UnorderedAccessView* pID3D11UnorderedAccessView_temp_2[1] = { NULL };
    static UINT UINT_temp_16[1] = { 4294967295u };
    My_ID3D11DeviceContext_CSSetUnorderedAccessViews(pID3D11DeviceContext_uid_5, 0, 1ull, pID3D11UnorderedAccessView_temp_2, UINT_temp_16);

    My_ID3D11DeviceContext_IASetIndexBuffer(pID3D11DeviceContext_uid_5, pID3D11Buffer_uid_96, DXGI_FORMAT_R16_UINT, 0u);
    My_ID3D11DeviceContext_IASetInputLayout(pID3D11DeviceContext_uid_5, pID3D11InputLayout_uid_36);
    My_ID3D11DeviceContext_IASetPrimitiveTopology(pID3D11DeviceContext_uid_5, D3D_PRIMITIVE_TOPOLOGY_TRIANGLESTRIP);

    static ID3D11Buffer* pID3D11Buffer_temp_21[16] = { pID3D11Buffer_uid_34, pID3D11Buffer_uid_24, pID3D11Buffer_uid_24, pID3D11Buffer_uid_24, pID3D11Buffer_uid_24 };
    static UINT UINT_temp_17[16] = { 16u, 16u, 16u, 16u, 16u };
    static UINT UINT_temp_18[16] = { 0u, 5120u, 5136u, 5152u, 5168u };
    My_ID3D11DeviceContext_IASetVertexBuffers(pID3D11DeviceContext_uid_5, 0, 16ull, pID3D11Buffer_temp_21, UINT_temp_17, UINT_temp_18);

    static ID3D11Buffer* pID3D11Buffer_temp_22[14] = { pID3D11Buffer_uid_124, pID3D11Buffer_uid_69 };
    My_ID3D11DeviceContext_VSSetConstantBuffers(pID3D11DeviceContext_uid_5, 0, 14ull, pID3D11Buffer_temp_22);

    static ID3D11SamplerState* pID3D11SamplerState_temp_12[16] = { pID3D11SamplerState_uid_108, pID3D11SamplerState_uid_108, pID3D11SamplerState_uid_108, pID3D11SamplerState_uid_108, pID3D11SamplerState_uid_108 };
    My_ID3D11DeviceContext_VSSetSamplers(pID3D11DeviceContext_uid_5, 0, 16ull, pID3D11SamplerState_temp_12);

    My_ID3D11DeviceContext_VSSetShader(pID3D11DeviceContext_uid_5, pID3D11VertexShader_uid_37, nullptr, 0u);

    static ID3D11ShaderResourceView* pID3D11ShaderResourceView_temp_36[128] = { pID3D11ShaderResourceView_uid_123 };
    My_ID3D11DeviceContext_VSSetShaderResources(pID3D11DeviceContext_uid_5, 0, 128ull, pID3D11ShaderResourceView_temp_36);

    static ID3D11Buffer* pID3D11Buffer_temp_23[14] = { NULL };
    My_ID3D11DeviceContext_HSSetConstantBuffers(pID3D11DeviceContext_uid_5, 0, 14ull, pID3D11Buffer_temp_23);

    static ID3D11SamplerState* pID3D11SamplerState_temp_13[16] = { NULL };
    My_ID3D11DeviceContext_HSSetSamplers(pID3D11DeviceContext_uid_5, 0, 16ull, pID3D11SamplerState_temp_13);

    My_ID3D11DeviceContext_HSSetShader(pID3D11DeviceContext_uid_5, NULL, nullptr, 0u);

    static ID3D11ShaderResourceView* pID3D11ShaderResourceView_temp_37[128] = { NULL };
    My_ID3D11DeviceContext_HSSetShaderResources(pID3D11DeviceContext_uid_5, 0, 128ull, pID3D11ShaderResourceView_temp_37);

    static ID3D11Buffer* pID3D11Buffer_temp_24[14] = { NULL };
    My_ID3D11DeviceContext_DSSetConstantBuffers(pID3D11DeviceContext_uid_5, 0, 14ull, pID3D11Buffer_temp_24);

    static ID3D11SamplerState* pID3D11SamplerState_temp_14[16] = { NULL };
    My_ID3D11DeviceContext_DSSetSamplers(pID3D11DeviceContext_uid_5, 0, 16ull, pID3D11SamplerState_temp_14);

    My_ID3D11DeviceContext_DSSetShader(pID3D11DeviceContext_uid_5, NULL, nullptr, 0u);

    static ID3D11ShaderResourceView* pID3D11ShaderResourceView_temp_38[128] = { NULL };
    My_ID3D11DeviceContext_DSSetShaderResources(pID3D11DeviceContext_uid_5, 0, 128ull, pID3D11ShaderResourceView_temp_38);

    static ID3D11Buffer* pID3D11Buffer_temp_25[14] = { pID3D11Buffer_uid_70 };
    My_ID3D11DeviceContext_GSSetConstantBuffers(pID3D11DeviceContext_uid_5, 0, 14ull, pID3D11Buffer_temp_25);

    static ID3D11SamplerState* pID3D11SamplerState_temp_15[16] = { NULL };
    My_ID3D11DeviceContext_GSSetSamplers(pID3D11DeviceContext_uid_5, 0, 16ull, pID3D11SamplerState_temp_15);

    My_ID3D11DeviceContext_GSSetShader(pID3D11DeviceContext_uid_5, NULL, nullptr, 0u);

    static ID3D11ShaderResourceView* pID3D11ShaderResourceView_temp_39[128] = { NULL };
    My_ID3D11DeviceContext_GSSetShaderResources(pID3D11DeviceContext_uid_5, 0, 128ull, pID3D11ShaderResourceView_temp_39);

    static ID3D11Buffer* pID3D11Buffer_temp_26[4] = { NULL };
    static uint32_t uint32_t_temp_2[4] = { 4294967295u, 4294967295u, 4294967295u, 4294967295u };
    My_ID3D11DeviceContext_SOSetTargets(pID3D11DeviceContext_uid_5, 4ull, pID3D11Buffer_temp_26, uint32_t_temp_2);

    static D3D11_RECT D3D11_RECT_temp_3[1] = { {10, 10, 437, 266} };
    My_ID3D11DeviceContext_RSSetScissorRects(pID3D11DeviceContext_uid_5, 1u, D3D11_RECT_temp_3);

    My_ID3D11DeviceContext_RSSetState(pID3D11DeviceContext_uid_5, pID3D11RasterizerState_uid_39);

    static D3D11_VIEWPORT D3D11_VIEWPORT_temp_10[1] = { {0.0f, 0.0f, HexToFloat(0x44F00000/*1920.0f*/), HexToFloat(0x44870000/*1080.0f*/), 0.0f, HexToFloat(0x3F800000/*1.0f*/)} };
    My_ID3D11DeviceContext_RSSetViewports(pID3D11DeviceContext_uid_5, 1u, D3D11_VIEWPORT_temp_10);

    static ID3D11Buffer* pID3D11Buffer_temp_27[14] = { NULL, pID3D11Buffer_uid_70 };
    My_ID3D11DeviceContext_PSSetConstantBuffers(pID3D11DeviceContext_uid_5, 0, 14ull, pID3D11Buffer_temp_27);

    static ID3D11SamplerState* pID3D11SamplerState_temp_16[16] = { pID3D11SamplerState_uid_35 };
    My_ID3D11DeviceContext_PSSetSamplers(pID3D11DeviceContext_uid_5, 0, 16ull, pID3D11SamplerState_temp_16);

    My_ID3D11DeviceContext_PSSetShader(pID3D11DeviceContext_uid_5, pID3D11PixelShader_uid_38, nullptr, 0u);

    static ID3D11ShaderResourceView* pID3D11ShaderResourceView_temp_40[128] = { pID3D11ShaderResourceView_uid_20 };
    My_ID3D11DeviceContext_PSSetShaderResources(pID3D11DeviceContext_uid_5, 0, 128ull, pID3D11ShaderResourceView_temp_40);

    static float float_temp_2[4] = { HexToFloat(0x3F800000/*1.0f*/), HexToFloat(0x3F800000/*1.0f*/), HexToFloat(0x3F800000/*1.0f*/), HexToFloat(0x3F800000/*1.0f*/) };
    My_ID3D11DeviceContext_OMSetBlendState(pID3D11DeviceContext_uid_5, NULL, float_temp_2, 0xFFFFFFFFu);

    My_ID3D11DeviceContext_OMSetDepthStencilState(pID3D11DeviceContext_uid_5, NULL, 4294967295u);
    My_ID3D11DeviceContext_OMSetRenderTargets(pID3D11DeviceContext_uid_5, 1u, &pID3D11RenderTargetView_uid_16, NULL);
    My_ID3D11DeviceContext_SetPredication(pID3D11DeviceContext_uid_5, NULL, FALSE);
    if (hasFrameReset)
    {
        My_ID3D11DeviceContext_CopyResource(pID3D11DeviceContext_uid_5, ((ID3D11Texture2D*)pIUnknown_uid_15), pIUnknown_uid_15_Staging);
    }

    if (hasFrameReset)
    {
        My_ID3D11DeviceContext_CopyResource(pID3D11DeviceContext_uid_5, pID3D11Texture2D_uid_40, pID3D11Texture2D_uid_40_Staging);
    }

    if (hasFrameReset)
    {
        My_ID3D11DeviceContext_CopyResource(pID3D11DeviceContext_uid_5, pID3D11Texture2D_uid_65, pID3D11Texture2D_uid_65_Staging);
    }

    if (hasFrameReset)
    {
        My_ID3D11DeviceContext_CopyResource(pID3D11DeviceContext_uid_5, ((ID3D11Texture2D*)pID3D11Resource_uid_128), pID3D11Resource_uid_128_Staging);
    }

    if (hasFrameReset)
    {
        My_ID3D11DeviceContext_CopyResource(pID3D11DeviceContext_uid_5, pID3D11Texture2D_uid_132, pID3D11Texture2D_uid_132_Staging);
    }

    if (hasFrameReset)
    {
        My_ID3D11DeviceContext_CopyResource(pID3D11DeviceContext_uid_5, pID3D11Texture2D_uid_136, pID3D11Texture2D_uid_136_Staging);
    }

    if (hasFrameReset)
    {
        My_ID3D11DeviceContext_CopyResource(pID3D11DeviceContext_uid_5, ((ID3D11Texture2D*)pID3D11Resource_uid_140), pID3D11Resource_uid_140_Staging);
    }

    My_D3DPERF_EndEvent();
}

//-----------------------------------------------------------------------------
// ResetState00
//-----------------------------------------------------------------------------
void ResetState00()
{
    BEGIN_DATA_SCOPE_FUNCTION();

    My_D3DPERF_BeginEvent(0xFFC86464u, L"ResetState");
    My_D3DPERF_EndEvent();
}

NV_REPLAY_END_FRAME_SETUP()
