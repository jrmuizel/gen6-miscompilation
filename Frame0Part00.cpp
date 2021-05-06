//-----------------------------------------------------------------------------
// Generated with NVIDIA Nsight Graphics 2021.2.1.0
// 
// File: Frame0Part00.cpp
// 
//-----------------------------------------------------------------------------

#include <d3d9.h>
#include <d3d11.h>
#include <dxgi1_2.h>

#ifndef FUNCTION_OVERRIDES_H_DEF
#include "function_overrides.h"
#define FUNCTION_OVERRIDES_H_DEF
#endif
#include "DXGIReplay.h"
#include "D3D11Replay.h"
#include "Resources.h"
#include "Helpers.h"
#include "ReplayHelpers.h"
#include "Threading.h"

NV_REPLAY_BEGIN_FRAME()

//-----------------------------------------------------------------------------
// RunFrame0Part00
//-----------------------------------------------------------------------------
void RunFrame0Part00(uint64_t frameIndex)
{
    BEGIN_DATA_SCOPE_FUNCTION();

    My_D3DPERF_BeginEvent(0, L"build samples");
    My_D3DPERF_EndEvent();
    My_D3DPERF_BeginEvent(0, L"begin frame");
    My_D3DPERF_BeginEvent(0, L"texture cache update");
    My_D3DPERF_EndEvent();
    My_D3DPERF_EndEvent();
    My_D3DPERF_BeginEvent(0, L"gpu cache update");

    // Map #0 [0...16]
    D3D11_MAPPED_SUBRESOURCE D3D11_MAPPED_SUBRESOURCE_temp_1;
    result = My_ID3D11DeviceContext_Map(pID3D11DeviceContext_uid_5, ((ID3D11Resource*)pID3D11Buffer_uid_24), 0u, D3D11_MAP_WRITE_DISCARD, 0, &D3D11_MAPPED_SUBRESOURCE_temp_1);
    NV_CHECK_RESULT(result);
    NV_MEMCPY_IN_FRAME(D3D11_MAPPED_SUBRESOURCE_temp_1.pData, NV_GET_RESOURCE(void*, 0), 1048576ull); // Applying update 0 to mapped data
    My_ID3D11DeviceContext_Unmap(pID3D11DeviceContext_uid_5, ((ID3D11Resource*)pID3D11Buffer_uid_24), 0u);
    My_ID3D11DeviceContext_OMSetRenderTargets(pID3D11DeviceContext_uid_5, 1u, &pID3D11RenderTargetView_uid_67, NULL);

    static D3D11_VIEWPORT D3D11_VIEWPORT_temp_1[1] = { {0.0f, 0.0f, HexToFloat(0x44800000/*1024.0f*/), HexToFloat(0x41A00000/*20.0f*/), 0.0f, HexToFloat(0x3F800000/*1.0f*/)} };
    My_ID3D11DeviceContext_RSSetViewports(pID3D11DeviceContext_uid_5, 1u, D3D11_VIEWPORT_temp_1);

    My_ID3D11DeviceContext_RSSetState(pID3D11DeviceContext_uid_5, pID3D11RasterizerState_uid_39);

    static FLOAT FLOAT_temp_1[4] = { 0.0f };
    My_ID3D11DeviceContext_OMSetBlendState(pID3D11DeviceContext_uid_5, pID3D11BlendState_uid_7, FLOAT_temp_1, 0xFFFFFFFFu);

    My_ID3D11DeviceContext_OMSetDepthStencilState(pID3D11DeviceContext_uid_5, pID3D11DepthStencilState_uid_68, 0u);
    My_ID3D11DeviceContext_VSSetShader(pID3D11DeviceContext_uid_5, pID3D11VertexShader_uid_31, nullptr, 0u);
    My_ID3D11DeviceContext_GSSetShader(pID3D11DeviceContext_uid_5, pID3D11GeometryShader_uid_33, nullptr, 0u);
    My_ID3D11DeviceContext_PSSetShader(pID3D11DeviceContext_uid_5, pID3D11PixelShader_uid_29, nullptr, 0u);

    static ID3D11ShaderResourceView* pID3D11ShaderResourceView_temp_1[1] = { NULL };
    My_ID3D11DeviceContext_PSSetShaderResources(pID3D11DeviceContext_uid_5, 0u, 1u, pID3D11ShaderResourceView_temp_1);

    static ID3D11Buffer* pID3D11Buffer_temp_1[1] = { NULL };
    My_ID3D11DeviceContext_VSSetConstantBuffers(pID3D11DeviceContext_uid_5, 0u, 1u, pID3D11Buffer_temp_1);

    // Map #1 [0...16]
    D3D11_MAPPED_SUBRESOURCE D3D11_MAPPED_SUBRESOURCE_temp_2;
    result = My_ID3D11DeviceContext_Map(pID3D11DeviceContext_uid_5, ((ID3D11Resource*)pID3D11Buffer_uid_69), 0u, D3D11_MAP_WRITE_DISCARD, 0, &D3D11_MAPPED_SUBRESOURCE_temp_2);
    NV_CHECK_RESULT(result);
    NV_MEMCPY_IN_FRAME(D3D11_MAPPED_SUBRESOURCE_temp_2.pData, NV_GET_RESOURCE(void*, 1), 576ull); // Applying update 0 to mapped data
    My_ID3D11DeviceContext_Unmap(pID3D11DeviceContext_uid_5, ((ID3D11Resource*)pID3D11Buffer_uid_69), 0u);

    // Map #2 [0...16]
    D3D11_MAPPED_SUBRESOURCE D3D11_MAPPED_SUBRESOURCE_temp_3;
    result = My_ID3D11DeviceContext_Map(pID3D11DeviceContext_uid_5, ((ID3D11Resource*)pID3D11Buffer_uid_70), 0u, D3D11_MAP_WRITE_DISCARD, 0, &D3D11_MAPPED_SUBRESOURCE_temp_3);
    NV_CHECK_RESULT(result);
    NV_MEMCPY_IN_FRAME(D3D11_MAPPED_SUBRESOURCE_temp_3.pData, NV_GET_RESOURCE(void*, 2), 576ull); // Applying update 0 to mapped data
    My_ID3D11DeviceContext_Unmap(pID3D11DeviceContext_uid_5, ((ID3D11Resource*)pID3D11Buffer_uid_70), 0u);
    My_ID3D11DeviceContext_IASetInputLayout(pID3D11DeviceContext_uid_5, pID3D11InputLayout_uid_71);

    static ID3D11Buffer* pID3D11Buffer_temp_2[16] = { pID3D11Buffer_uid_24, pID3D11Buffer_uid_24 };
    static UINT UINT_temp_1[16] = { 16u, 4u };
    static UINT UINT_temp_2[16] = { 5040u, 5024u };
    My_ID3D11DeviceContext_IASetVertexBuffers(pID3D11DeviceContext_uid_5, 0u, 16u, pID3D11Buffer_temp_2, UINT_temp_1, UINT_temp_2);

    My_ID3D11DeviceContext_IASetPrimitiveTopology(pID3D11DeviceContext_uid_5, D3D_PRIMITIVE_TOPOLOGY_POINTLIST);

    // Draw #0 [0...8]
    //My_ID3D11DeviceContext_Draw(pID3D11DeviceContext_uid_5, 2u, 0u);

    My_D3DPERF_EndEvent();
    My_ID3D11DeviceContext_Flush(pID3D11DeviceContext_uid_5);
    My_D3DPERF_BeginEvent(0, L"draw frame");
    My_D3DPERF_BeginEvent(0, L"data init");

    // Only map and populate this transient staging resource on the first frame
    static bool staticbool_temp_1 = true;
    if (staticbool_temp_1)
    {
        BEGIN_DATA_SCOPE();

        staticbool_temp_1 = false;

        // Map #3 [0...16]
        D3D11_MAPPED_SUBRESOURCE D3D11_MAPPED_SUBRESOURCE_temp_4;
        result = My_ID3D11DeviceContext_Map(pID3D11DeviceContext_uid_5, ((ID3D11Resource*)pID3D11Buffer_uid_72), 0u, D3D11_MAP_WRITE, 0, &D3D11_MAPPED_SUBRESOURCE_temp_4);
        NV_CHECK_RESULT(result);
        NV_MEMCPY_IN_FRAME(D3D11_MAPPED_SUBRESOURCE_temp_4.pData, NV_GET_RESOURCE(void*, 3), 4096ull); // Applying update 0 to mapped data
    }

    My_ID3D11DeviceContext_Unmap(pID3D11DeviceContext_uid_5, ((ID3D11Resource*)pID3D11Buffer_uid_72), 0u);

    static D3D11_BOX D3D11_BOX_temp_1 = {0u, 0u, 0u, 1048576u, 1u, 1u};
    My_ID3D11DeviceContext_CopySubresourceRegion(pID3D11DeviceContext_uid_5, pID3D11Resource_uid_77, 0u, 0u, 0u, 0u, ((ID3D11Resource*)pID3D11Buffer_uid_72), 0u, &D3D11_BOX_temp_1);

    My_ID3D11DeviceContext_VSSetShader(pID3D11DeviceContext_uid_5, pID3D11VertexShader_uid_58, nullptr, 0u);
    My_ID3D11DeviceContext_GSSetShader(pID3D11DeviceContext_uid_5, NULL, nullptr, 0u);
    My_ID3D11DeviceContext_PSSetShader(pID3D11DeviceContext_uid_5, pID3D11PixelShader_uid_60, nullptr, 0u);
    My_ID3D11DeviceContext_PSSetShaderResources(pID3D11DeviceContext_uid_5, 0u, 1u, &pID3D11ShaderResourceView_uid_78);
    My_ID3D11DeviceContext_IASetInputLayout(pID3D11DeviceContext_uid_5, NULL);


    My_D3DPERF_EndEvent();
    My_D3DPERF_BeginEvent(0, L"pass 0");
    My_D3DPERF_BeginEvent(0, L"picture cache target");
    My_D3DPERF_BeginEvent(0, L"target init");



    static D3D11_VIEWPORT D3D11_VIEWPORT_temp_6[1] = { {0.0f, 0.0f, HexToFloat(0x44800000/*1024.0f*/), HexToFloat(0x44000000/*512.0f*/), 0.0f, HexToFloat(0x3F800000/*1.0f*/)} };
    My_ID3D11DeviceContext_RSSetViewports(pID3D11DeviceContext_uid_5, 1u, D3D11_VIEWPORT_temp_6);



    My_ID3D11DeviceContext_IASetPrimitiveTopology(pID3D11DeviceContext_uid_5, D3D_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

    My_D3DPERF_EndEvent();
    My_D3DPERF_BeginEvent(0, L"opaque batches");
    My_D3DPERF_BeginEvent(0, L"B_YuvImage");
    FLOAT color[4] = { 1., 1, 1, 1};
    My_ID3D11DeviceContext_ClearRenderTargetView(pID3D11DeviceContext_uid_5, pID3D11RenderTargetView_uid_16, color);
    // Map #11 [0...16]
    D3D11_MAPPED_SUBRESOURCE D3D11_MAPPED_SUBRESOURCE_temp_12;
    result = My_ID3D11DeviceContext_Map(pID3D11DeviceContext_uid_5, ((ID3D11Resource*)pID3D11Buffer_uid_24), 0u, D3D11_MAP_WRITE_NO_OVERWRITE, 0, &D3D11_MAPPED_SUBRESOURCE_temp_12);
    NV_CHECK_RESULT(result);
    NV_MEMCPY_IN_FRAME(((unsigned char*)D3D11_MAPPED_SUBRESOURCE_temp_12.pData) + 5108ull, NV_GET_RESOURCE(void*, 11), 8ull); // Applying update 2 to mapped data
    My_ID3D11DeviceContext_Unmap(pID3D11DeviceContext_uid_5, ((ID3D11Resource*)pID3D11Buffer_uid_24), 0u);
    My_ID3D11DeviceContext_OMSetRenderTargets(pID3D11DeviceContext_uid_5, 1u, &pID3D11RenderTargetView_uid_16, pID3D11DepthStencilView_uid_22);

    static D3D11_RECT D3D11_RECT_temp_1[1] = { {10, 10, 437, 266} };
    My_ID3D11DeviceContext_RSSetScissorRects(pID3D11DeviceContext_uid_5, 1u, D3D11_RECT_temp_1);

    My_ID3D11DeviceContext_RSSetState(pID3D11DeviceContext_uid_5, pID3D11RasterizerState_uid_104);

    static FLOAT FLOAT_temp_7[4] = { 0.0f };
    My_ID3D11DeviceContext_OMSetBlendState(pID3D11DeviceContext_uid_5, pID3D11BlendState_uid_7, FLOAT_temp_7, 0xFFFFFFFFu);

    My_ID3D11DeviceContext_OMSetDepthStencilState(pID3D11DeviceContext_uid_5, pID3D11DepthStencilState_uid_105, 0u);
    My_ID3D11DeviceContext_VSSetShader(pID3D11DeviceContext_uid_5, pID3D11VertexShader_uid_103, nullptr, 0u);
    My_ID3D11DeviceContext_PSSetShader(pID3D11DeviceContext_uid_5, pID3D11PixelShader_uid_101, nullptr, 0u);
    My_ID3D11DeviceContext_VSSetSamplers(pID3D11DeviceContext_uid_5, 0u, 1u, &pID3D11SamplerState_uid_106);
    My_ID3D11DeviceContext_VSSetShaderResources(pID3D11DeviceContext_uid_5, 0u, 1u, &pID3D11ShaderResourceView_uid_107);
    My_ID3D11DeviceContext_VSSetShaderResources(pID3D11DeviceContext_uid_5, 1u, 1u, &pID3D11ShaderResourceView_uid_213);
    My_ID3D11DeviceContext_VSSetShaderResources(pID3D11DeviceContext_uid_5, 2u, 1u, &pID3D11ShaderResourceView_uid_110);
    My_ID3D11DeviceContext_VSSetShaderResources(pID3D11DeviceContext_uid_5, 3u, 1u, &pID3D11ShaderResourceView_uid_214);
    My_ID3D11DeviceContext_VSSetShaderResources(pID3D11DeviceContext_uid_5, 4u, 1u, &pID3D11ShaderResourceView_uid_215);
    My_ID3D11DeviceContext_VSSetConstantBuffers(pID3D11DeviceContext_uid_5, 0u, 1u, &pID3D11Buffer_uid_113);

    // Map #12 [0...16]
    D3D11_MAPPED_SUBRESOURCE D3D11_MAPPED_SUBRESOURCE_temp_13;
    result = My_ID3D11DeviceContext_Map(pID3D11DeviceContext_uid_5, ((ID3D11Resource*)pID3D11Buffer_uid_69), 0u, D3D11_MAP_WRITE_DISCARD, 0, &D3D11_MAPPED_SUBRESOURCE_temp_13);
    NV_CHECK_RESULT(result);
    NV_MEMCPY_IN_FRAME(D3D11_MAPPED_SUBRESOURCE_temp_13.pData, NV_GET_RESOURCE(void*, 12), 576ull); // Applying update 2 to mapped data
    My_ID3D11DeviceContext_Unmap(pID3D11DeviceContext_uid_5, ((ID3D11Resource*)pID3D11Buffer_uid_69), 0u);
    My_ID3D11DeviceContext_IASetInputLayout(pID3D11DeviceContext_uid_5, pID3D11InputLayout_uid_114);

    static ID3D11Buffer* pID3D11Buffer_temp_8[16] = { pID3D11Buffer_uid_99, pID3D11Buffer_uid_24 };
    static UINT UINT_temp_7[16] = { 2u, 16u };
    static UINT UINT_temp_8[16] = { 0u, 5104u };
    My_ID3D11DeviceContext_IASetVertexBuffers(pID3D11DeviceContext_uid_5, 0u, 16u, pID3D11Buffer_temp_8, UINT_temp_7, UINT_temp_8);

    // Draw #6 [0...8]
    My_ID3D11DeviceContext_DrawIndexedInstanced(pID3D11DeviceContext_uid_5, 6u, 1u, 0u, 0, 0u);

    My_D3DPERF_EndEvent();
    My_D3DPERF_EndEvent();
    My_D3DPERF_EndEvent();
    My_D3DPERF_EndEvent();

    My_D3DPERF_EndEvent();
    My_ID3D11DeviceContext_End(pID3D11DeviceContext_uid_5, ((ID3D11Asynchronous*)pID3D11Query_uid_225));

    static RECT RECT_temp_1[1] = { {0, 0, 1920, 1080} };
    static DXGI_PRESENT_PARAMETERS DXGI_PRESENT_PARAMETERS_temp_1 = {1u, RECT_temp_1, NULL, NULL};
    result = My_IDXGISwapChain1_Present1(pIDXGISwapChain1_uid_14, 1u, 0u, &DXGI_PRESENT_PARAMETERS_temp_1);
    NV_CHECK_PRESENT_RESULT(result, pIDXGISwapChain1_uid_14);
}

NV_REPLAY_END_FRAME()
