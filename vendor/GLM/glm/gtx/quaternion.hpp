/// @ref gtx_quaternion
/// @file glm/gtx/quaternion.hpp
///
/// @see core (dependence)
/// @see gtx_extented_min_max (dependence)
///
/// @defgroup gtx_quaternion GLM_GTX_quaternion
/// @ingroup gtx
///
/// Include <glm/gtx/quaternion.hpp> to use the features of this extension.
///
/// Extended quaternion types and functions

#pragma once

// Dependency:
#include "../glm.hpp"
#include "../gtc/constants.hpp"
#include "../gtc/quaternion.hpp"
#include "../ext/quaternion_exponential.hpp"
#include "../gtx/norm.hpp"

#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	ifndef GLM_ENABLE_EXPERIMENTAL
#		pragma message("GLM: GLM_GTX_quaternion is an experimental extension and may change in the future. Use #define GLM_ENABLE_EXPERIMENTAL before including it, if you really want to use it.")
#	else
#		pragma message("GLM: GLM_GTX_quaternion extension included")
#	endif
#endif

namespace glm
{
	/// @addtogroup gtx_quaternion
	/// @{

	/// Create an identity quaternion.
	///
	/// @see gtx_quaternion
	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR qua<_Ty, Q> quat_identity();

	/// Compute a cross product between a quaternion and a vector.
	///
	/// @see gtx_quaternion
	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL vec<3, _Ty, Q> cross(
		qua<_Ty, Q> const& q,
		vec<3, _Ty, Q> const& v);

	//! Compute a cross product between a vector and a quaternion.
	///
	/// @see gtx_quaternion
	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL vec<3, _Ty, Q> cross(
		vec<3, _Ty, Q> const& v,
		qua<_Ty, Q> const& q);

	//! Compute a point on a path according squad equation.
	//! q1 and q2 are control points; s1 and s2 are intermediate control points.
	///
	/// @see gtx_quaternion
	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL qua<_Ty, Q> squad(
		qua<_Ty, Q> const& q1,
		qua<_Ty, Q> const& q2,
		qua<_Ty, Q> const& s1,
		qua<_Ty, Q> const& s2,
		_Ty const& h);

	//! Returns an intermediate control point for squad interpolation.
	///
	/// @see gtx_quaternion
	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL qua<_Ty, Q> intermediate(
		qua<_Ty, Q> const& prev,
		qua<_Ty, Q> const& curr,
		qua<_Ty, Q> const& next);

	//! Returns quarternion square root.
	///
	/// @see gtx_quaternion
	//template<typename T, qualifier Q>
	//qua<T, Q> sqrt(
	//	qua<T, Q> const& q);

	//! Rotates a 3 components vector by a quaternion.
	///
	/// @see gtx_quaternion
	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL vec<3, _Ty, Q> rotate(
		qua<_Ty, Q> const& q,
		vec<3, _Ty, Q> const& v);

	/// Rotates a 4 components vector by a quaternion.
	///
	/// @see gtx_quaternion
	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL vec<4, _Ty, Q> rotate(
		qua<_Ty, Q> const& q,
		vec<4, _Ty, Q> const& v);

	/// Extract the real component of a quaternion.
	///
	/// @see gtx_quaternion
	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL _Ty extractRealComponent(
		qua<_Ty, Q> const& q);

	/// Converts a quaternion to a 3 * 3 matrix.
	///
	/// @see gtx_quaternion
	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER mat<3, 3, _Ty, Q> toMat3(
		qua<_Ty, Q> const& x){return mat3_cast(x);}

	/// Converts a quaternion to a 4 * 4 matrix.
	///
	/// @see gtx_quaternion
	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER mat<4, 4, _Ty, Q> toMat4(
		qua<_Ty, Q> const& x){return mat4_cast(x);}

	/// Converts a 3 * 3 matrix to a quaternion.
	///
	/// @see gtx_quaternion
	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER qua<_Ty, Q> toQuat(
		mat<3, 3, _Ty, Q> const& x){return quat_cast(x);}

	/// Converts a 4 * 4 matrix to a quaternion.
	///
	/// @see gtx_quaternion
	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER qua<_Ty, Q> toQuat(
		mat<4, 4, _Ty, Q> const& x){return quat_cast(x);}

	/// Quaternion interpolation using the rotation short path.
	///
	/// @see gtx_quaternion
	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL qua<_Ty, Q> shortMix(
		qua<_Ty, Q> const& x,
		qua<_Ty, Q> const& y,
		_Ty const& a);

	/// Quaternion normalized linear interpolation.
	///
	/// @see gtx_quaternion
	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL qua<_Ty, Q> fastMix(
		qua<_Ty, Q> const& x,
		qua<_Ty, Q> const& y,
		_Ty const& a);

	/// Compute the rotation between two vectors.
	/// @param orig vector, needs to be normalized
	/// @param dest vector, needs to be normalized
	///
	/// @see gtx_quaternion
	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL qua<_Ty, Q> rotation(
		vec<3, _Ty, Q> const& orig,
		vec<3, _Ty, Q> const& dest);

	/// Returns the squared length of x.
	///
	/// @see gtx_quaternion
	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR _Ty length2(qua<_Ty, Q> const& q);

	/// @}
}//namespace glm

#include "quaternion.inl"
