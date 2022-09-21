#pragma once
#ifndef __IQ_ALGORITHM__
#define __IQ_ALGORITHM__
#include "Core/iq_core.hpp"
#if _IQ_COMPILER_PREPROCESSOR

#include <algorithm>

#pragma pack(push, _CRT_PACKING)
#pragma warning(push, _IQ_WARNING_LEVEL)
#pragma warning(disable : _IQ_DISABLED_WARNINGS)
_IQ_DISABLE_CLANG_WARNINGS
#pragma push_macro("new")
#undef new
_IQ_BEGIN





_IQ_END
#pragma pop_macro("new")
_IQ_RESTORE_CLANG_WARNINGS
#pragma warning(pop)
#pragma pack(pop)
#endif
#endif
