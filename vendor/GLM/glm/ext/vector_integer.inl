#include "scalar_integer.hpp"

namespace glm
{
	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, bool, Q> isPowerOfTwo(vec<L, _Ty, Q> const& Value)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<_Ty>::is_integer, "'isPowerOfTwo' only accept integer inputs");

		vec<L, _Ty, Q> const Result(abs(Value));
		return equal(Result & (Result - vec<L, _Ty, Q>(1)), vec<L, _Ty, Q>(0));
	}

	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, _Ty, Q> nextPowerOfTwo(vec<L, _Ty, Q> const& v)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<_Ty>::is_integer, "'nextPowerOfTwo' only accept integer inputs");

		return detail::compute_ceilPowerOfTwo<L, _Ty, Q, std::numeric_limits<_Ty>::is_signed>::call(v);
	}

	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, _Ty, Q> prevPowerOfTwo(vec<L, _Ty, Q> const& v)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<_Ty>::is_integer, "'prevPowerOfTwo' only accept integer inputs");

		return detail::functor1<vec, L, _Ty, _Ty, Q>::call(prevPowerOfTwo, v);
	}

	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, bool, Q> isMultiple(vec<L, _Ty, Q> const& Value, _Ty Multiple)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<_Ty>::is_integer, "'isMultiple' only accept integer inputs");

		return equal(Value % Multiple, vec<L, _Ty, Q>(0));
	}

	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, bool, Q> isMultiple(vec<L, _Ty, Q> const& Value, vec<L, _Ty, Q> const& Multiple)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<_Ty>::is_integer, "'isMultiple' only accept integer inputs");

		return equal(Value % Multiple, vec<L, _Ty, Q>(0));
	}

	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, _Ty, Q> nextMultiple(vec<L, _Ty, Q> const& Source, _Ty Multiple)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<_Ty>::is_integer, "'nextMultiple' only accept integer inputs");

		return detail::functor2<vec, L, _Ty, Q>::call(nextMultiple, Source, vec<L, _Ty, Q>(Multiple));
	}

	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, _Ty, Q> nextMultiple(vec<L, _Ty, Q> const& Source, vec<L, _Ty, Q> const& Multiple)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<_Ty>::is_integer, "'nextMultiple' only accept integer inputs");

		return detail::functor2<vec, L, _Ty, Q>::call(nextMultiple, Source, Multiple);
	}

	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, _Ty, Q> prevMultiple(vec<L, _Ty, Q> const& Source, _Ty Multiple)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<_Ty>::is_integer, "'prevMultiple' only accept integer inputs");

		return detail::functor2<vec, L, _Ty, Q>::call(prevMultiple, Source, vec<L, _Ty, Q>(Multiple));
	}

	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, _Ty, Q> prevMultiple(vec<L, _Ty, Q> const& Source, vec<L, _Ty, Q> const& Multiple)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<_Ty>::is_integer, "'prevMultiple' only accept integer inputs");

		return detail::functor2<vec, L, _Ty, Q>::call(prevMultiple, Source, Multiple);
	}

	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, int, Q> findNSB(vec<L, _Ty, Q> const& Source, vec<L, int, Q> SignificantBitCount)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<_Ty>::is_integer, "'findNSB' only accept integer inputs");

		return detail::functor2_vec_int<L, _Ty, Q>::call(findNSB, Source, SignificantBitCount);
	}
}//namespace glm
