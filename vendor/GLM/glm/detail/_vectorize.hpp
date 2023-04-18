#pragma once

namespace glm{
namespace detail
{
	template<template<length_t L, typename _Ty, qualifier Q> class vec, length_t L, typename R, typename _Ty, qualifier Q>
	struct functor1{};

	template<template<length_t L, typename _Ty, qualifier Q> class vec, typename R, typename _Ty, qualifier Q>
	struct functor1<vec, 1, R, _Ty, Q>
	{
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR static vec<1, R, Q> call(R (*Func) (_Ty x), vec<1, _Ty, Q> const& v)
		{
			return vec<1, R, Q>(Func(v.x));
		}
	};

	template<template<length_t L, typename _Ty, qualifier Q> class vec, typename R, typename _Ty, qualifier Q>
	struct functor1<vec, 2, R, _Ty, Q>
	{
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR static vec<2, R, Q> call(R (*Func) (_Ty x), vec<2, _Ty, Q> const& v)
		{
			return vec<2, R, Q>(Func(v.x), Func(v.y));
		}
	};

	template<template<length_t L, typename _Ty, qualifier Q> class vec, typename R, typename _Ty, qualifier Q>
	struct functor1<vec, 3, R, _Ty, Q>
	{
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR static vec<3, R, Q> call(R (*Func) (_Ty x), vec<3, _Ty, Q> const& v)
		{
			return vec<3, R, Q>(Func(v.x), Func(v.y), Func(v.z));
		}
	};

	template<template<length_t L, typename _Ty, qualifier Q> class vec, typename R, typename _Ty, qualifier Q>
	struct functor1<vec, 4, R, _Ty, Q>
	{
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR static vec<4, R, Q> call(R (*Func) (_Ty x), vec<4, _Ty, Q> const& v)
		{
			return vec<4, R, Q>(Func(v.x), Func(v.y), Func(v.z), Func(v.w));
		}
	};

	template<template<length_t L, typename _Ty, qualifier Q> class vec, length_t L, typename _Ty, qualifier Q>
	struct functor2{};

	template<template<length_t L, typename _Ty, qualifier Q> class vec, typename _Ty, qualifier Q>
	struct functor2<vec, 1, _Ty, Q>
	{
		GLM_FUNC_QUALIFIER static vec<1, _Ty, Q> call(_Ty (*Func) (_Ty x, _Ty y), vec<1, _Ty, Q> const& a, vec<1, _Ty, Q> const& b)
		{
			return vec<1, _Ty, Q>(Func(a.x, b.x));
		}
	};

	template<template<length_t L, typename _Ty, qualifier Q> class vec, typename _Ty, qualifier Q>
	struct functor2<vec, 2, _Ty, Q>
	{
		GLM_FUNC_QUALIFIER static vec<2, _Ty, Q> call(_Ty (*Func) (_Ty x, _Ty y), vec<2, _Ty, Q> const& a, vec<2, _Ty, Q> const& b)
		{
			return vec<2, _Ty, Q>(Func(a.x, b.x), Func(a.y, b.y));
		}
	};

	template<template<length_t L, typename _Ty, qualifier Q> class vec, typename _Ty, qualifier Q>
	struct functor2<vec, 3, _Ty, Q>
	{
		GLM_FUNC_QUALIFIER static vec<3, _Ty, Q> call(_Ty (*Func) (_Ty x, _Ty y), vec<3, _Ty, Q> const& a, vec<3, _Ty, Q> const& b)
		{
			return vec<3, _Ty, Q>(Func(a.x, b.x), Func(a.y, b.y), Func(a.z, b.z));
		}
	};

	template<template<length_t L, typename _Ty, qualifier Q> class vec, typename _Ty, qualifier Q>
	struct functor2<vec, 4, _Ty, Q>
	{
		GLM_FUNC_QUALIFIER static vec<4, _Ty, Q> call(_Ty (*Func) (_Ty x, _Ty y), vec<4, _Ty, Q> const& a, vec<4, _Ty, Q> const& b)
		{
			return vec<4, _Ty, Q>(Func(a.x, b.x), Func(a.y, b.y), Func(a.z, b.z), Func(a.w, b.w));
		}
	};

	template<template<length_t L, typename _Ty, qualifier Q> class vec, length_t L, typename _Ty, qualifier Q>
	struct functor2_vec_sca{};

	template<template<length_t L, typename _Ty, qualifier Q> class vec, typename _Ty, qualifier Q>
	struct functor2_vec_sca<vec, 1, _Ty, Q>
	{
		GLM_FUNC_QUALIFIER static vec<1, _Ty, Q> call(_Ty (*Func) (_Ty x, _Ty y), vec<1, _Ty, Q> const& a, _Ty b)
		{
			return vec<1, _Ty, Q>(Func(a.x, b));
		}
	};

	template<template<length_t L, typename _Ty, qualifier Q> class vec, typename _Ty, qualifier Q>
	struct functor2_vec_sca<vec, 2, _Ty, Q>
	{
		GLM_FUNC_QUALIFIER static vec<2, _Ty, Q> call(_Ty (*Func) (_Ty x, _Ty y), vec<2, _Ty, Q> const& a, _Ty b)
		{
			return vec<2, _Ty, Q>(Func(a.x, b), Func(a.y, b));
		}
	};

	template<template<length_t L, typename _Ty, qualifier Q> class vec, typename _Ty, qualifier Q>
	struct functor2_vec_sca<vec, 3, _Ty, Q>
	{
		GLM_FUNC_QUALIFIER static vec<3, _Ty, Q> call(_Ty (*Func) (_Ty x, _Ty y), vec<3, _Ty, Q> const& a, _Ty b)
		{
			return vec<3, _Ty, Q>(Func(a.x, b), Func(a.y, b), Func(a.z, b));
		}
	};

	template<template<length_t L, typename _Ty, qualifier Q> class vec, typename _Ty, qualifier Q>
	struct functor2_vec_sca<vec, 4, _Ty, Q>
	{
		GLM_FUNC_QUALIFIER static vec<4, _Ty, Q> call(_Ty (*Func) (_Ty x, _Ty y), vec<4, _Ty, Q> const& a, _Ty b)
		{
			return vec<4, _Ty, Q>(Func(a.x, b), Func(a.y, b), Func(a.z, b), Func(a.w, b));
		}
	};

	template<length_t L, typename _Ty, qualifier Q>
	struct functor2_vec_int {};

	template<typename _Ty, qualifier Q>
	struct functor2_vec_int<1, _Ty, Q>
	{
		GLM_FUNC_QUALIFIER static vec<1, int, Q> call(int (*Func) (_Ty x, int y), vec<1, _Ty, Q> const& a, vec<1, int, Q> const& b)
		{
			return vec<1, int, Q>(Func(a.x, b.x));
		}
	};

	template<typename _Ty, qualifier Q>
	struct functor2_vec_int<2, _Ty, Q>
	{
		GLM_FUNC_QUALIFIER static vec<2, int, Q> call(int (*Func) (_Ty x, int y), vec<2, _Ty, Q> const& a, vec<2, int, Q> const& b)
		{
			return vec<2, int, Q>(Func(a.x, b.x), Func(a.y, b.y));
		}
	};

	template<typename _Ty, qualifier Q>
	struct functor2_vec_int<3, _Ty, Q>
	{
		GLM_FUNC_QUALIFIER static vec<3, int, Q> call(int (*Func) (_Ty x, int y), vec<3, _Ty, Q> const& a, vec<3, int, Q> const& b)
		{
			return vec<3, int, Q>(Func(a.x, b.x), Func(a.y, b.y), Func(a.z, b.z));
		}
	};

	template<typename _Ty, qualifier Q>
	struct functor2_vec_int<4, _Ty, Q>
	{
		GLM_FUNC_QUALIFIER static vec<4, int, Q> call(int (*Func) (_Ty x, int y), vec<4, _Ty, Q> const& a, vec<4, int, Q> const& b)
		{
			return vec<4, int, Q>(Func(a.x, b.x), Func(a.y, b.y), Func(a.z, b.z), Func(a.w, b.w));
		}
	};
}//namespace detail
}//namespace glm
