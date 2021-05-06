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
    My_ID3D11DeviceContext_Draw(pID3D11DeviceContext_uid_5, 2u, 0u);

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

    static ID3D11Buffer* pID3D11Buffer_temp_3[1] = { NULL };
    static UINT UINT_temp_3[1] = { 0u };
    static UINT UINT_temp_4[1] = { 0u };
    My_ID3D11DeviceContext_IASetVertexBuffers(pID3D11DeviceContext_uid_5, 0u, 1u, pID3D11Buffer_temp_3, UINT_temp_3, UINT_temp_4);

    static FLOAT FLOAT_temp_2;
    My_ID3D11DeviceContext_OMSetBlendState(pID3D11DeviceContext_uid_5, NULL, nullptr, 0xFFFFFFFFu);

    My_ID3D11DeviceContext_OMSetDepthStencilState(pID3D11DeviceContext_uid_5, pID3D11DepthStencilState_uid_56, 4294967295u);
    My_ID3D11DeviceContext_RSSetState(pID3D11DeviceContext_uid_5, pID3D11RasterizerState_uid_39);
    My_ID3D11DeviceContext_OMSetRenderTargets(pID3D11DeviceContext_uid_5, 1u, &pID3D11RenderTargetView_uid_130, NULL);

    // Map #4 [0...16]
    D3D11_MAPPED_SUBRESOURCE D3D11_MAPPED_SUBRESOURCE_temp_5;
    result = My_ID3D11DeviceContext_Map(pID3D11DeviceContext_uid_5, ((ID3D11Resource*)pID3D11Buffer_uid_57), 0u, D3D11_MAP_WRITE_DISCARD, 0, &D3D11_MAPPED_SUBRESOURCE_temp_5);
    NV_CHECK_RESULT(result);
    NV_MEMCPY_IN_FRAME(D3D11_MAPPED_SUBRESOURCE_temp_5.pData, NV_GET_RESOURCE(void*, 4), 64ull); // Applying update 0 to mapped data
    My_ID3D11DeviceContext_Unmap(pID3D11DeviceContext_uid_5, ((ID3D11Resource*)pID3D11Buffer_uid_57), 0u);
    My_ID3D11DeviceContext_VSSetConstantBuffers(pID3D11DeviceContext_uid_5, 0u, 1u, &pID3D11Buffer_uid_57);

    static D3D11_VIEWPORT D3D11_VIEWPORT_temp_2[1] = { {0.0f, 0.0f, HexToFloat(0x44800000/*1024.0f*/), HexToFloat(0x40000000/*2.0f*/), 0.0f, HexToFloat(0x3F800000/*1.0f*/)} };
    My_ID3D11DeviceContext_RSSetViewports(pID3D11DeviceContext_uid_5, 1u, D3D11_VIEWPORT_temp_2);

    // Draw #1 [0...8]
    My_ID3D11DeviceContext_Draw(pID3D11DeviceContext_uid_5, 2u, 0u);

    My_ID3D11DeviceContext_PSSetShader(pID3D11DeviceContext_uid_5, pID3D11PixelShader_uid_61, nullptr, 0u);
    My_ID3D11DeviceContext_PSSetShaderResources(pID3D11DeviceContext_uid_5, 0u, 1u, &pID3D11ShaderResourceView_uid_83);

    static FLOAT FLOAT_temp_3;
    My_ID3D11DeviceContext_OMSetBlendState(pID3D11DeviceContext_uid_5, NULL, nullptr, 0xFFFFFFFFu);

    My_ID3D11DeviceContext_OMSetDepthStencilState(pID3D11DeviceContext_uid_5, pID3D11DepthStencilState_uid_56, 4294967295u);
    My_ID3D11DeviceContext_RSSetState(pID3D11DeviceContext_uid_5, pID3D11RasterizerState_uid_39);
    My_ID3D11DeviceContext_OMSetRenderTargets(pID3D11DeviceContext_uid_5, 1u, &pID3D11RenderTargetView_uid_134, NULL);

    // Map #5 [0...16]
    D3D11_MAPPED_SUBRESOURCE D3D11_MAPPED_SUBRESOURCE_temp_6;
    result = My_ID3D11DeviceContext_Map(pID3D11DeviceContext_uid_5, ((ID3D11Resource*)pID3D11Buffer_uid_57), 0u, D3D11_MAP_WRITE_DISCARD, 0, &D3D11_MAPPED_SUBRESOURCE_temp_6);
    NV_CHECK_RESULT(result);
    NV_MEMCPY_IN_FRAME(D3D11_MAPPED_SUBRESOURCE_temp_6.pData, NV_GET_RESOURCE(void*, 5), 64ull); // Applying update 1 to mapped data
    My_ID3D11DeviceContext_Unmap(pID3D11DeviceContext_uid_5, ((ID3D11Resource*)pID3D11Buffer_uid_57), 0u);

    static D3D11_VIEWPORT D3D11_VIEWPORT_temp_3[1] = { {0.0f, 0.0f, HexToFloat(0x44800000/*1024.0f*/), HexToFloat(0x40000000/*2.0f*/), 0.0f, HexToFloat(0x3F800000/*1.0f*/)} };
    My_ID3D11DeviceContext_RSSetViewports(pID3D11DeviceContext_uid_5, 1u, D3D11_VIEWPORT_temp_3);

    // Draw #2 [0...8]
    My_ID3D11DeviceContext_Draw(pID3D11DeviceContext_uid_5, 2u, 0u);

    My_ID3D11DeviceContext_PSSetShader(pID3D11DeviceContext_uid_5, pID3D11PixelShader_uid_60, nullptr, 0u);
    My_ID3D11DeviceContext_PSSetShaderResources(pID3D11DeviceContext_uid_5, 0u, 1u, &pID3D11ShaderResourceView_uid_78);

    static FLOAT FLOAT_temp_4;
    My_ID3D11DeviceContext_OMSetBlendState(pID3D11DeviceContext_uid_5, NULL, nullptr, 0xFFFFFFFFu);

    My_ID3D11DeviceContext_OMSetDepthStencilState(pID3D11DeviceContext_uid_5, pID3D11DepthStencilState_uid_56, 4294967295u);
    My_ID3D11DeviceContext_RSSetState(pID3D11DeviceContext_uid_5, pID3D11RasterizerState_uid_39);
    My_ID3D11DeviceContext_OMSetRenderTargets(pID3D11DeviceContext_uid_5, 1u, &pID3D11RenderTargetView_uid_138, NULL);

    // Map #6 [0...16]
    D3D11_MAPPED_SUBRESOURCE D3D11_MAPPED_SUBRESOURCE_temp_7;
    result = My_ID3D11DeviceContext_Map(pID3D11DeviceContext_uid_5, ((ID3D11Resource*)pID3D11Buffer_uid_57), 0u, D3D11_MAP_WRITE_DISCARD, 0, &D3D11_MAPPED_SUBRESOURCE_temp_7);
    NV_CHECK_RESULT(result);
    NV_MEMCPY_IN_FRAME(D3D11_MAPPED_SUBRESOURCE_temp_7.pData, NV_GET_RESOURCE(void*, 6), 64ull); // Applying update 2 to mapped data
    My_ID3D11DeviceContext_Unmap(pID3D11DeviceContext_uid_5, ((ID3D11Resource*)pID3D11Buffer_uid_57), 0u);

    static D3D11_VIEWPORT D3D11_VIEWPORT_temp_4[1] = { {0.0f, 0.0f, HexToFloat(0x44800000/*1024.0f*/), HexToFloat(0x40000000/*2.0f*/), 0.0f, HexToFloat(0x3F800000/*1.0f*/)} };
    My_ID3D11DeviceContext_RSSetViewports(pID3D11DeviceContext_uid_5, 1u, D3D11_VIEWPORT_temp_4);

    // Draw #3 [0...8]
    My_ID3D11DeviceContext_Draw(pID3D11DeviceContext_uid_5, 16u, 0u);

    My_ID3D11DeviceContext_PSSetShaderResources(pID3D11DeviceContext_uid_5, 0u, 1u, &pID3D11ShaderResourceView_uid_78);

    static FLOAT FLOAT_temp_5;
    My_ID3D11DeviceContext_OMSetBlendState(pID3D11DeviceContext_uid_5, NULL, nullptr, 0xFFFFFFFFu);

    My_ID3D11DeviceContext_OMSetDepthStencilState(pID3D11DeviceContext_uid_5, pID3D11DepthStencilState_uid_56, 4294967295u);
    My_ID3D11DeviceContext_RSSetState(pID3D11DeviceContext_uid_5, pID3D11RasterizerState_uid_39);
    My_ID3D11DeviceContext_OMSetRenderTargets(pID3D11DeviceContext_uid_5, 1u, &pID3D11RenderTargetView_uid_142, NULL);

    // Map #7 [0...16]
    D3D11_MAPPED_SUBRESOURCE D3D11_MAPPED_SUBRESOURCE_temp_8;
    result = My_ID3D11DeviceContext_Map(pID3D11DeviceContext_uid_5, ((ID3D11Resource*)pID3D11Buffer_uid_57), 0u, D3D11_MAP_WRITE_DISCARD, 0, &D3D11_MAPPED_SUBRESOURCE_temp_8);
    NV_CHECK_RESULT(result);
    NV_MEMCPY_IN_FRAME(D3D11_MAPPED_SUBRESOURCE_temp_8.pData, NV_GET_RESOURCE(void*, 7), 64ull); // Applying update 3 to mapped data
    My_ID3D11DeviceContext_Unmap(pID3D11DeviceContext_uid_5, ((ID3D11Resource*)pID3D11Buffer_uid_57), 0u);

    static D3D11_VIEWPORT D3D11_VIEWPORT_temp_5[1] = { {0.0f, 0.0f, HexToFloat(0x44800000/*1024.0f*/), HexToFloat(0x40000000/*2.0f*/), 0.0f, HexToFloat(0x3F800000/*1.0f*/)} };
    My_ID3D11DeviceContext_RSSetViewports(pID3D11DeviceContext_uid_5, 1u, D3D11_VIEWPORT_temp_5);

    // Draw #4 [0...8]
    My_ID3D11DeviceContext_Draw(pID3D11DeviceContext_uid_5, 8u, 0u);

    My_D3DPERF_EndEvent();
    My_D3DPERF_BeginEvent(0, L"pass 0");
    My_D3DPERF_BeginEvent(0, L"picture cache target");
    My_D3DPERF_BeginEvent(0, L"target init");

    // Map #8 [0...16]
    D3D11_MAPPED_SUBRESOURCE D3D11_MAPPED_SUBRESOURCE_temp_9;
    result = My_ID3D11DeviceContext_Map(pID3D11DeviceContext_uid_5, ((ID3D11Resource*)pID3D11Buffer_uid_24), 0u, D3D11_MAP_WRITE_NO_OVERWRITE, 0, &D3D11_MAPPED_SUBRESOURCE_temp_9);
    NV_CHECK_RESULT(result);
    NV_MEMCPY_IN_FRAME(((unsigned char*)D3D11_MAPPED_SUBRESOURCE_temp_9.pData) + 5074ull, NV_GET_RESOURCE(void*, 8), 30ull); // Applying update 1 to mapped data
    My_ID3D11DeviceContext_Unmap(pID3D11DeviceContext_uid_5, ((ID3D11Resource*)pID3D11Buffer_uid_24), 0u);

    static ID3D11ShaderResourceView* pID3D11ShaderResourceView_temp_6[1] = { NULL };
    My_ID3D11DeviceContext_VSSetShaderResources(pID3D11DeviceContext_uid_5, 0u, 1u, pID3D11ShaderResourceView_temp_6);

    My_ID3D11DeviceContext_OMSetRenderTargets(pID3D11DeviceContext_uid_5, 1u, &pID3D11RenderTargetView_uid_42, pID3D11DepthStencilView_uid_45);

    static D3D11_VIEWPORT D3D11_VIEWPORT_temp_6[1] = { {0.0f, 0.0f, HexToFloat(0x44800000/*1024.0f*/), HexToFloat(0x44000000/*512.0f*/), 0.0f, HexToFloat(0x3F800000/*1.0f*/)} };
    My_ID3D11DeviceContext_RSSetViewports(pID3D11DeviceContext_uid_5, 1u, D3D11_VIEWPORT_temp_6);

    My_ID3D11DeviceContext_RSSetState(pID3D11DeviceContext_uid_5, pID3D11RasterizerState_uid_39);

    static FLOAT FLOAT_temp_6[4] = { 0.0f };
    My_ID3D11DeviceContext_OMSetBlendState(pID3D11DeviceContext_uid_5, pID3D11BlendState_uid_7, FLOAT_temp_6, 0xFFFFFFFFu);

    My_ID3D11DeviceContext_OMSetDepthStencilState(pID3D11DeviceContext_uid_5, pID3D11DepthStencilState_uid_56, 0u);
    My_ID3D11DeviceContext_VSSetShader(pID3D11DeviceContext_uid_5, pID3D11VertexShader_uid_95, nullptr, 0u);
    My_ID3D11DeviceContext_PSSetShader(pID3D11DeviceContext_uid_5, pID3D11PixelShader_uid_93, nullptr, 0u);

    static ID3D11ShaderResourceView* pID3D11ShaderResourceView_temp_7[1] = { NULL };
    My_ID3D11DeviceContext_PSSetShaderResources(pID3D11DeviceContext_uid_5, 0u, 1u, pID3D11ShaderResourceView_temp_7);

    My_ID3D11DeviceContext_VSSetConstantBuffers(pID3D11DeviceContext_uid_5, 0u, 1u, &pID3D11Buffer_uid_97);

    // Map #9 [0...16]
    D3D11_MAPPED_SUBRESOURCE D3D11_MAPPED_SUBRESOURCE_temp_10;
    result = My_ID3D11DeviceContext_Map(pID3D11DeviceContext_uid_5, ((ID3D11Resource*)pID3D11Buffer_uid_69), 0u, D3D11_MAP_WRITE_DISCARD, 0, &D3D11_MAPPED_SUBRESOURCE_temp_10);
    NV_CHECK_RESULT(result);
    NV_MEMCPY_IN_FRAME(D3D11_MAPPED_SUBRESOURCE_temp_10.pData, NV_GET_RESOURCE(void*, 9), 576ull); // Applying update 1 to mapped data
    My_ID3D11DeviceContext_Unmap(pID3D11DeviceContext_uid_5, ((ID3D11Resource*)pID3D11Buffer_uid_69), 0u);

    // Map #10 [0...16]
    D3D11_MAPPED_SUBRESOURCE D3D11_MAPPED_SUBRESOURCE_temp_11;
    result = My_ID3D11DeviceContext_Map(pID3D11DeviceContext_uid_5, ((ID3D11Resource*)pID3D11Buffer_uid_70), 0u, D3D11_MAP_WRITE_DISCARD, 0, &D3D11_MAPPED_SUBRESOURCE_temp_11);
    NV_CHECK_RESULT(result);
    NV_MEMCPY_IN_FRAME(D3D11_MAPPED_SUBRESOURCE_temp_11.pData, NV_GET_RESOURCE(void*, 10), 576ull); // Applying update 1 to mapped data
    My_ID3D11DeviceContext_Unmap(pID3D11DeviceContext_uid_5, ((ID3D11Resource*)pID3D11Buffer_uid_70), 0u);
    My_ID3D11DeviceContext_IASetInputLayout(pID3D11DeviceContext_uid_5, pID3D11InputLayout_uid_98);

    static ID3D11Buffer* pID3D11Buffer_temp_6[16] = { pID3D11Buffer_uid_99, pID3D11Buffer_uid_24, pID3D11Buffer_uid_24 };
    static UINT UINT_temp_5[16] = { 2u, 16u, 16u };
    static UINT UINT_temp_6[16] = { 0u, 5072u, 5088u };
    My_ID3D11DeviceContext_IASetVertexBuffers(pID3D11DeviceContext_uid_5, 0u, 16u, pID3D11Buffer_temp_6, UINT_temp_5, UINT_temp_6);

    My_ID3D11DeviceContext_IASetPrimitiveTopology(pID3D11DeviceContext_uid_5, D3D_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

    // Draw #5 [0...8]
    My_ID3D11DeviceContext_DrawIndexedInstanced(pID3D11DeviceContext_uid_5, 6u, 1u, 0u, 0, 0u);

    My_D3DPERF_EndEvent();
    My_D3DPERF_BeginEvent(0, L"opaque batches");
    My_D3DPERF_BeginEvent(0, L"B_YuvImage");

    // Map #11 [0...16]
    D3D11_MAPPED_SUBRESOURCE D3D11_MAPPED_SUBRESOURCE_temp_12;
    result = My_ID3D11DeviceContext_Map(pID3D11DeviceContext_uid_5, ((ID3D11Resource*)pID3D11Buffer_uid_24), 0u, D3D11_MAP_WRITE_NO_OVERWRITE, 0, &D3D11_MAPPED_SUBRESOURCE_temp_12);
    NV_CHECK_RESULT(result);
    NV_MEMCPY_IN_FRAME(((unsigned char*)D3D11_MAPPED_SUBRESOURCE_temp_12.pData) + 5108ull, NV_GET_RESOURCE(void*, 11), 8ull); // Applying update 2 to mapped data
    My_ID3D11DeviceContext_Unmap(pID3D11DeviceContext_uid_5, ((ID3D11Resource*)pID3D11Buffer_uid_24), 0u);
    My_ID3D11DeviceContext_OMSetRenderTargets(pID3D11DeviceContext_uid_5, 1u, &pID3D11RenderTargetView_uid_42, pID3D11DepthStencilView_uid_45);

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
    My_ID3D11DeviceContext_Flush(pID3D11DeviceContext_uid_5);
    My_D3DPERF_EndEvent();
    My_D3DPERF_BeginEvent(0, L"framebuffer");
    My_D3DPERF_BeginEvent(0, L"Composite");

    // Clear #0 [0...1]
    static FLOAT FLOAT_temp_8[4] = { HexToFloat(0x3F800000/*1.0f*/), HexToFloat(0x3F800000/*1.0f*/), HexToFloat(0x3F800000/*1.0f*/), HexToFloat(0x3F800000/*1.0f*/) };
    My_ID3D11DeviceContext_ClearRenderTargetView(pID3D11DeviceContext_uid_5, pID3D11RenderTargetView_uid_19, FLOAT_temp_8);

    // Clear #1 [0...1]
    My_ID3D11DeviceContext_ClearDepthStencilView(pID3D11DeviceContext_uid_5, pID3D11DepthStencilView_uid_22, 1u, HexToFloat(0x3F800000/*1.0f*/), 0);

    // Map #13 [0...16]
    D3D11_MAPPED_SUBRESOURCE D3D11_MAPPED_SUBRESOURCE_temp_14;
    result = My_ID3D11DeviceContext_Map(pID3D11DeviceContext_uid_5, ((ID3D11Resource*)pID3D11Buffer_uid_24), 0u, D3D11_MAP_WRITE_NO_OVERWRITE, 0, &D3D11_MAPPED_SUBRESOURCE_temp_14);
    NV_CHECK_RESULT(result);
    NV_MEMCPY_IN_FRAME(((unsigned char*)D3D11_MAPPED_SUBRESOURCE_temp_14.pData) + 5130ull, NV_GET_RESOURCE(void*, 13), 54ull); // Applying update 3 to mapped data
    My_ID3D11DeviceContext_Unmap(pID3D11DeviceContext_uid_5, ((ID3D11Resource*)pID3D11Buffer_uid_24), 0u);
    My_ID3D11DeviceContext_OMSetRenderTargets(pID3D11DeviceContext_uid_5, 1u, &pID3D11RenderTargetView_uid_19, pID3D11DepthStencilView_uid_22);

    static D3D11_VIEWPORT D3D11_VIEWPORT_temp_7[1] = { {0.0f, 0.0f, HexToFloat(0x44F00000/*1920.0f*/), HexToFloat(0x44870000/*1080.0f*/), 0.0f, HexToFloat(0x3F800000/*1.0f*/)} };
    My_ID3D11DeviceContext_RSSetViewports(pID3D11DeviceContext_uid_5, 1u, D3D11_VIEWPORT_temp_7);

    My_ID3D11DeviceContext_RSSetState(pID3D11DeviceContext_uid_5, pID3D11RasterizerState_uid_39);

    static FLOAT FLOAT_temp_9[4] = { 0.0f };
    My_ID3D11DeviceContext_OMSetBlendState(pID3D11DeviceContext_uid_5, pID3D11BlendState_uid_7, FLOAT_temp_9, 0xFFFFFFFFu);

    My_ID3D11DeviceContext_OMSetDepthStencilState(pID3D11DeviceContext_uid_5, pID3D11DepthStencilState_uid_105, 0u);
    My_ID3D11DeviceContext_VSSetShader(pID3D11DeviceContext_uid_5, pID3D11VertexShader_uid_122, nullptr, 0u);
    My_ID3D11DeviceContext_PSSetShader(pID3D11DeviceContext_uid_5, pID3D11PixelShader_uid_120, nullptr, 0u);
    My_ID3D11DeviceContext_VSSetSamplers(pID3D11DeviceContext_uid_5, 0u, 1u, &pID3D11SamplerState_uid_108);
    My_ID3D11DeviceContext_VSSetShaderResources(pID3D11DeviceContext_uid_5, 0u, 1u, &pID3D11ShaderResourceView_uid_123);

    static ID3D11ShaderResourceView* pID3D11ShaderResourceView_temp_14[4] = { NULL };
    My_ID3D11DeviceContext_VSSetShaderResources(pID3D11DeviceContext_uid_5, 1u, 4u, pID3D11ShaderResourceView_temp_14);

    My_ID3D11DeviceContext_PSSetSamplers(pID3D11DeviceContext_uid_5, 0u, 1u, &pID3D11SamplerState_uid_108);
    My_ID3D11DeviceContext_PSSetShaderResources(pID3D11DeviceContext_uid_5, 0u, 1u, &pID3D11ShaderResourceView_uid_123);
    My_ID3D11DeviceContext_VSSetConstantBuffers(pID3D11DeviceContext_uid_5, 0u, 1u, &pID3D11Buffer_uid_124);

    // Map #14 [0...16]
    D3D11_MAPPED_SUBRESOURCE D3D11_MAPPED_SUBRESOURCE_temp_15;
    result = My_ID3D11DeviceContext_Map(pID3D11DeviceContext_uid_5, ((ID3D11Resource*)pID3D11Buffer_uid_69), 0u, D3D11_MAP_WRITE_DISCARD, 0, &D3D11_MAPPED_SUBRESOURCE_temp_15);
    NV_CHECK_RESULT(result);
    NV_MEMCPY_IN_FRAME(D3D11_MAPPED_SUBRESOURCE_temp_15.pData, NV_GET_RESOURCE(void*, 14), 576ull); // Applying update 3 to mapped data
    My_ID3D11DeviceContext_Unmap(pID3D11DeviceContext_uid_5, ((ID3D11Resource*)pID3D11Buffer_uid_69), 0u);

    // Map #15 [0...16]
    D3D11_MAPPED_SUBRESOURCE D3D11_MAPPED_SUBRESOURCE_temp_16;
    result = My_ID3D11DeviceContext_Map(pID3D11DeviceContext_uid_5, ((ID3D11Resource*)pID3D11Buffer_uid_70), 0u, D3D11_MAP_WRITE_DISCARD, 0, &D3D11_MAPPED_SUBRESOURCE_temp_16);
    NV_CHECK_RESULT(result);
    NV_MEMCPY_IN_FRAME(D3D11_MAPPED_SUBRESOURCE_temp_16.pData, NV_GET_RESOURCE(void*, 15), 576ull); // Applying update 2 to mapped data
    My_ID3D11DeviceContext_Unmap(pID3D11DeviceContext_uid_5, ((ID3D11Resource*)pID3D11Buffer_uid_70), 0u);
    My_ID3D11DeviceContext_IASetInputLayout(pID3D11DeviceContext_uid_5, pID3D11InputLayout_uid_125);

    static ID3D11Buffer* pID3D11Buffer_temp_10[16] = { pID3D11Buffer_uid_99, pID3D11Buffer_uid_24, pID3D11Buffer_uid_24, pID3D11Buffer_uid_24, pID3D11Buffer_uid_24 };
    static UINT UINT_temp_9[16] = { 2u, 16u, 16u, 16u, 16u };
    static UINT UINT_temp_10[16] = { 0u, 5120u, 5136u, 5152u, 5168u };
    My_ID3D11DeviceContext_IASetVertexBuffers(pID3D11DeviceContext_uid_5, 0u, 16u, pID3D11Buffer_temp_10, UINT_temp_9, UINT_temp_10);

    // Draw #7 [0...8]
    My_ID3D11DeviceContext_DrawIndexedInstanced(pID3D11DeviceContext_uid_5, 6u, 1u, 0u, 0, 0u);

    My_D3DPERF_EndEvent();
    My_D3DPERF_EndEvent();
    My_D3DPERF_EndEvent();
    My_D3DPERF_BeginEvent(0, L"end frame");
    My_ID3D11DeviceContext_End(pID3D11DeviceContext_uid_5, ((ID3D11Asynchronous*)pID3D11Query_uid_225));
    My_D3DPERF_EndEvent();

    // Map #16 [0...16]
    D3D11_MAPPED_SUBRESOURCE D3D11_MAPPED_SUBRESOURCE_temp_17;
    result = My_ID3D11DeviceContext_Map(pID3D11DeviceContext_uid_5, ((ID3D11Resource*)pID3D11Buffer_uid_34), 0u, D3D11_MAP_WRITE_DISCARD, 0, &D3D11_MAPPED_SUBRESOURCE_temp_17);
    NV_CHECK_RESULT(result);
    NV_MEMCPY_IN_FRAME(D3D11_MAPPED_SUBRESOURCE_temp_17.pData, NV_GET_RESOURCE(void*, 16), 64ull); // Applying update 0 to mapped data
    My_ID3D11DeviceContext_Unmap(pID3D11DeviceContext_uid_5, ((ID3D11Resource*)pID3D11Buffer_uid_34), 0u);

    static UINT UINT_temp_11[1] = { 16u };
    static UINT UINT_temp_12[1] = { 0u };
    My_ID3D11DeviceContext_IASetVertexBuffers(pID3D11DeviceContext_uid_5, 0u, 1u, &pID3D11Buffer_uid_34, UINT_temp_11, UINT_temp_12);

    My_ID3D11DeviceContext_OMSetDepthStencilState(pID3D11DeviceContext_uid_5, NULL, 4294967295u);

    static FLOAT FLOAT_temp_10;
    My_ID3D11DeviceContext_OMSetBlendState(pID3D11DeviceContext_uid_5, NULL, nullptr, 0xFFFFFFFFu);

    My_ID3D11DeviceContext_RSSetState(pID3D11DeviceContext_uid_5, pID3D11RasterizerState_uid_39);
    My_ID3D11DeviceContext_IASetInputLayout(pID3D11DeviceContext_uid_5, pID3D11InputLayout_uid_36);
    My_ID3D11DeviceContext_IASetPrimitiveTopology(pID3D11DeviceContext_uid_5, D3D_PRIMITIVE_TOPOLOGY_TRIANGLESTRIP);
    My_ID3D11DeviceContext_VSSetShader(pID3D11DeviceContext_uid_5, pID3D11VertexShader_uid_37, nullptr, 0u);
    My_ID3D11DeviceContext_PSSetShader(pID3D11DeviceContext_uid_5, pID3D11PixelShader_uid_38, nullptr, 0u);
    My_ID3D11DeviceContext_OMSetRenderTargets(pID3D11DeviceContext_uid_5, 1u, &pID3D11RenderTargetView_uid_16, NULL);

    static D3D11_VIEWPORT D3D11_VIEWPORT_temp_8[1] = { {0.0f, 0.0f, HexToFloat(0x44F00000/*1920.0f*/), HexToFloat(0x44870000/*1080.0f*/), 0.0f, HexToFloat(0x3F800000/*1.0f*/)} };
    My_ID3D11DeviceContext_RSSetViewports(pID3D11DeviceContext_uid_5, 1u, D3D11_VIEWPORT_temp_8);

    My_ID3D11DeviceContext_PSSetShaderResources(pID3D11DeviceContext_uid_5, 0u, 1u, &pID3D11ShaderResourceView_uid_20);
    My_ID3D11DeviceContext_PSSetSamplers(pID3D11DeviceContext_uid_5, 0u, 1u, &pID3D11SamplerState_uid_35);

    // Draw #8 [0...8]
    My_ID3D11DeviceContext_Draw(pID3D11DeviceContext_uid_5, 4u, 0u);

    static RECT RECT_temp_1[1] = { {0, 0, 1920, 1080} };
    static DXGI_PRESENT_PARAMETERS DXGI_PRESENT_PARAMETERS_temp_1 = {1u, RECT_temp_1, NULL, NULL};
    result = My_IDXGISwapChain1_Present1(pIDXGISwapChain1_uid_14, 1u, 0u, &DXGI_PRESENT_PARAMETERS_temp_1);
    NV_CHECK_PRESENT_RESULT(result, pIDXGISwapChain1_uid_14);
}

NV_REPLAY_END_FRAME()
