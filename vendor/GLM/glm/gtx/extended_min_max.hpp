/// @ref gtx_extended_min_max
/// @file glm/gtx/extended_min_max.hpp
///
/// @see core (dependence)
///
/// @defgroup gtx_extended_min_max GLM_GTX_extended_min_max
/// @ingroup gtx
///
/// Include <glm/gtx/extended_min_max.hpp> to use the features of this extension.
///
/// Min and max functions for 3 to 4 parameters.

#pragma once

// Dependency:
#include "../glm.hpp"
#include "../ext/vector_common.hpp"

#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	ifndef GLM_ENABLE_EXPERIMENTAL
#		pragma message("GLM: GLM_GTX_extended_min_max is an experimental extension and may change in the future. Use #define GLM_ENABLE_EXPERIMENTAL before including it, if you really want to use it.")
#	else
#		pragma message("GLM: GLM_GTX_extended_min_max extension included")
#	endif
#endif

namespace glm
{
	/// @addtogroup gtx_extended_min_max
	/// @{

	/// Return the minimum component-wise values of 3 inputs
	/// @see gtx_extented_min_max
	template<typename _Ty>
	GLM_FUNC_DECL _Ty min(
		_Ty const& x,
		_Ty const& y,
		_Ty const& z);

	/// Return the minimum component-wise values of 3 inputs
	/// @see gtx_extented_min_max
	template<typename _Ty, template<typename> class C>
	GLM_FUNC_DECL C<_Ty> min(
		C<_Ty> const& x,
		typename C<_Ty>::T const& y,
		typename C<_Ty>::T const& z);

	/// Return the minimum component-wise values of 3 inputs
	/// @see gtx_extented_min_max
	template<typename _Ty, template<typename> class C>
	GLM_FUNC_DECL C<_Ty> min(
		C<_Ty> const& x,
		C<_Ty> const& y,
		C<_Ty> const& z);

	/// Return the minimum component-wise values of 4 inputs
	/// @see gtx_extented_min_max
	template<typename _Ty>
	GLM_FUNC_DECL _Ty min(
		_Ty const& x,
		_Ty const& y,
		_Ty const& z,
		_Ty const& w);

	/// Return the minimum component-wise values of 4 inputs
	/// @see gtx_extented_min_max
	template<typename _Ty, template<typename> class C>
	GLM_FUNC_DECL C<_Ty> min(
		C<_Ty> const& x,
		typename C<_Ty>::T const& y,
		typename C<_Ty>::T const& z,
		typename C<_Ty>::T const& w);

	/// Return the minimum component-wise values of 4 inputs
	/// @see gtx_extented_min_max
	template<typename _Ty, template<typename> class C>
	GLM_FUNC_DECL C<_Ty> min(
		C<_Ty> const& x,
		C<_Ty> const& y,
		C<_Ty> const& z,
		C<_Ty> const& w);

	/// Return the maximum component-wise values of 3 inputs
	/// @see gtx_extented_min_max
	template<typename _Ty>
	GLM_FUNC_DECL _Ty max(
		_Ty const& x,
		_Ty const& y,
		_Ty const& z);

	/// Return the maximum component-wise values of 3 inputs
	/// @see gtx_extented_min_max
	template<typename _Ty, template<typename> class C>
	GLM_FUNC_DECL C<_Ty> max(
		C<_Ty> const& x,
		typename C<_Ty>::T const& y,
		typename C<_Ty>::T const& z);

	/// Return the maximum component-wise values of 3 inputs
	/// @see gtx_extented_min_max
	template<typename _Ty, template<typename> class C>
	GLM_FUNC_DECL C<_Ty> max(
		C<_Ty> const& x,
		C<_Ty> const& y,
		C<_Ty> const& z);

	/// Return the maximum component-wise values of 4 inputs
	/// @see gtx_extented_min_max
	template<typename _Ty>
	GLM_FUNC_DECL _Ty max(
		_Ty const& x,
		_Ty const& y,
		_Ty const& z,
		_Ty const& w);

	/// Return the maximum component-wise values of 4 inputs
	/// @see gtx_extented_min_max
	template<typename _Ty, template<typename> class C>
	GLM_FUNC_DECL C<_Ty> max(
		C<_Ty> const& x,
		typename C<_Ty>::T const& y,
		typename C<_Ty>::T const& z,
		typename C<_Ty>::T const& w);

	/// Return the maximum component-wise values of 4 inputs
	/// @see gtx_extented_min_max
	template<typename _Ty, template<typename> class C>
	GLM_FUNC_DECL C<_Ty> max(
		C<_Ty> const& x,
		C<_Ty> const& y,
		C<_Ty> const& z,
		C<_Ty> const& w);

	/// @}
}//namespace glm

#include "extended_min_max.inl"
