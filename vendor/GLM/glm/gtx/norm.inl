/// @ref gtx_norm

#include "../detail/qualifier.hpp"

namespace glm{
namespace detail
{
	template<length_t L, typename _Ty, qualifier Q, bool Aligned>
	struct compute_length2
	{
		GLM_FUNC_QUALIFIER static _Ty call(vec<L, _Ty, Q> const& v)
		{
			return dot(v, v);
		}
	};
}//namespace detail

	template<typename genType>
	GLM_FUNC_QUALIFIER genType length2(genType x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'length2' accepts only floating-point inputs");
		return x * x;
	}

	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER _Ty length2(vec<L, _Ty, Q> const& v)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<_Ty>::is_iec559, "'length2' accepts only floating-point inputs");
		return detail::compute_length2<L, _Ty, Q, detail::is_aligned<Q>::value>::call(v);
	}

	template<typename _Ty>
	GLM_FUNC_QUALIFIER _Ty distance2(_Ty p0, _Ty p1)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<_Ty>::is_iec559, "'distance2' accepts only floating-point inputs");
		return length2(p1 - p0);
	}

	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER _Ty distance2(vec<L, _Ty, Q> const& p0, vec<L, _Ty, Q> const& p1)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<_Ty>::is_iec559, "'distance2' accepts only floating-point inputs");
		return length2(p1 - p0);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER _Ty l1Norm(vec<3, _Ty, Q> const& a, vec<3, _Ty, Q> const& b)
	{
		return abs(b.x - a.x) + abs(b.y - a.y) + abs(b.z - a.z);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER _Ty l1Norm(vec<3, _Ty, Q> const& v)
	{
		return abs(v.x) + abs(v.y) + abs(v.z);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER _Ty l2Norm(vec<3, _Ty, Q> const& a, vec<3, _Ty, Q> const& b
	)
	{
		return length(b - a);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER _Ty l2Norm(vec<3, _Ty, Q> const& v)
	{
		return length(v);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER _Ty lxNorm(vec<3, _Ty, Q> const& x, vec<3, _Ty, Q> const& y, unsigned int Depth)
	{
		return pow(pow(abs(y.x - x.x), _Ty(Depth)) + pow(abs(y.y - x.y), _Ty(Depth)) + pow(abs(y.z - x.z), _Ty(Depth)), _Ty(1) / _Ty(Depth));
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER _Ty lxNorm(vec<3, _Ty, Q> const& v, unsigned int Depth)
	{
		return pow(pow(abs(v.x), _Ty(Depth)) + pow(abs(v.y), _Ty(Depth)) + pow(abs(v.z), _Ty(Depth)), _Ty(1) / _Ty(Depth));
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER _Ty lMaxNorm(vec<3, _Ty, Q> const& a, vec<3, _Ty, Q> const& b)
	{
		return compMax(abs(b - a));
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER _Ty lMaxNorm(vec<3, _Ty, Q> const& v)
	{
		return compMax(abs(v));
	}

}//namespace glm
