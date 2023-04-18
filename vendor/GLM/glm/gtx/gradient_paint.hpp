/// @ref gtx_gradient_paint
/// @file glm/gtx/gradient_paint.hpp
///
/// @see core (dependence)
/// @see gtx_optimum_pow (dependence)
///
/// @defgroup gtx_gradient_paint GLM_GTX_gradient_paint
/// @ingroup gtx
///
/// Include <glm/gtx/gradient_paint.hpp> to use the features of this extension.
///
/// Functions that return the color of procedural gradient for specific coordinates.

#pragma once

// Dependency:
#include "../glm.hpp"
#include "../gtx/optimum_pow.hpp"

#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	ifndef GLM_ENABLE_EXPERIMENTAL
#		pragma message("GLM: GLM_GTX_gradient_paint is an experimental extension and may change in the future. Use #define GLM_ENABLE_EXPERIMENTAL before including it, if you really want to use it.")
#	else
#		pragma message("GLM: GLM_GTX_gradient_paint extension included")
#	endif
#endif

namespace glm
{
	/// @addtogroup gtx_gradient_paint
	/// @{

	/// Return a color from a radial gradient.
	/// @see - gtx_gradient_paint
	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL _Ty radialGradient(
		vec<2, _Ty, Q> const& Center,
		_Ty const& Radius,
		vec<2, _Ty, Q> const& Focal,
		vec<2, _Ty, Q> const& Position);

	/// Return a color from a linear gradient.
	/// @see - gtx_gradient_paint
	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL _Ty linearGradient(
		vec<2, _Ty, Q> const& Point0,
		vec<2, _Ty, Q> const& Point1,
		vec<2, _Ty, Q> const& Position);

	/// @}
}// namespace glm

#include "gradient_paint.inl"
