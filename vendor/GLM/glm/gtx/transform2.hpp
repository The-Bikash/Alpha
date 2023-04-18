/// @ref gtx_transform2
/// @file glm/gtx/transform2.hpp
///
/// @see core (dependence)
/// @see gtx_transform (dependence)
///
/// @defgroup gtx_transform2 GLM_GTX_transform2
/// @ingroup gtx
///
/// Include <glm/gtx/transform2.hpp> to use the features of this extension.
///
/// Add extra transformation matrices

#pragma once

// Dependency:
#include "../glm.hpp"
#include "../gtx/transform.hpp"

#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	ifndef GLM_ENABLE_EXPERIMENTAL
#		pragma message("GLM: GLM_GTX_transform2 is an experimental extension and may change in the future. Use #define GLM_ENABLE_EXPERIMENTAL before including it, if you really want to use it.")
#	else
#		pragma message("GLM: GLM_GTX_transform2 extension included")
#	endif
#endif

namespace glm
{
	/// @addtogroup gtx_transform2
	/// @{

	//! Transforms a matrix with a shearing on X axis.
	//! From GLM_GTX_transform2 extension.
	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL mat<3, 3, _Ty, Q> shearX2D(mat<3, 3, _Ty, Q> const& m, _Ty y);

	//! Transforms a matrix with a shearing on Y axis.
	//! From GLM_GTX_transform2 extension.
	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL mat<3, 3, _Ty, Q> shearY2D(mat<3, 3, _Ty, Q> const& m, _Ty x);

	//! Transforms a matrix with a shearing on X axis
	//! From GLM_GTX_transform2 extension.
	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL mat<4, 4, _Ty, Q> shearX3D(mat<4, 4, _Ty, Q> const& m, _Ty y, _Ty z);

	//! Transforms a matrix with a shearing on Y axis.
	//! From GLM_GTX_transform2 extension.
	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL mat<4, 4, _Ty, Q> shearY3D(mat<4, 4, _Ty, Q> const& m, _Ty x, _Ty z);

	//! Transforms a matrix with a shearing on Z axis.
	//! From GLM_GTX_transform2 extension.
	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL mat<4, 4, _Ty, Q> shearZ3D(mat<4, 4, _Ty, Q> const& m, _Ty x, _Ty y);

	//template<typename T> GLM_FUNC_QUALIFIER mat<4, 4, T, Q> shear(const mat<4, 4, T, Q> & m, shearPlane, planePoint, angle)
	// Identity + tan(angle) * cross(Normal, OnPlaneVector)     0
	// - dot(PointOnPlane, normal) * OnPlaneVector              1

	// Reflect functions seem to don't work
	//template<typename T> mat<3, 3, T, Q> reflect2D(const mat<3, 3, T, Q> & m, const vec<3, T, Q>& normal){return reflect2DGTX(m, normal);}									//!< \brief Build a reflection matrix (from GLM_GTX_transform2 extension)
	//template<typename T> mat<4, 4, T, Q> reflect3D(const mat<4, 4, T, Q> & m, const vec<3, T, Q>& normal){return reflect3DGTX(m, normal);}									//!< \brief Build a reflection matrix (from GLM_GTX_transform2 extension)

	//! Build planar projection matrix along normal axis.
	//! From GLM_GTX_transform2 extension.
	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL mat<3, 3, _Ty, Q> proj2D(mat<3, 3, _Ty, Q> const& m, vec<3, _Ty, Q> const& normal);

	//! Build planar projection matrix along normal axis.
	//! From GLM_GTX_transform2 extension.
	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL mat<4, 4, _Ty, Q> proj3D(mat<4, 4, _Ty, Q> const & m, vec<3, _Ty, Q> const& normal);

	//! Build a scale bias matrix.
	//! From GLM_GTX_transform2 extension.
	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL mat<4, 4, _Ty, Q> scaleBias(_Ty scale, _Ty bias);

	//! Build a scale bias matrix.
	//! From GLM_GTX_transform2 extension.
	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL mat<4, 4, _Ty, Q> scaleBias(mat<4, 4, _Ty, Q> const& m, _Ty scale, _Ty bias);

	/// @}
}// namespace glm

#include "transform2.inl"
