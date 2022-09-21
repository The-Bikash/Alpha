#pragma once
#include "../Core/iq_core.hpp"

#if _IQ_COMPILER_PREPROCESSOR


#include <memory>

_IQ_BEGIN

template<class _Ty> using shared_ptr = std::shared_ptr<_Ty>;
template<class _Ty> using unique_ptr = std::unique_ptr<_Ty>;
template<class _Ty> using weak_ptr   = std::weak_ptr<_Ty>;

_IQ_END


#endif