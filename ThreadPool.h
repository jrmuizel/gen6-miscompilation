//-------------------------------------------------------------------------------
// File: ThreadPool.h
//
// Copyright (c) NVIDIA Corporation.  All rights reserved.
//-------------------------------------------------------------------------------

#pragma once

#include "CommonReplay.h"

#include <cstdint>
#include <functional>

#if defined(NV_REPLAY_NO_MULTITHREADING)

#define NV_THREAD_BEGIN(_ThreadId)
#define NV_THREAD_END(_ThreadId)
#define NV_THREAD_NON_BLOCKING_BEGIN(_ThreadId)
#define NV_THREAD_NON_BLOCKING_END(_ThreadId)

#else

#define NV_THREAD_BEGIN(_ThreadId) \
    NvExecuteOnThread(_ThreadId, NV_EXECUTE_ON_THREAD_FLAGS_NONE, std::move([=]{     \
    auto& dataScopeTracker = Serialization::DataScopeTracker::Instance(); \
    ((void)0);

#define NV_THREAD_END(_ThreadId) \
    }));

#define NV_THREAD_NON_BLOCKING_BEGIN(_ThreadId) \
    NvExecuteOnThread(_ThreadId, NV_EXECUTE_ON_THREAD_FLAGS_NON_BLOCKING, std::move([=]{     \
    auto& dataScopeTracker = Serialization::DataScopeTracker::Instance(); \
    ((void)0);

#define NV_THREAD_NON_BLOCKING_END(_ThreadId) \
    }));

#endif

enum NvExecuteOnThreadFlags
{
    NV_EXECUTE_ON_THREAD_FLAGS_NONE = 0x0,
    NV_EXECUTE_ON_THREAD_FLAGS_NON_BLOCKING = 0x1,
};

//------------------------------------------------------------------------------
// Executes a function on a specific worker thread
//------------------------------------------------------------------------------
NV_REPLAY_EXPORT void NvExecuteOnThread(uint32_t threadId, NvExecuteOnThreadFlags flags, std::function<void()>&& fn);
