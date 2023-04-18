/// @ref ext_vector_reciprocal

#include "../trigonometric.hpp"
#include <limits>

namespace glm
{
	// sec
	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, _Ty, Q> sec(vec<L, _Ty, Q> const& x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<_Ty>::is_iec559, "'sec' only accept floating-point inputs");
		return static_cast<_Ty>(1) / detail::functor1<vec, L, _Ty, _Ty, Q>::call(cos, x);
	}

	// csc
	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, _Ty, Q> csc(vec<L, _Ty, Q> const& x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<_Ty>::is_iec559, "'csc' only accept floating-point inputs");
		return static_cast<_Ty>(1) / detail::functor1<vec, L, _Ty, _Ty, Q>::call(sin, x);
	}

	// cot
	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, _Ty, Q> cot(vec<L, _Ty, Q> const& x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<_Ty>::is_iec559, "'cot' only accept floating-point inputs");
		_Ty const pi_over_2 = static_cast<_Ty>(3.1415926535897932384626433832795 / 2.0);
		return detail::functor1<vec, L, _Ty, _Ty, Q>::call(tan, pi_over_2 - x);
	}

	// asec
	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, _Ty, Q> asec(vec<L, _Ty, Q> const& x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<_Ty>::is_iec559, "'asec' only accept floating-point inputs");
		return detail::functor1<vec, L, _Ty, _Ty, Q>::call(acos, static_cast<_Ty>(1) / x);
	}

	// acsc
	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, _Ty, Q> acsc(vec<L, _Ty, Q> const& x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<_Ty>::is_iec559, "'acsc' only accept floating-point inputs");
		return detail::functor1<vec, L, _Ty, _Ty, Q>::call(asin, static_cast<_Ty>(1) / x);
	}

	// acot
	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, _Ty, Q> acot(vec<L, _Ty, Q> const& x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<_Ty>::is_iec559, "'acot' only accept floating-point inputs");
		_Ty const pi_over_2 = static_cast<_Ty>(3.1415926535897932384626433832795 / 2.0);
		return pi_over_2 - detail::functor1<vec, L, _Ty, _Ty, Q>::call(atan, x);
	}

	// sech
	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, _Ty, Q> sech(vec<L, _Ty, Q> const& x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<_Ty>::is_iec559, "'sech' only accept floating-point inputs");
		return static_cast<_Ty>(1) / detail::functor1<vec, L, _Ty, _Ty, Q>::call(cosh, x);
	}

	// csch
	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, _Ty, Q> csch(vec<L, _Ty, Q> const& x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<_Ty>::is_iec559, "'csch' only accept floating-point inputs");
		return static_cast<_Ty>(1) / detail::functor1<vec, L, _Ty, _Ty, Q>::call(sinh, x);
	}

	// coth
	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, _Ty, Q> coth(vec<L, _Ty, Q> const& x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<_Ty>::is_iec559, "'coth' only accept floating-point inputs");
		return glm::cosh(x) / glm::sinh(x);
	}

	// asech
	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, _Ty, Q> asech(vec<L, _Ty, Q> const& x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<_Ty>::is_iec559, "'asech' only accept floating-point inputs");
		return detail::functor1<vec, L, _Ty, _Ty, Q>::call(acosh, static_cast<_Ty>(1) / x);
	}

	// acsch
	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, _Ty, Q> acsch(vec<L, _Ty, Q> const& x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<_Ty>::is_iec559, "'acsch' only accept floating-point inputs");
		return detail::functor1<vec, L, _Ty, _Ty, Q>::call(asinh, static_cast<_Ty>(1) / x);
	}

	// acoth
	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, _Ty, Q> acoth(vec<L, _Ty, Q> const& x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<_Ty>::is_iec559, "'acoth' only accept floating-point inputs");
		return detail::functor1<vec, L, _Ty, _Ty, Q>::call(atanh, static_cast<_Ty>(1) / x);
	}
}//namespace glm
