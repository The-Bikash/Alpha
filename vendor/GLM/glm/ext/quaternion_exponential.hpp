/// @ref ext_quaternion_exponential
/// @file glm/ext/quaternion_exponential.hpp
///
/// @defgroup ext_quaternion_exponential GLM_EXT_quaternion_exponential
/// @ingroup ext
///
/// Provides exponential functions for quaternion types
///
/// Include <glm/ext/quaternion_exponential.hpp> to use the features of this extension.
///
/// @see core_exponential
/// @see ext_quaternion_float
/// @see ext_quaternion_double

#pragma once

// Dependency:
#include "../common.hpp"
#include "../trigonometric.hpp"
#include "../geometric.hpp"
#include "../ext/scalar_constants.hpp"

#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	pragma message("GLM: GLM_EXT_quaternion_exponential extension included")
#endif

namespace glm
{
	/// @addtogroup ext_quaternion_transform
	/// @{

	/// Returns a exponential of a quaternion.
	///
	/// @tparam T A floating-point scalar type
	/// @tparam Q A value from qualifier enum
	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL qua<_Ty, Q> exp(qua<_Ty, Q> const& q);

	/// Returns a logarithm of a quaternion
	///
	/// @tparam T A floating-point scalar type
	/// @tparam Q A value from qualifier enum
	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL qua<_Ty, Q> log(qua<_Ty, Q> const& q);

	/// Returns a quaternion raised to a power.
	///
	/// @tparam T A floating-point scalar type
	/// @tparam Q A value from qualifier enum
	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL qua<_Ty, Q> pow(qua<_Ty, Q> const& q, _Ty y);

	/// Returns the square root of a quaternion
	///
	/// @tparam T A floating-point scalar type
	/// @tparam Q A value from qualifier enum
	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL qua<_Ty, Q> sqrt(qua<_Ty, Q> const& q);

	/// @}
} //namespace glm

#include "quaternion_exponential.inl"
