cmake_minimum_required(VERSION 3.0)

cmake_policy(SET CMP0054 NEW)

#Support for visual studio build
set(CMAKE_VS_INCLUDE_INSTALL_TO_DEFAULT_BUILD 1)

#Build shared libraries opposed to single exe
set(NV_SHARED_REPLAY_LIB 0)

#Choose an available Windows SDK in order to meet the Direct3D feature level
set(REQUIRED_WIN_SDK_VERSION 10.0.16299.0)
if(WIN32 AND REQUIRED_WIN_SDK_VERSION AND NOT CMAKE_SYSTEM_VERSION)
#Detect all the Windows SDKs that exist on the machine.
    set(WIN_SDK_VERSIONS "")

#We have to check "Windows.h" to verify if the SDK is really installed because there's no reliable registry value since v10.
    macro(AddWinSDKIfInstalled SDK_INCLUDE_PATH SDK_VERSION)
        if(EXISTS "${SDK_INCLUDE_PATH}/um/Windows.h")
            list(APPEND WIN_SDK_VERSIONS "${SDK_VERSION}")
        endif()
    endmacro()

#Helper to identify all sub - sdks within a windows SDK directory
    macro(AddWin10SDKIfInstalled SDK_DIR)
        if(IS_DIRECTORY ${SDK_DIR})
            file(GLOB SUB_FOLDERS RELATIVE ${SDK_DIR}/Include ${SDK_DIR}/Include/*)
            foreach(SUB_FOLDER ${SUB_FOLDERS})
                AddWinSDKIfInstalled(${SDK_DIR}/Include/${SUB_FOLDER} ${SUB_FOLDER})
            endforeach()
        endif()
    endmacro()

    # Start at v8.1 because the minimum Visual Studio supported version is 2015.
    get_filename_component(WIN_SDK_V81_ROOT "[HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows Kits\\Installed Roots;KitsRoot81]" ABSOLUTE CACHE)
    if(NOT WIN_SDK_V81_ROOT)
        set(WIN_SDK_V81_ROOT "%ProgramFiles%/Windows Kits/8.1")
    endif()
    if(IS_DIRECTORY ${WIN_SDK_V81_ROOT})
        AddWinSDKIfInstalled(${WIN_SDK_V81_ROOT}/Include 8.1)
    endif()

    # Add system-identified windows 10 SDKs
    get_filename_component(WIN_SDK_V10_ROOT "[HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows Kits\\Installed Roots;KitsRoot10]" ABSOLUTE CACHE)
    if(NOT WIN_SDK_V10_ROOT)
        set(WIN_SDK_V10_ROOT "%ProgramFiles%/Windows Kits/10")
    endif()
    AddWin10SDKIfInstalled(${WIN_SDK_V10_ROOT})

    # Add a user-specified WINDOWS_SDK_DIR if one is defined
    if(DEFINED ENV{WINDOWS_SDK_DIR})
        AddWin10SDKIfInstalled($ENV{WINDOWS_SDK_DIR})
    endif()

    message(STATUS "Finding Windows SDK to satisfy required SDK of: ${REQUIRED_WIN_SDK_VERSION}")
    if (WIN_SDK_VERSIONS)
        message(STATUS "Windows SDK candidates: ${WIN_SDK_VERSIONS}")
    else()
        message(STATUS "Windows SDK candidates: none found")
    endif()

    # Select a version that satisfies the requirement
    list(REVERSE WIN_SDK_VERSIONS)
    foreach(WIN_SDK_VERSION ${WIN_SDK_VERSIONS})
        if (WIN_SDK_VERSION VERSION_GREATER_EQUAL REQUIRED_WIN_SDK_VERSION)
            message(STATUS "Windows SDK selected: ${WIN_SDK_VERSION}")
            set(CMAKE_SYSTEM_VERSION ${WIN_SDK_VERSION})
            break()
        endif()
    endforeach()

    if(NOT CMAKE_SYSTEM_VERSION)
        message(FATAL_ERROR "Failed to find a Windows SDK that available to use. The minimum version required is ${REQUIRED_WIN_SDK_VERSION}")
    endif()
endif()

# Set project name
set(CPP_PROJECT_NAME "wrench__2021_05_06__11_13_11")
set(CPP_PROJECT_NAME_NOTIMESTAMP "wrench")

# Set output name
option(NV_USE_TIMESTAMP_IN_APPLICATION_NAME "Rename output file to be timestamped" OFF)
if (NV_USE_TIMESTAMP_IN_APPLICATION_NAME)
    set(CPP_OUTPUT_NAME ${CPP_PROJECT_NAME})
else()
    set(CPP_OUTPUT_NAME ${CPP_PROJECT_NAME_NOTIMESTAMP})
endif()

project(${CPP_PROJECT_NAME})

# The target name is trim so that cmake path lengths are short; the actual
# executable will be renamed via a property below
set(EXECUTABLE_TARGET cppcap)

# As there's no default LINUX variable, add one.
if(UNIX AND NOT APPLE)
    set(LINUX 1)
endif()

# Information of original capture
set(NV_ORIGINAL_OS WIN32)
set(NV_ORIGINAL_WINSYS win32)
set(NV_ORIGINAL_ARCH 64)

# Value of NV_ORIGINAL_OS is WIN32 or LINUX
# ${${NV_ORIGINAL_OS}} is 1 only if this project is built on the same platform than original capture.
set(NV_BUILD_ON_ORIGINAL_PLATFORM ${${NV_ORIGINAL_OS}})

# Determine default window system if not specified by "-DNV_WINSYS"
if(NOT NV_WINSYS)
    if(NV_BUILD_ON_ORIGINAL_PLATFORM)
        set(NV_WINSYS ${NV_ORIGINAL_WINSYS})
    else()
        if(LINUX)
            set(NV_WINSYS xcb)
        elseif(WIN32)
            set(NV_WINSYS win32)
        endif()
    endif()
endif()

# Make NV_WINSYS to be an option selectable in cmake-GUI
set(NV_WINSYS "${NV_WINSYS}" CACHE STRING "Select window system type to interact with graphics API")
if(LINUX)
    set_property(CACHE NV_WINSYS PROPERTY STRINGS xcb x11 vulkan-d2d)
elseif(WIN32)
    set_property(CACHE NV_WINSYS PROPERTY STRINGS win32)
endif()

if(NV_WINSYS STREQUAL xcb)
    set(NV_USE_XCB 1)
elseif(NV_WINSYS STREQUAL x11)
    set(NV_USE_X11 1)
elseif(NV_WINSYS STREQUAL vulkan-d2d)
    set(NV_USE_D2D 1)
elseif(NV_WINSYS STREQUAL win32)
    set(NV_USE_WIN32 1)
else()
    message(FATAL_ERROR "Specified wrong 'NV_WINSYS' argument. Must be one of 'xcb'/'x11'/'vulkan-d2d' on Linux or 'win32' on Windows.")
endif()

# Determine bitness
if(CMAKE_SIZEOF_VOID_P STREQUAL "8")
    set(NV_USE_64BIT 1)
elseif(CMAKE_SIZEOF_VOID_P STREQUAL "4")
    set(NV_USE_32BIT 1)
else()
    message(FATAL_ERROR "Unrecognized bitness.")
endif()

if(NV_USE_64BIT)
    link_directories(
)
endif()

if(NV_USE_32BIT)
    link_directories(
)
endif()

# Checking arch mismatch
if((NV_USE_64BIT AND NV_ORIGINAL_ARCH STREQUAL 64) OR (NV_USE_32BIT AND NV_ORIGINAL_ARCH STREQUAL 32))
    message(STATUS "Building ${NV_ORIGINAL_ARCH}-bit app.")
elseif(NV_USE_64BIT AND NV_ORIGINAL_ARCH STREQUAL 32)
    message(WARNING "Application originally targeted 32-bit; compiling now as 64-bit.")
elseif(NV_USE_32BIT AND NV_ORIGINAL_ARCH STREQUAL 64)
    message(FATAL_ERROR "Application originally targeted 64-bit; compiling now as 32-bit.")
else()
    message(FATAL_ERROR "Unrecognized original bitwise.")
endif()
if(CMAKE_BUILD_TYPE)
    message(STATUS "Building with a ${CMAKE_BUILD_TYPE} configuration.")
endif()

# Control library linkage mode
if (NV_SHARED_REPLAY_LIB)
	set(ReplayExecutorLibraryType "SHARED")
	set(NV_REPLAY_LIB_TYPE "NV_REPLAY_LIB_SHARED")
else()
	set(ReplayExecutorLibraryType "STATIC")
	set(NV_REPLAY_LIB_TYPE "NV_REPLAY_LIB_STATIC")
endif()

################################################################################
# Replay Executor (library)
################################################################################

add_library(ReplayExecutor ${ReplayExecutorLibraryType}
    Application.cpp
    CommonReplay.cpp
    D3D11Replay.cpp
    DXGIReplay.cpp
    DataScope.cpp
    Helpers.cpp
    ReadOnlyDatabase.cpp
    ReplayHelpers.cpp
    ThreadPool.cpp
    Threading.cpp
)

target_include_directories(ReplayExecutor PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    include)

target_compile_definitions(ReplayExecutor
    PUBLIC
            NV_HAS_FUNCTION_OVERRIDES

    PRIVATE
        ${NV_REPLAY_LIB_TYPE}
        ReplayExecutor_EXPORTS)

if(CMAKE_CXX_COMPILER_ID STREQUAL "GNU" OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
    target_compile_options(ReplayExecutor PUBLIC
        -std=c++14
        -fvisibility=hidden
        -Os
        -g
        -O2
        -Werror=return-type)
endif()

option(NV_USE_MANAGED_WINSYS "Use replayer managed windowing system" OFF)
if(NV_USE_MANAGED_WINSYS OR NOT NV_BUILD_ON_ORIGINAL_PLATFORM OR NOT NV_WINSYS STREQUAL NV_ORIGINAL_WINSYS)
    target_compile_definitions(ReplayExecutor PUBLIC NV_USE_MANAGED_WINSYS)
endif()

target_include_directories(ReplayExecutor PUBLIC
)

if(NV_USE_64BIT)
    target_link_libraries(ReplayExecutor
    PRIVATE
)
endif()

if(NV_USE_32BIT)
    target_link_libraries(ReplayExecutor
    PRIVATE
)
endif()

if(CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
    # -W3     - Warning level 3 (see https://docs.microsoft.com/en-us/cpp/build/reference/compiler-option-warning-level?view=vs-2019)
    # -MP     - Build with multiple processes to speed up the build
    # -Ob2    - Inline expansion level, allows compiler to expand any function not explicitly marked for no inlining
    # -wdXXXX - disable a specific Warning (see https://docs.microsoft.com/en-us/cpp/error-messages/compiler-warnings/compiler-warnings-c4800-through-c4999?view=vs-2019)
    # -bigobj - Increase number of sections in .obj file to a capacity of 4Gb, we have some very large files
    # -GS-    - Disable buffer security check, this is local .exe that is primarily built from generated code and requires full performance
    target_compile_options(ReplayExecutor PUBLIC -W3 -MP -Ob2 -wd4351 -wd4819 -bigobj -GS-)
    # -MDd - Defines _DEBUG, _MT, and _DLL for multithreaded debug builds, uses shared run-time library
    target_compile_options(ReplayExecutor PUBLIC $<$<CONFIG:DEBUG>:-MDd>)
    # -MD - Defines _MT and _DLL for multithreaded builds, uses shared run-time library
    # -Oi - Generate instrinsic functions to replace some function calls with instrinsic functions for better performance
    target_compile_options(ReplayExecutor PUBLIC $<$<CONFIG:RELEASE>:-Oi -MD>)
    # /OPT:NOICF - Disable COMDAT folding
    set(CMAKE_EXE_LINKER_FLAGS_RELEASE "/INCREMENTAL:NO /OPT:NOICF")
endif()

# Set platform specific properties.
if(NV_USE_WIN32)

    # Windows application & Win32 windowing system
    target_sources(ReplayExecutor
        PRIVATE
            Win32Application.cpp
            WindowSystem_Win32.cpp)
    target_compile_definitions(ReplayExecutor
        PUBLIC
            _CRT_SECURE_NO_DEPRECATE
            NOMINMAX
            NV_USE_WIN32=1
            VK_USE_PLATFORM_WIN32_KHR
            UNICODE
        PRIVATE
            ReplayExecutor_EXPORTS)

endif()

if(LINUX)

    # Linux application
    target_sources(ReplayExecutor
        PRIVATE
            LinuxApplication.cpp)

    # XCB Windowing System
    if(NV_USE_XCB)
        target_sources(ReplayExecutor
            PRIVATE
                WindowSystem_Xcb.cpp)
        target_compile_definitions(ReplayExecutor
            PUBLIC
                NV_USE_XCB=1
                VK_USE_PLATFORM_XCB_KHR)
        target_link_libraries(ReplayExecutor
            PRIVATE
                dl
                xcb
                xcb-icccm
                pthread)
    endif()

    # X11 Windowing System
    if(NV_USE_X11)
        target_sources(ReplayExecutor
            PRIVATE
                WindowSystem_X11.cpp)
        target_compile_definitions(ReplayExecutor
            PUBLIC
                NV_USE_X11=1
                VK_USE_PLATFORM_XLIB_KHR)
        target_link_libraries(ReplayExecutor
            PRIVATE
                dl
                X11
                Xau
                pthread)
    endif()

    # D2D Windowing System
    if(NV_USE_D2D)
        target_sources(ReplayExecutor
            PRIVATE
                WindowSystem_D2d.cpp)
        target_compile_definitions(ReplayExecutor
            PUBLIC
                NV_USE_D2D=1)
        target_link_libraries(ReplayExecutor
            PRIVATE
                dl
                pthread)
    endif()

endif()

################################################################################
# Generated Replay (library)
################################################################################

add_library(GeneratedReplay ${ReplayExecutorLibraryType}
    Frame0Part00.cpp
    FrameReset00.cpp
    FrameSetup00.cpp
    PerfMarkersReset.cpp
    PerfMarkersSetup.cpp
    ReplayProcedures.cpp
    Resources00.cpp
    WinResourcesReset.cpp
    WinResourcesSetup.cpp
    function_overrides.cpp
)

target_include_directories(GeneratedReplay
    PRIVATE
        include)

target_link_libraries(GeneratedReplay
    PRIVATE
        ReplayExecutor
    d3d11.lib
    d3d9.lib
    d3d9.lib
    dxgi.lib
)

target_compile_definitions(GeneratedReplay
    PUBLIC
        ${NV_REPLAY_LIB_TYPE})

if(NV_USE_WIN32)
    target_compile_definitions(GeneratedReplay
        PUBLIC
            _CRT_SECURE_NO_DEPRECATE
            NV_USE_WIN32=1
            VK_USE_PLATFORM_WIN32_KHR)
endif()

################################################################################
# Main (executable)
################################################################################

add_executable(Main
    Main.cpp
)

set_target_properties(Main PROPERTIES OUTPUT_NAME ${CPP_OUTPUT_NAME})
set_directory_properties(PROPERTY VS_STARTUP_PROJECT Main)

if(WIN32)
    target_compile_definitions(Main
        PRIVATE
            NOMINMAX)
endif()

if(LINUX)
    target_link_libraries(Main
        PRIVATE
            pthread)
endif()

# Dynamic DLL dependency
add_dependencies(Main GeneratedReplay)

# Link libraries
target_link_libraries(Main
    PRIVATE
        ReplayExecutor)

# Static link the generate replay for the non-shared (e.g. static build)
if (NOT NV_SHARED_REPLAY_LIB)
    target_link_libraries(Main PRIVATE
        GeneratedReplay)
endif()

################################################################################
# Install
################################################################################

# Install targets
if(NOT NV_INSTALL_FOLDER)
    set(NV_INSTALL_FOLDER bin)
endif()
install(TARGETS Main RUNTIME DESTINATION ${CMAKE_CURRENT_SOURCE_DIR}/${NV_INSTALL_FOLDER}/)

if(NV_SHARED_REPLAY_LIB)
    if(WIN32)
        install(TARGETS GeneratedReplay RUNTIME DESTINATION ${CMAKE_CURRENT_SOURCE_DIR}/${NV_INSTALL_FOLDER}/)
        install(TARGETS ReplayExecutor RUNTIME DESTINATION ${CMAKE_CURRENT_SOURCE_DIR}/${NV_INSTALL_FOLDER}/)
    else()
        install(TARGETS GeneratedReplay LIBRARY DESTINATION ${CMAKE_CURRENT_SOURCE_DIR}/${NV_INSTALL_FOLDER}/)
        install(TARGETS ReplayExecutor LIBRARY DESTINATION ${CMAKE_CURRENT_SOURCE_DIR}/${NV_INSTALL_FOLDER}/)
    endif()
endif()

set(RESOURCE_FILES_OR_FOLDERS)

if(NV_USE_64BIT)
    list(APPEND RESOURCE_FILES_OR_FOLDERS
)
endif()

if(NV_USE_32BIT)
    list(APPEND RESOURCE_FILES_OR_FOLDERS
)
endif()

if(LINUX)
    install(PROGRAMS "Linux/run_replay.sh" DESTINATION ${CMAKE_CURRENT_SOURCE_DIR}/${NV_INSTALL_FOLDER}/ RENAME "${CPP_OUTPUT_NAME}.sh")
endif()

if(RESOURCE_FILES_OR_FOLDERS)
    set(RESOURCES)
    foreach(FILE_OR_FOLDER ${RESOURCE_FILES_OR_FOLDERS})

        # The behavior of "IS_DIRECTORY" is well-defined only for full paths.
        get_filename_component(ABSOLUTE_FILE_OR_FOLDER "${FILE_OR_FOLDER}" ABSOLUTE)

        if(IS_DIRECTORY ${ABSOLUTE_FILE_OR_FOLDER})
            file(GLOB SUB_FILES ${ABSOLUTE_FILE_OR_FOLDER}/*.*)
            list(APPEND RESOURCES ${SUB_FILES})
        else()
            list(APPEND RESOURCES ${FILE_OR_FOLDER})
        endif()
    endforeach()
    install(FILES ${RESOURCES} DESTINATION ${CMAKE_CURRENT_SOURCE_DIR}/${NV_INSTALL_FOLDER}/)
endif()