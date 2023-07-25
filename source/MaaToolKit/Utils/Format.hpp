#pragma once

#include "Common/MaaConf.h"

#define MAA_FMT MAA_TOOLKIT_NS::MaaFormatNS
#define MAA_FMT_NS_BEGIN \
    namespace MAA_FMT    \
    {
#define MAA_FMT_NS_END }

#ifdef MAA_USE_FMTLIB

#define FMT_HEADER_ONLY
#include <fmt/format.h>

MAA_FMT_NS_BEGIN
using fmt::format;
MAA_FMT_NS_END

#else

#include <format>

MAA_FMT_NS_BEGIN
using std::format;
MAA_FMT_NS_END

#endif