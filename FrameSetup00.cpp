//-----------------------------------------------------------------------------
// Generated with NVIDIA Nsight Graphics 2021.2.1.0
// 
// File: FrameSetup00.cpp
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
// SetInitialFrameState00
//-----------------------------------------------------------------------------
void SetInitialFrameState00()
{
    BEGIN_DATA_SCOPE_FUNCTION();

    // Initialize pIUnknown_uid_15
    {
        BEGIN_DATA_SCOPE();

        std::vector<uint8_t> std_vector_of_uint8_t_temp_1;
        Serialization::BlobProxy<uint8_t*> Serialization_BlobProxy_of_uint8_t__temp_1;
        static D3D11_TEXTURE2D_DESC D3D11_TEXTURE2D_DESC_temp_9 = {1920u, 1080u, 1u, 1u, DXGI_FORMAT_B8G8R8A8_UNORM, {1u, 0u}, D3D11_USAGE_STAGING, (D3D11_BIND_FLAG)0, D3D11_CPU_ACCESS_READ, (D3D11_RESOURCE_MISC_FLAG)0};
        result = My_ID3D11Device_CreateTexture2D(pID3D11Device_uid_4, &D3D11_TEXTURE2D_DESC_temp_9, InitializeSubresourceDataD3D11(17, std_vector_of_uint8_t_temp_1, Serialization_BlobProxy_of_uint8_t__temp_1), &pIUnknown_uid_15_Staging);
        NV_CHECK_RESULT(result);

        NV_SET_OBJECT_NAME(pIUnknown_uid_15_Staging, "NvdaReplayerPrivate");
        My_ID3D11DeviceContext_CopyResource(pID3D11DeviceContext_uid_5, ((ID3D11Texture2D*)pIUnknown_uid_15), pIUnknown_uid_15_Staging);
        if (!hasFrameReset)
        {
            BEGIN_DATA_SCOPE();

            NV_SAFE_RELEASE(pIUnknown_uid_15_Staging);
        }
    }

    // Initialize pID3D11Texture2D_uid_40
    {
        BEGIN_DATA_SCOPE();

        std::vector<uint8_t> std_vector_of_uint8_t_temp_2;
        Serialization::BlobProxy<uint8_t*> Serialization_BlobProxy_of_uint8_t__temp_2;
        static D3D11_TEXTURE2D_DESC D3D11_TEXTURE2D_DESC_temp_10 = {1024u, 512u, 1u, 1u, DXGI_FORMAT_R8G8B8A8_UNORM, {1u, 0u}, D3D11_USAGE_STAGING, (D3D11_BIND_FLAG)0, D3D11_CPU_ACCESS_READ, (D3D11_RESOURCE_MISC_FLAG)0};
        result = My_ID3D11Device_CreateTexture2D(pID3D11Device_uid_4, &D3D11_TEXTURE2D_DESC_temp_10, InitializeSubresourceDataD3D11(18, std_vector_of_uint8_t_temp_2, Serialization_BlobProxy_of_uint8_t__temp_2), &pID3D11Texture2D_uid_40_Staging);
        NV_CHECK_RESULT(result);

        NV_SET_OBJECT_NAME(pID3D11Texture2D_uid_40_Staging, "NvdaReplayerPrivate");
        My_ID3D11DeviceContext_CopyResource(pID3D11DeviceContext_uid_5, pID3D11Texture2D_uid_40, pID3D11Texture2D_uid_40_Staging);
        if (!hasFrameReset)
        {
            BEGIN_DATA_SCOPE();

            NV_SAFE_RELEASE(pID3D11Texture2D_uid_40_Staging);
        }
    }

    // Initialize pID3D11Resource_uid_46
    {
        BEGIN_DATA_SCOPE();

        std::vector<uint8_t> std_vector_of_uint8_t_temp_3;
        Serialization::BlobProxy<uint8_t*> Serialization_BlobProxy_of_uint8_t__temp_3;
        static D3D11_TEXTURE2D_DESC D3D11_TEXTURE2D_DESC_temp_11 = {427u, 640u, 1u, 1u, DXGI_FORMAT_R8_UNORM, {1u, 0u}, D3D11_USAGE_STAGING, (D3D11_BIND_FLAG)0, D3D11_CPU_ACCESS_READ, (D3D11_RESOURCE_MISC_FLAG)0};
        result = My_ID3D11Device_CreateTexture2D(pID3D11Device_uid_4, &D3D11_TEXTURE2D_DESC_temp_11, InitializeSubresourceDataD3D11(19, std_vector_of_uint8_t_temp_3, Serialization_BlobProxy_of_uint8_t__temp_3), &pID3D11Resource_uid_46_Staging);
        NV_CHECK_RESULT(result);

        NV_SET_OBJECT_NAME(pID3D11Resource_uid_46_Staging, "NvdaReplayerPrivate");

        // pID3D11Resource_uid_46 does not change in the frame; initialize it and release its staging resource immediately
        My_ID3D11DeviceContext_CopyResource(pID3D11DeviceContext_uid_5, ((ID3D11Texture2D*)pID3D11Resource_uid_46), pID3D11Resource_uid_46_Staging);
        NV_SAFE_RELEASE(pID3D11Resource_uid_46_Staging);
    }

    // Initialize pID3D11Texture2D_uid_65
    {
        BEGIN_DATA_SCOPE();

        std::vector<uint8_t> std_vector_of_uint8_t_temp_4;
        Serialization::BlobProxy<uint8_t*> Serialization_BlobProxy_of_uint8_t__temp_4;
        static D3D11_TEXTURE2D_DESC D3D11_TEXTURE2D_DESC_temp_12 = {1024u, 20u, 1u, 1u, DXGI_FORMAT_R32G32B32A32_FLOAT, {1u, 0u}, D3D11_USAGE_STAGING, (D3D11_BIND_FLAG)0, D3D11_CPU_ACCESS_READ, (D3D11_RESOURCE_MISC_FLAG)0};
        result = My_ID3D11Device_CreateTexture2D(pID3D11Device_uid_4, &D3D11_TEXTURE2D_DESC_temp_12, InitializeSubresourceDataD3D11(20, std_vector_of_uint8_t_temp_4, Serialization_BlobProxy_of_uint8_t__temp_4), &pID3D11Texture2D_uid_65_Staging);
        NV_CHECK_RESULT(result);

        NV_SET_OBJECT_NAME(pID3D11Texture2D_uid_65_Staging, "NvdaReplayerPrivate");
        My_ID3D11DeviceContext_CopyResource(pID3D11DeviceContext_uid_5, pID3D11Texture2D_uid_65, pID3D11Texture2D_uid_65_Staging);
        if (!hasFrameReset)
        {
            BEGIN_DATA_SCOPE();

            NV_SAFE_RELEASE(pID3D11Texture2D_uid_65_Staging);
        }
    }

    // Initialize pID3D11Buffer_uid_96
    {
        BEGIN_DATA_SCOPE();

        static D3D11_SUBRESOURCE_DATA D3D11_SUBRESOURCE_DATA_temp_6 = {NULL, 0u, 0u};
        D3D11_SUBRESOURCE_DATA_temp_6.pSysMem = NV_GET_RESOURCE(const void*, 21);

        static D3D11_BUFFER_DESC D3D11_BUFFER_DESC_temp_6 = {12u, D3D11_USAGE_STAGING, (D3D11_BIND_FLAG)0, D3D11_CPU_ACCESS_READ, (D3D11_RESOURCE_MISC_FLAG)0, 0u};
        result = My_ID3D11Device_CreateBuffer(pID3D11Device_uid_4, &D3D11_BUFFER_DESC_temp_6, &D3D11_SUBRESOURCE_DATA_temp_6, &pID3D11Buffer_uid_96_Staging);
        NV_CHECK_RESULT(result);

        NV_SET_OBJECT_NAME(pID3D11Buffer_uid_96_Staging, "NvdaReplayerPrivate");

        // pID3D11Buffer_uid_96 does not change in the frame; initialize it and release its staging resource immediately
        My_ID3D11DeviceContext_CopyResource(pID3D11DeviceContext_uid_5, pID3D11Buffer_uid_96, pID3D11Buffer_uid_96_Staging);
        NV_SAFE_RELEASE(pID3D11Buffer_uid_96_Staging);
    }

    // Initialize pID3D11Buffer_uid_97
    {
        BEGIN_DATA_SCOPE();

        static D3D11_SUBRESOURCE_DATA D3D11_SUBRESOURCE_DATA_temp_7 = {NULL, 0u, 0u};
        D3D11_SUBRESOURCE_DATA_temp_7.pSysMem = NV_GET_RESOURCE(const void*, 22);

        static D3D11_BUFFER_DESC D3D11_BUFFER_DESC_temp_7 = {80u, D3D11_USAGE_STAGING, (D3D11_BIND_FLAG)0, D3D11_CPU_ACCESS_READ, (D3D11_RESOURCE_MISC_FLAG)0, 0u};
        result = My_ID3D11Device_CreateBuffer(pID3D11Device_uid_4, &D3D11_BUFFER_DESC_temp_7, &D3D11_SUBRESOURCE_DATA_temp_7, &pID3D11Buffer_uid_97_Staging);
        NV_CHECK_RESULT(result);

        NV_SET_OBJECT_NAME(pID3D11Buffer_uid_97_Staging, "NvdaReplayerPrivate");

        // pID3D11Buffer_uid_97 does not change in the frame; initialize it and release its staging resource immediately
        My_ID3D11DeviceContext_CopyResource(pID3D11DeviceContext_uid_5, pID3D11Buffer_uid_97, pID3D11Buffer_uid_97_Staging);
        NV_SAFE_RELEASE(pID3D11Buffer_uid_97_Staging);
    }

    // Initialize pID3D11Buffer_uid_99
    {
        BEGIN_DATA_SCOPE();

        static D3D11_SUBRESOURCE_DATA D3D11_SUBRESOURCE_DATA_temp_8 = {NULL, 0u, 0u};
        D3D11_SUBRESOURCE_DATA_temp_8.pSysMem = NV_GET_RESOURCE(const void*, 23);

        static D3D11_BUFFER_DESC D3D11_BUFFER_DESC_temp_8 = {8u, D3D11_USAGE_STAGING, (D3D11_BIND_FLAG)0, D3D11_CPU_ACCESS_READ, (D3D11_RESOURCE_MISC_FLAG)0, 0u};
        result = My_ID3D11Device_CreateBuffer(pID3D11Device_uid_4, &D3D11_BUFFER_DESC_temp_8, &D3D11_SUBRESOURCE_DATA_temp_8, &pID3D11Buffer_uid_99_Staging);
        NV_CHECK_RESULT(result);

        NV_SET_OBJECT_NAME(pID3D11Buffer_uid_99_Staging, "NvdaReplayerPrivate");

        // pID3D11Buffer_uid_99 does not change in the frame; initialize it and release its staging resource immediately
        My_ID3D11DeviceContext_CopyResource(pID3D11DeviceContext_uid_5, pID3D11Buffer_uid_99, pID3D11Buffer_uid_99_Staging);
        NV_SAFE_RELEASE(pID3D11Buffer_uid_99_Staging);
    }

    // Initialize pID3D11Buffer_uid_113
    {
        BEGIN_DATA_SCOPE();

        static D3D11_SUBRESOURCE_DATA D3D11_SUBRESOURCE_DATA_temp_9 = {NULL, 0u, 0u};
        D3D11_SUBRESOURCE_DATA_temp_9.pSysMem = NV_GET_RESOURCE(const void*, 24);

        static D3D11_BUFFER_DESC D3D11_BUFFER_DESC_temp_9 = {80u, D3D11_USAGE_STAGING, (D3D11_BIND_FLAG)0, D3D11_CPU_ACCESS_READ, (D3D11_RESOURCE_MISC_FLAG)0, 0u};
        result = My_ID3D11Device_CreateBuffer(pID3D11Device_uid_4, &D3D11_BUFFER_DESC_temp_9, &D3D11_SUBRESOURCE_DATA_temp_9, &pID3D11Buffer_uid_113_Staging);
        NV_CHECK_RESULT(result);

        NV_SET_OBJECT_NAME(pID3D11Buffer_uid_113_Staging, "NvdaReplayerPrivate");

        // pID3D11Buffer_uid_113 does not change in the frame; initialize it and release its staging resource immediately
        My_ID3D11DeviceContext_CopyResource(pID3D11DeviceContext_uid_5, pID3D11Buffer_uid_113, pID3D11Buffer_uid_113_Staging);
        NV_SAFE_RELEASE(pID3D11Buffer_uid_113_Staging);
    }

    // Initialize pID3D11Buffer_uid_124
    {
        BEGIN_DATA_SCOPE();

        static D3D11_SUBRESOURCE_DATA D3D11_SUBRESOURCE_DATA_temp_10 = {NULL, 0u, 0u};
        D3D11_SUBRESOURCE_DATA_temp_10.pSysMem = NV_GET_RESOURCE(const void*, 25);

        static D3D11_BUFFER_DESC D3D11_BUFFER_DESC_temp_10 = {80u, D3D11_USAGE_STAGING, (D3D11_BIND_FLAG)0, D3D11_CPU_ACCESS_READ, (D3D11_RESOURCE_MISC_FLAG)0, 0u};
        result = My_ID3D11Device_CreateBuffer(pID3D11Device_uid_4, &D3D11_BUFFER_DESC_temp_10, &D3D11_SUBRESOURCE_DATA_temp_10, &pID3D11Buffer_uid_124_Staging);
        NV_CHECK_RESULT(result);

        NV_SET_OBJECT_NAME(pID3D11Buffer_uid_124_Staging, "NvdaReplayerPrivate");

        // pID3D11Buffer_uid_124 does not change in the frame; initialize it and release its staging resource immediately
        My_ID3D11DeviceContext_CopyResource(pID3D11DeviceContext_uid_5, pID3D11Buffer_uid_124, pID3D11Buffer_uid_124_Staging);
        NV_SAFE_RELEASE(pID3D11Buffer_uid_124_Staging);
    }

    // Initialize pID3D11Resource_uid_128
    {
        BEGIN_DATA_SCOPE();

        std::vector<uint8_t> std_vector_of_uint8_t_temp_5;
        Serialization::BlobProxy<uint8_t*> Serialization_BlobProxy_of_uint8_t__temp_5;
        static D3D11_TEXTURE2D_DESC D3D11_TEXTURE2D_DESC_temp_13 = {1024u, 2u, 1u, 1u, DXGI_FORMAT_R32G32B32A32_FLOAT, {1u, 0u}, D3D11_USAGE_STAGING, (D3D11_BIND_FLAG)0, D3D11_CPU_ACCESS_READ, (D3D11_RESOURCE_MISC_FLAG)0};
        result = My_ID3D11Device_CreateTexture2D(pID3D11Device_uid_4, &D3D11_TEXTURE2D_DESC_temp_13, InitializeSubresourceDataD3D11(26, std_vector_of_uint8_t_temp_5, Serialization_BlobProxy_of_uint8_t__temp_5), &pID3D11Resource_uid_128_Staging);
        NV_CHECK_RESULT(result);

        NV_SET_OBJECT_NAME(pID3D11Resource_uid_128_Staging, "NvdaReplayerPrivate");
        My_ID3D11DeviceContext_CopyResource(pID3D11DeviceContext_uid_5, ((ID3D11Texture2D*)pID3D11Resource_uid_128), pID3D11Resource_uid_128_Staging);
        if (!hasFrameReset)
        {
            BEGIN_DATA_SCOPE();

            NV_SAFE_RELEASE(pID3D11Resource_uid_128_Staging);
        }
    }

    // Initialize pID3D11Texture2D_uid_132
    {
        BEGIN_DATA_SCOPE();

        std::vector<uint8_t> std_vector_of_uint8_t_temp_6;
        Serialization::BlobProxy<uint8_t*> Serialization_BlobProxy_of_uint8_t__temp_6;
        static D3D11_TEXTURE2D_DESC D3D11_TEXTURE2D_DESC_temp_14 = {1024u, 2u, 1u, 1u, DXGI_FORMAT_R32G32B32A32_SINT, {1u, 0u}, D3D11_USAGE_STAGING, (D3D11_BIND_FLAG)0, D3D11_CPU_ACCESS_READ, (D3D11_RESOURCE_MISC_FLAG)0};
        result = My_ID3D11Device_CreateTexture2D(pID3D11Device_uid_4, &D3D11_TEXTURE2D_DESC_temp_14, InitializeSubresourceDataD3D11(27, std_vector_of_uint8_t_temp_6, Serialization_BlobProxy_of_uint8_t__temp_6), &pID3D11Texture2D_uid_132_Staging);
        NV_CHECK_RESULT(result);

        NV_SET_OBJECT_NAME(pID3D11Texture2D_uid_132_Staging, "NvdaReplayerPrivate");
        My_ID3D11DeviceContext_CopyResource(pID3D11DeviceContext_uid_5, pID3D11Texture2D_uid_132, pID3D11Texture2D_uid_132_Staging);
        if (!hasFrameReset)
        {
            BEGIN_DATA_SCOPE();

            NV_SAFE_RELEASE(pID3D11Texture2D_uid_132_Staging);
        }
    }

    // Initialize pID3D11Texture2D_uid_136
    {
        BEGIN_DATA_SCOPE();

        std::vector<uint8_t> std_vector_of_uint8_t_temp_7;
        Serialization::BlobProxy<uint8_t*> Serialization_BlobProxy_of_uint8_t__temp_7;
        static D3D11_TEXTURE2D_DESC D3D11_TEXTURE2D_DESC_temp_15 = {1024u, 2u, 1u, 1u, DXGI_FORMAT_R32G32B32A32_FLOAT, {1u, 0u}, D3D11_USAGE_STAGING, (D3D11_BIND_FLAG)0, D3D11_CPU_ACCESS_READ, (D3D11_RESOURCE_MISC_FLAG)0};
        result = My_ID3D11Device_CreateTexture2D(pID3D11Device_uid_4, &D3D11_TEXTURE2D_DESC_temp_15, InitializeSubresourceDataD3D11(28, std_vector_of_uint8_t_temp_7, Serialization_BlobProxy_of_uint8_t__temp_7), &pID3D11Texture2D_uid_136_Staging);
        NV_CHECK_RESULT(result);

        NV_SET_OBJECT_NAME(pID3D11Texture2D_uid_136_Staging, "NvdaReplayerPrivate");
        My_ID3D11DeviceContext_CopyResource(pID3D11DeviceContext_uid_5, pID3D11Texture2D_uid_136, pID3D11Texture2D_uid_136_Staging);
        if (!hasFrameReset)
        {
            BEGIN_DATA_SCOPE();

            NV_SAFE_RELEASE(pID3D11Texture2D_uid_136_Staging);
        }
    }

    // Initialize pID3D11Resource_uid_140
    {
        BEGIN_DATA_SCOPE();

        std::vector<uint8_t> std_vector_of_uint8_t_temp_8;
        Serialization::BlobProxy<uint8_t*> Serialization_BlobProxy_of_uint8_t__temp_8;
        static D3D11_TEXTURE2D_DESC D3D11_TEXTURE2D_DESC_temp_16 = {1024u, 2u, 1u, 1u, DXGI_FORMAT_R32G32B32A32_FLOAT, {1u, 0u}, D3D11_USAGE_STAGING, (D3D11_BIND_FLAG)0, D3D11_CPU_ACCESS_READ, (D3D11_RESOURCE_MISC_FLAG)0};
        result = My_ID3D11Device_CreateTexture2D(pID3D11Device_uid_4, &D3D11_TEXTURE2D_DESC_temp_16, InitializeSubresourceDataD3D11(29, std_vector_of_uint8_t_temp_8, Serialization_BlobProxy_of_uint8_t__temp_8), &pID3D11Resource_uid_140_Staging);
        NV_CHECK_RESULT(result);

        NV_SET_OBJECT_NAME(pID3D11Resource_uid_140_Staging, "NvdaReplayerPrivate");
        My_ID3D11DeviceContext_CopyResource(pID3D11DeviceContext_uid_5, ((ID3D11Texture2D*)pID3D11Resource_uid_140), pID3D11Resource_uid_140_Staging);
        if (!hasFrameReset)
        {
            BEGIN_DATA_SCOPE();

            NV_SAFE_RELEASE(pID3D11Resource_uid_140_Staging);
        }
    }

    FreeCachedMemory();
}

NV_REPLAY_END_FRAME_SETUP()
