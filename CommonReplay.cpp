#include "CommonReplay.h"
#include "Application.h"
#include "Arguments.h"
#include "Helpers.h"

static bool s_lazyMemcpy = false;
static bool s_noopMemcpy = false;
bool g_minSync = false;

//------------------------------------------------------------------------------
// Options functions
//------------------------------------------------------------------------------
static FnParseResults CommonReplayArguments(args::ArgumentParser& parser)
{
    static args::Group optCommongroup(parser, "Common options:");

    static args::Flag optLazyMemcpy(optCommongroup, "lazy-memcpy", "Only repeat memcpys when the data is known to have changed [default=false]", { "lazy-memcpy" });
    static args::Flag optNoopMemcpy(optCommongroup, "noop-memcpy", "Do not call memcpy after an initial few frames [default=false]", { "noop-memcpy" });
    static args::Flag optMinSync(optCommongroup, "minsync", "Use agressive fence/semaphore options.  May cause incorrect replay or crash. [default=false]", { "minsync" });

    return [=]() {
        // No-op and lazy memcpy are mutually exclusive, with no-op superseding lazy
        if (optNoopMemcpy) {
            s_noopMemcpy = optNoopMemcpy.Get();
        } else if (optLazyMemcpy) {
            s_lazyMemcpy = optLazyMemcpy.Get();
        }

        if (optMinSync) {
            g_minSync = optMinSync.Get();
        }

        if (Application::MinimizeCPUOverheadRequested()) {
            // This is where we set any options that we know are safe to enable and minimize the CPU overhead
        }
    };
}

REGISTER_ARGUMENTS(CommonReplayArguments);

//------------------------------------------------------------------------------
// NVCheckedMemcpy
//------------------------------------------------------------------------------
void NVCheckedMemcpy(void* dst, const void* src, size_t size, NVCheckedMemcpyState& state)
{
    if (!s_lazyMemcpy && !s_noopMemcpy) {
        memcpy(dst, src, size);
        return;
    }

    switch (state) {
    case NVCheckedMemcpyState::PASS_0:
        memcpy(dst, src, size);
        state = NVCheckedMemcpyState::PASS_1;
        break;
    case NVCheckedMemcpyState::PASS_1:
        // Lazy memcpy only stops performing the memcopies if there are no changes
        // Noop memcpy stops performing the memcopies unconditionally
        if ((s_lazyMemcpy && 0 == memcmp(dst, src, size)) || s_noopMemcpy) {
            state = NVCheckedMemcpyState::DETECTED_NO_DIFFS;
            break;
        }
        state = NVCheckedMemcpyState::DETECTED_DIFFS;
        memcpy(dst, src, size);
        break;
    case NVCheckedMemcpyState::DETECTED_DIFFS:
        memcpy(dst, src, size);
        break;
    case NVCheckedMemcpyState::DETECTED_NO_DIFFS:
        break;
    }
}