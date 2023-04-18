/// @ref gtx_fast_exponential
/// @file glm/gtx/fast_exponential.hpp
///
/// @see core (dependence)
/// @see gtx_half_float (dependence)
///
/// @defgroup gtx_fast_exponential GLM_GTX_fast_exponential
/// @ingroup gtx
///
/// Include <glm/gtx/fast_exponential.hpp> to use the features of this extension.
///
/// Fast but less accurate implementations of exponential based functions.

#pragma once

// Dependency:
#include "../glm.hpp"

#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	ifndef GLM_ENABLE_EXPERIMENTAL
#		pragma message("GLM: GLM_GTX_fast_exponential is an experimental extension and may change in the future. Use #define GLM_ENABLE_EXPERIMENTAL before including it, if you really want to use it.")
#	else
#		pragma message("GLM: GLM_GTX_fast_exponential extension included")
#	endif
#endif

namespace glm
{
	/// @addtogroup gtx_fast_exponential
	/// @{

	/// Faster than the common pow function but less accurate.
	/// @see gtx_fast_exponential
	template<typename genType>
	GLM_FUNC_DECL genType fastPow(genType x, genType y);

	/// Faster than the common pow function but less accurate.
	/// @see gtx_fast_exponential
	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_DECL vec<L, _Ty, Q> fastPow(vec<L, _Ty, Q> const& x, vec<L, _Ty, Q> const& y);

	/// Faster than the common pow function but less accurate.
	/// @see gtx_fast_exponential
	template<typename genTypeT, typename genTypeU>
	GLM_FUNC_DECL genTypeT fastPow(genTypeT x, genTypeU y);

	/// Faster than the common pow function but less accurate.
	/// @see gtx_fast_exponential
	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_DECL vec<L, _Ty, Q> fastPow(vec<L, _Ty, Q> const& x);

	/// Faster than the common exp function but less accurate.
	/// @see gtx_fast_exponential
	template<typename _Ty>
	GLM_FUNC_DECL _Ty fastExp(_Ty x);

	/// Faster than the common exp function but less accurate.
	/// @see gtx_fast_exponential
	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_DECL vec<L, _Ty, Q> fastExp(vec<L, _Ty, Q> const& x);

	/// Faster than the common log function but less accurate.
	/// @see gtx_fast_exponential
	template<typename _Ty>
	GLM_FUNC_DECL _Ty fastLog(_Ty x);

	/// Faster than the common exp2 function but less accurate.
	/// @see gtx_fast_exponential
	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_DECL vec<L, _Ty, Q> fastLog(vec<L, _Ty, Q> const& x);

	/// Faster than the common exp2 function but less accurate.
	/// @see gtx_fast_exponential
	template<typename _Ty>
	GLM_FUNC_DECL _Ty fastExp2(_Ty x);

	/// Faster than the common exp2 function but less accurate.
	/// @see gtx_fast_exponential
	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_DECL vec<L, _Ty, Q> fastExp2(vec<L, _Ty, Q> const& x);

	/// Faster than the common log2 function but less accurate.
	/// @see gtx_fast_exponential
	template<typename _Ty>
	GLM_FUNC_DECL _Ty fastLog2(_Ty x);

	/// Faster than the common log2 function but less accurate.
	/// @see gtx_fast_exponential
	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_DECL vec<L, _Ty, Q> fastLog2(vec<L, _Ty, Q> const& x);

	/// @}
}//namespace glm

#include "fast_exponential.inl"
