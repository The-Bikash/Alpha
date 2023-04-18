#pragma once

#include "../common.hpp"

namespace glm{
namespace detail
{
	template<typename _Ty>
	GLM_FUNC_QUALIFIER _Ty mod289(_Ty const& x)
	{
		return x - floor(x * (static_cast<_Ty>(1.0) / static_cast<_Ty>(289.0))) * static_cast<_Ty>(289.0);
	}

	template<typename _Ty>
	GLM_FUNC_QUALIFIER _Ty permute(_Ty const& x)
	{
		return mod289(((x * static_cast<_Ty>(34)) + static_cast<_Ty>(1)) * x);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<2, _Ty, Q> permute(vec<2, _Ty, Q> const& x)
	{
		return mod289(((x * static_cast<_Ty>(34)) + static_cast<_Ty>(1)) * x);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<3, _Ty, Q> permute(vec<3, _Ty, Q> const& x)
	{
		return mod289(((x * static_cast<_Ty>(34)) + static_cast<_Ty>(1)) * x);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<4, _Ty, Q> permute(vec<4, _Ty, Q> const& x)
	{
		return mod289(((x * static_cast<_Ty>(34)) + static_cast<_Ty>(1)) * x);
	}

	template<typename _Ty>
	GLM_FUNC_QUALIFIER _Ty taylorInvSqrt(_Ty const& r)
	{
		return static_cast<_Ty>(1.79284291400159) - static_cast<_Ty>(0.85373472095314) * r;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<2, _Ty, Q> taylorInvSqrt(vec<2, _Ty, Q> const& r)
	{
		return static_cast<_Ty>(1.79284291400159) - static_cast<_Ty>(0.85373472095314) * r;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<3, _Ty, Q> taylorInvSqrt(vec<3, _Ty, Q> const& r)
	{
		return static_cast<_Ty>(1.79284291400159) - static_cast<_Ty>(0.85373472095314) * r;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<4, _Ty, Q> taylorInvSqrt(vec<4, _Ty, Q> const& r)
	{
		return static_cast<_Ty>(1.79284291400159) - static_cast<_Ty>(0.85373472095314) * r;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<2, _Ty, Q> fade(vec<2, _Ty, Q> const& t)
	{
		return (t * t * t) * (t * (t * static_cast<_Ty>(6) - static_cast<_Ty>(15)) + static_cast<_Ty>(10));
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<3, _Ty, Q> fade(vec<3, _Ty, Q> const& t)
	{
		return (t * t * t) * (t * (t * static_cast<_Ty>(6) - static_cast<_Ty>(15)) + static_cast<_Ty>(10));
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<4, _Ty, Q> fade(vec<4, _Ty, Q> const& t)
	{
		return (t * t * t) * (t * (t * static_cast<_Ty>(6) - static_cast<_Ty>(15)) + static_cast<_Ty>(10));
	}
}//namespace detail
}//namespace glm

