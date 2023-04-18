#include "../detail/_vectorize.hpp"

namespace glm
{
	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, _Ty, Q> min(vec<L, _Ty, Q> const& x, vec<L, _Ty, Q> const& y, vec<L, _Ty, Q> const& z)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<_Ty>::is_iec559 || std::numeric_limits<_Ty>::is_integer, "'min' only accept floating-point or integer inputs");
		return glm::min(glm::min(x, y), z);
	}

	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, _Ty, Q> min(vec<L, _Ty, Q> const& x, vec<L, _Ty, Q> const& y, vec<L, _Ty, Q> const& z, vec<L, _Ty, Q> const& w)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<_Ty>::is_iec559 || std::numeric_limits<_Ty>::is_integer, "'min' only accept floating-point or integer inputs");
		return glm::min(glm::min(x, y), glm::min(z, w));
	}

	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, _Ty, Q> max(vec<L, _Ty, Q> const& x, vec<L, _Ty, Q> const& y, vec<L, _Ty, Q> const& z)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<_Ty>::is_iec559 || std::numeric_limits<_Ty>::is_integer, "'max' only accept floating-point or integer inputs");
		return glm::max(glm::max(x, y), z);
	}

	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, _Ty, Q> max(vec<L, _Ty, Q> const& x, vec<L, _Ty, Q> const& y, vec<L, _Ty, Q> const& z, vec<L, _Ty, Q> const& w)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<_Ty>::is_iec559 || std::numeric_limits<_Ty>::is_integer, "'max' only accept floating-point or integer inputs");
		return glm::max(glm::max(x, y), glm::max(z, w));
	}

	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, _Ty, Q> fmin(vec<L, _Ty, Q> const& a, _Ty b)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<_Ty>::is_iec559, "'fmin' only accept floating-point inputs");
		return detail::functor2<vec, L, _Ty, Q>::call(fmin, a, vec<L, _Ty, Q>(b));
	}

	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, _Ty, Q> fmin(vec<L, _Ty, Q> const& a, vec<L, _Ty, Q> const& b)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<_Ty>::is_iec559, "'fmin' only accept floating-point inputs");
		return detail::functor2<vec, L, _Ty, Q>::call(fmin, a, b);
	}

	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, _Ty, Q> fmin(vec<L, _Ty, Q> const& a, vec<L, _Ty, Q> const& b, vec<L, _Ty, Q> const& c)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<_Ty>::is_iec559, "'fmin' only accept floating-point inputs");
		return fmin(fmin(a, b), c);
	}

	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, _Ty, Q> fmin(vec<L, _Ty, Q> const& a, vec<L, _Ty, Q> const& b, vec<L, _Ty, Q> const& c, vec<L, _Ty, Q> const& d)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<_Ty>::is_iec559, "'fmin' only accept floating-point inputs");
		return fmin(fmin(a, b), fmin(c, d));
	}

	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, _Ty, Q> fmax(vec<L, _Ty, Q> const& a, _Ty b)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<_Ty>::is_iec559, "'fmax' only accept floating-point inputs");
		return detail::functor2<vec, L, _Ty, Q>::call(fmax, a, vec<L, _Ty, Q>(b));
	}

	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, _Ty, Q> fmax(vec<L, _Ty, Q> const& a, vec<L, _Ty, Q> const& b)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<_Ty>::is_iec559, "'fmax' only accept floating-point inputs");
		return detail::functor2<vec, L, _Ty, Q>::call(fmax, a, b);
	}

	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, _Ty, Q> fmax(vec<L, _Ty, Q> const& a, vec<L, _Ty, Q> const& b, vec<L, _Ty, Q> const& c)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<_Ty>::is_iec559, "'fmax' only accept floating-point inputs");
		return fmax(fmax(a, b), c);
	}

	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, _Ty, Q> fmax(vec<L, _Ty, Q> const& a, vec<L, _Ty, Q> const& b, vec<L, _Ty, Q> const& c, vec<L, _Ty, Q> const& d)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<_Ty>::is_iec559, "'fmax' only accept floating-point inputs");
		return fmax(fmax(a, b), fmax(c, d));
	}

	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, _Ty, Q> fclamp(vec<L, _Ty, Q> const& x, _Ty minVal, _Ty maxVal)
	{
		return fmin(fmax(x, vec<L, _Ty, Q>(minVal)), vec<L, _Ty, Q>(maxVal));
	}

	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, _Ty, Q> fclamp(vec<L, _Ty, Q> const& x, vec<L, _Ty, Q> const& minVal, vec<L, _Ty, Q> const& maxVal)
	{
		return fmin(fmax(x, minVal), maxVal);
	}

	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, _Ty, Q> clamp(vec<L, _Ty, Q> const& Texcoord)
	{
		return glm::clamp(Texcoord, vec<L, _Ty, Q>(0), vec<L, _Ty, Q>(1));
	}

	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, _Ty, Q> repeat(vec<L, _Ty, Q> const& Texcoord)
	{
		return glm::fract(Texcoord);
	}

	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, _Ty, Q> mirrorClamp(vec<L, _Ty, Q> const& Texcoord)
	{
		return glm::fract(glm::abs(Texcoord));
	}

	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, _Ty, Q> mirrorRepeat(vec<L, _Ty, Q> const& Texcoord)
	{
		vec<L, _Ty, Q> const Abs = glm::abs(Texcoord);
		vec<L, _Ty, Q> const Clamp = glm::mod(glm::floor(Abs), vec<L, _Ty, Q>(2));
		vec<L, _Ty, Q> const Floor = glm::floor(Abs);
		vec<L, _Ty, Q> const Rest = Abs - Floor;
		vec<L, _Ty, Q> const Mirror = Clamp + Rest;
		return mix(Rest, vec<L, _Ty, Q>(1) - Rest, glm::greaterThanEqual(Mirror, vec<L, _Ty, Q>(1)));
	}

	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, int, Q> iround(vec<L, _Ty, Q> const& x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<_Ty>::is_iec559, "'iround' only accept floating-point inputs");
		assert(all(lessThanEqual(vec<L, _Ty, Q>(0), x)));

		return vec<L, int, Q>(x + static_cast<_Ty>(0.5));
	}

	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, uint, Q> uround(vec<L, _Ty, Q> const& x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<_Ty>::is_iec559, "'uround' only accept floating-point inputs");
		assert(all(lessThanEqual(vec<L, _Ty, Q>(0), x)));

		return vec<L, uint, Q>(x + static_cast<_Ty>(0.5));
	}
}//namespace glm
