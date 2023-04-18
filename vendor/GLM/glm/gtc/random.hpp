/// @ref gtc_random
/// @file glm/gtc/random.hpp
///
/// @see core (dependence)
/// @see gtx_random (extended)
///
/// @defgroup gtc_random GLM_GTC_random
/// @ingroup gtc
///
/// Include <glm/gtc/random.hpp> to use the features of this extension.
///
/// Generate random number from various distribution methods.

#pragma once

// Dependency:
#include "../ext/scalar_int_sized.hpp"
#include "../ext/scalar_uint_sized.hpp"
#include "../detail/qualifier.hpp"

#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	pragma message("GLM: GLM_GTC_random extension included")
#endif

namespace glm
{
	/// @addtogroup gtc_random
	/// @{

	/// Generate random numbers in the interval [Min, Max], according a linear distribution
	///
	/// @param Min Minimum value included in the sampling
	/// @param Max Maximum value included in the sampling
	/// @tparam genType Value type. Currently supported: float or double scalars.
	/// @see gtc_random
	template<typename genType>
	GLM_FUNC_DECL genType linearRand(genType Min, genType Max);

	/// Generate random numbers in the interval [Min, Max], according a linear distribution
	///
	/// @param Min Minimum value included in the sampling
	/// @param Max Maximum value included in the sampling
	/// @tparam T Value type. Currently supported: float or double.
	///
	/// @see gtc_random
	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_DECL vec<L, _Ty, Q> linearRand(vec<L, _Ty, Q> const& Min, vec<L, _Ty, Q> const& Max);

	/// Generate random numbers in the interval [Min, Max], according a gaussian distribution
	///
	/// @see gtc_random
	template<typename genType>
	GLM_FUNC_DECL genType gaussRand(genType Mean, genType Deviation);

	/// Generate a random 2D vector which coordinates are regularly distributed on a circle of a given radius
	///
	/// @see gtc_random
	template<typename _Ty>
	GLM_FUNC_DECL vec<2, _Ty, defaultp> circularRand(_Ty Radius);

	/// Generate a random 3D vector which coordinates are regularly distributed on a sphere of a given radius
	///
	/// @see gtc_random
	template<typename _Ty>
	GLM_FUNC_DECL vec<3, _Ty, defaultp> sphericalRand(_Ty Radius);

	/// Generate a random 2D vector which coordinates are regularly distributed within the area of a disk of a given radius
	///
	/// @see gtc_random
	template<typename _Ty>
	GLM_FUNC_DECL vec<2, _Ty, defaultp> diskRand(_Ty Radius);

	/// Generate a random 3D vector which coordinates are regularly distributed within the volume of a ball of a given radius
	///
	/// @see gtc_random
	template<typename _Ty>
	GLM_FUNC_DECL vec<3, _Ty, defaultp> ballRand(_Ty Radius);

	/// @}
}//namespace glm

#include "random.inl"
