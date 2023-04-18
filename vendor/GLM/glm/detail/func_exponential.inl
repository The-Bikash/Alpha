/// @ref core
/// @file glm/detail/func_exponential.inl

#include "../vector_relational.hpp"
#include "_vectorize.hpp"
#include <limits>
#include <cmath>
#include <cassert>

namespace glm{
namespace detail
{
#	if GLM_HAS_CXX11_STL
		using std::log2;
#	else
		template<typename genType>
		genType log2(genType Value)
		{
			return std::log(Value) * static_cast<genType>(1.4426950408889634073599246810019);
		}
#	endif

	template<length_t L, typename _Ty, qualifier Q, bool isFloat, bool Aligned>
	struct compute_log2
	{
		GLM_FUNC_QUALIFIER static vec<L, _Ty, Q> call(vec<L, _Ty, Q> const& v)
		{
			GLM_STATIC_ASSERT(std::numeric_limits<_Ty>::is_iec559, "'log2' only accept floating-point inputs. Include <glm/gtc/integer.hpp> for integer inputs.");

			return detail::functor1<vec, L, _Ty, _Ty, Q>::call(log2, v);
		}
	};

	template<length_t L, typename _Ty, qualifier Q, bool Aligned>
	struct compute_sqrt
	{
		GLM_FUNC_QUALIFIER static vec<L, _Ty, Q> call(vec<L, _Ty, Q> const& x)
		{
			return detail::functor1<vec, L, _Ty, _Ty, Q>::call(std::sqrt, x);
		}
	};

	template<length_t L, typename _Ty, qualifier Q, bool Aligned>
	struct compute_inversesqrt
	{
		GLM_FUNC_QUALIFIER static vec<L, _Ty, Q> call(vec<L, _Ty, Q> const& x)
		{
			return static_cast<_Ty>(1) / sqrt(x);
		}
	};

	template<length_t L, bool Aligned>
	struct compute_inversesqrt<L, float, lowp, Aligned>
	{
		GLM_FUNC_QUALIFIER static vec<L, float, lowp> call(vec<L, float, lowp> const& x)
		{
			vec<L, float, lowp> tmp(x);
			vec<L, float, lowp> xhalf(tmp * 0.5f);
			vec<L, uint, lowp>* p = reinterpret_cast<vec<L, uint, lowp>*>(const_cast<vec<L, float, lowp>*>(&x));
			vec<L, uint, lowp> i = vec<L, uint, lowp>(0x5f375a86) - (*p >> vec<L, uint, lowp>(1));
			vec<L, float, lowp>* ptmp = reinterpret_cast<vec<L, float, lowp>*>(&i);
			tmp = *ptmp;
			tmp = tmp * (1.5f - xhalf * tmp * tmp);
			return tmp;
		}
	};
}//namespace detail

	// pow
	using std::pow;
	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, _Ty, Q> pow(vec<L, _Ty, Q> const& base, vec<L, _Ty, Q> const& exponent)
	{
		return detail::functor2<vec, L, _Ty, Q>::call(pow, base, exponent);
	}

	// exp
	using std::exp;
	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, _Ty, Q> exp(vec<L, _Ty, Q> const& x)
	{
		return detail::functor1<vec, L, _Ty, _Ty, Q>::call(exp, x);
	}

	// log
	using std::log;
	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, _Ty, Q> log(vec<L, _Ty, Q> const& x)
	{
		return detail::functor1<vec, L, _Ty, _Ty, Q>::call(log, x);
	}

#   if GLM_HAS_CXX11_STL
    using std::exp2;
#   else
	//exp2, ln2 = 0.69314718055994530941723212145818f
	template<typename genType>
	GLM_FUNC_QUALIFIER genType exp2(genType x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'exp2' only accept floating-point inputs");

		return std::exp(static_cast<genType>(0.69314718055994530941723212145818) * x);
	}
#   endif

	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, _Ty, Q> exp2(vec<L, _Ty, Q> const& x)
	{
		return detail::functor1<vec, L, _Ty, _Ty, Q>::call(exp2, x);
	}

	// log2, ln2 = 0.69314718055994530941723212145818f
	template<typename genType>
	GLM_FUNC_QUALIFIER genType log2(genType x)
	{
		return log2(vec<1, genType>(x)).x;
	}

	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, _Ty, Q> log2(vec<L, _Ty, Q> const& x)
	{
		return detail::compute_log2<L, _Ty, Q, std::numeric_limits<_Ty>::is_iec559, detail::is_aligned<Q>::value>::call(x);
	}

	// sqrt
	using std::sqrt;
	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, _Ty, Q> sqrt(vec<L, _Ty, Q> const& x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<_Ty>::is_iec559, "'sqrt' only accept floating-point inputs");
		return detail::compute_sqrt<L, _Ty, Q, detail::is_aligned<Q>::value>::call(x);
	}

	// inversesqrt
	template<typename genType>
	GLM_FUNC_QUALIFIER genType inversesqrt(genType x)
	{
		return static_cast<genType>(1) / sqrt(x);
	}

	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, _Ty, Q> inversesqrt(vec<L, _Ty, Q> const& x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<_Ty>::is_iec559, "'inversesqrt' only accept floating-point inputs");
		return detail::compute_inversesqrt<L, _Ty, Q, detail::is_aligned<Q>::value>::call(x);
	}
}//namespace glm

#if GLM_CONFIG_SIMD == GLM_ENABLE
#	include "func_exponential_simd.inl"
#endif

