//-----------------------------------------------------------------------------
// Generated with NVIDIA Nsight Graphics 2021.2.1.0
// 
// File: Helpers.cpp
// 
//-----------------------------------------------------------------------------

#include "Helpers.h"
#include "ReplayHelpers.h"
#include "Resources.h"
#include "ReadOnlyDatabase.h"

#if !defined(WIN32)

#include <dlfcn.h>

#endif

#if !defined(_WIN64) && !defined(__x86_64__) && !defined(__ppc64__) && !defined(__LP64__)
#if !defined(NV_AUTOMATED_BUILD)
#error Application originally targeted 64-bit; compiling now as 32-bit
#else
#if defined(_MSC_VER)
#pragma message("Warning: Application originally targeted 64-bit; compiling now as 32-bit")
#else
#warning Application originally targeted 64-bit; compiling now as 32-bit
#endif
#endif
#endif


//-----------------------------------------------------------------------------
// Common Resources
//-----------------------------------------------------------------------------
const char* ProcessName = "wrench";
double array_of_0s[256] = { 0 };
