#include "../exponential.hpp"
#include "../common.hpp"

namespace glm{
namespace detail
{
	template<length_t L, typename _Ty, qualifier Q, bool Aligned>
	struct compute_length
	{
		GLM_FUNC_QUALIFIER static _Ty call(vec<L, _Ty, Q> const& v)
		{
			return sqrt(dot(v, v));
		}
	};

	template<length_t L, typename _Ty, qualifier Q, bool Aligned>
	struct compute_distance
	{
		GLM_FUNC_QUALIFIER static _Ty call(vec<L, _Ty, Q> const& p0, vec<L, _Ty, Q> const& p1)
		{
			return length(p1 - p0);
		}
	};

	template<typename V, typename _Ty, bool Aligned>
	struct compute_dot{};

	template<typename _Ty, qualifier Q, bool Aligned>
	struct compute_dot<vec<1, _Ty, Q>, _Ty, Aligned>
	{
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR static _Ty call(vec<1, _Ty, Q> const& a, vec<1, _Ty, Q> const& b)
		{
			return a.x * b.x;
		}
	};

	template<typename _Ty, qualifier Q, bool Aligned>
	struct compute_dot<vec<2, _Ty, Q>, _Ty, Aligned>
	{
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR static _Ty call(vec<2, _Ty, Q> const& a, vec<2, _Ty, Q> const& b)
		{
			vec<2, _Ty, Q> tmp(a * b);
			return tmp.x + tmp.y;
		}
	};

	template<typename _Ty, qualifier Q, bool Aligned>
	struct compute_dot<vec<3, _Ty, Q>, _Ty, Aligned>
	{
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR static _Ty call(vec<3, _Ty, Q> const& a, vec<3, _Ty, Q> const& b)
		{
			vec<3, _Ty, Q> tmp(a * b);
			return tmp.x + tmp.y + tmp.z;
		}
	};

	template<typename _Ty, qualifier Q, bool Aligned>
	struct compute_dot<vec<4, _Ty, Q>, _Ty, Aligned>
	{
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR static _Ty call(vec<4, _Ty, Q> const& a, vec<4, _Ty, Q> const& b)
		{
			vec<4, _Ty, Q> tmp(a * b);
			return (tmp.x + tmp.y) + (tmp.z + tmp.w);
		}
	};

	template<typename _Ty, qualifier Q, bool Aligned>
	struct compute_cross
	{
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR static vec<3, _Ty, Q> call(vec<3, _Ty, Q> const& x, vec<3, _Ty, Q> const& y)
		{
			GLM_STATIC_ASSERT(std::numeric_limits<_Ty>::is_iec559, "'cross' accepts only floating-point inputs");

			return vec<3, _Ty, Q>(
				x.y * y.z - y.y * x.z,
				x.z * y.x - y.z * x.x,
				x.x * y.y - y.x * x.y);
		}
	};

	template<length_t L, typename _Ty, qualifier Q, bool Aligned>
	struct compute_normalize
	{
		GLM_FUNC_QUALIFIER static vec<L, _Ty, Q> call(vec<L, _Ty, Q> const& v)
		{
			GLM_STATIC_ASSERT(std::numeric_limits<_Ty>::is_iec559, "'normalize' accepts only floating-point inputs");

			return v * inversesqrt(dot(v, v));
		}
	};

	template<length_t L, typename _Ty, qualifier Q, bool Aligned>
	struct compute_faceforward
	{
		GLM_FUNC_QUALIFIER static vec<L, _Ty, Q> call(vec<L, _Ty, Q> const& N, vec<L, _Ty, Q> const& I, vec<L, _Ty, Q> const& Nref)
		{
			GLM_STATIC_ASSERT(std::numeric_limits<_Ty>::is_iec559, "'normalize' accepts only floating-point inputs");

			return dot(Nref, I) < static_cast<_Ty>(0) ? N : -N;
		}
	};

	template<length_t L, typename _Ty, qualifier Q, bool Aligned>
	struct compute_reflect
	{
		GLM_FUNC_QUALIFIER static vec<L, _Ty, Q> call(vec<L, _Ty, Q> const& I, vec<L, _Ty, Q> const& N)
		{
			return I - N * dot(N, I) * static_cast<_Ty>(2);
		}
	};

	template<length_t L, typename _Ty, qualifier Q, bool Aligned>
	struct compute_refract
	{
		GLM_FUNC_QUALIFIER static vec<L, _Ty, Q> call(vec<L, _Ty, Q> const& I, vec<L, _Ty, Q> const& N, _Ty eta)
		{
			_Ty const dotValue(dot(N, I));
			_Ty const k(static_cast<_Ty>(1) - eta * eta * (static_cast<_Ty>(1) - dotValue * dotValue));
			vec<L, _Ty, Q> const Result =
                (k >= static_cast<_Ty>(0)) ? (eta * I - (eta * dotValue + std::sqrt(k)) * N) : vec<L, _Ty, Q>(0);
			return Result;
		}
	};
}//namespace detail

	// length
	template<typename genType>
	GLM_FUNC_QUALIFIER genType length(genType x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'length' accepts only floating-point inputs");

		return abs(x);
	}

	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER _Ty length(vec<L, _Ty, Q> const& v)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<_Ty>::is_iec559, "'length' accepts only floating-point inputs");

		return detail::compute_length<L, _Ty, Q, detail::is_aligned<Q>::value>::call(v);
	}

	// distance
	template<typename genType>
	GLM_FUNC_QUALIFIER genType distance(genType const& p0, genType const& p1)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'distance' accepts only floating-point inputs");

		return length(p1 - p0);
	}

	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER _Ty distance(vec<L, _Ty, Q> const& p0, vec<L, _Ty, Q> const& p1)
	{
		return detail::compute_distance<L, _Ty, Q, detail::is_aligned<Q>::value>::call(p0, p1);
	}

	// dot
	template<typename _Ty>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR _Ty dot(_Ty x, _Ty y)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<_Ty>::is_iec559, "'dot' accepts only floating-point inputs");
		return x * y;
	}

	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR _Ty dot(vec<L, _Ty, Q> const& x, vec<L, _Ty, Q> const& y)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<_Ty>::is_iec559, "'dot' accepts only floating-point inputs");
		return detail::compute_dot<vec<L, _Ty, Q>, _Ty, detail::is_aligned<Q>::value>::call(x, y);
	}

	// cross
	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, _Ty, Q> cross(vec<3, _Ty, Q> const& x, vec<3, _Ty, Q> const& y)
	{
		return detail::compute_cross<_Ty, Q, detail::is_aligned<Q>::value>::call(x, y);
	}
/*
	// normalize
	template<typename genType>
	GLM_FUNC_QUALIFIER genType normalize(genType const& x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'normalize' accepts only floating-point inputs");

		return x < genType(0) ? genType(-1) : genType(1);
	}
*/
	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, _Ty, Q> normalize(vec<L, _Ty, Q> const& x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<_Ty>::is_iec559, "'normalize' accepts only floating-point inputs");

		return detail::compute_normalize<L, _Ty, Q, detail::is_aligned<Q>::value>::call(x);
	}

	// faceforward
	template<typename genType>
	GLM_FUNC_QUALIFIER genType faceforward(genType const& N, genType const& I, genType const& Nref)
	{
		return dot(Nref, I) < static_cast<genType>(0) ? N : -N;
	}

	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, _Ty, Q> faceforward(vec<L, _Ty, Q> const& N, vec<L, _Ty, Q> const& I, vec<L, _Ty, Q> const& Nref)
	{
		return detail::compute_faceforward<L, _Ty, Q, detail::is_aligned<Q>::value>::call(N, I, Nref);
	}

	// reflect
	template<typename genType>
	GLM_FUNC_QUALIFIER genType reflect(genType const& I, genType const& N)
	{
		return I - N * dot(N, I) * genType(2);
	}

	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, _Ty, Q> reflect(vec<L, _Ty, Q> const& I, vec<L, _Ty, Q> const& N)
	{
		return detail::compute_reflect<L, _Ty, Q, detail::is_aligned<Q>::value>::call(I, N);
	}

	// refract
	template<typename genType>
	GLM_FUNC_QUALIFIER genType refract(genType const& I, genType const& N, genType eta)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'refract' accepts only floating-point inputs");
		genType const dotValue(dot(N, I));
		genType const k(static_cast<genType>(1) - eta * eta * (static_cast<genType>(1) - dotValue * dotValue));
		return (eta * I - (eta * dotValue + sqrt(k)) * N) * static_cast<genType>(k >= static_cast<genType>(0));
	}

	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, _Ty, Q> refract(vec<L, _Ty, Q> const& I, vec<L, _Ty, Q> const& N, _Ty eta)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<_Ty>::is_iec559, "'refract' accepts only floating-point inputs");
		return detail::compute_refract<L, _Ty, Q, detail::is_aligned<Q>::value>::call(I, N, eta);
	}
}//namespace glm

#if GLM_CONFIG_SIMD == GLM_ENABLE
#	include "func_geometric_simd.inl"
#endif
