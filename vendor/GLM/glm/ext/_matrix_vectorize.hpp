#pragma once

namespace glm {

	namespace detail {

		template<template<length_t C, length_t R, typename _Ty, qualifier Q> class mat, length_t C, length_t R, typename ReturnType, typename _Ty, qualifier Q>
		struct matrix_functor_1 {
		};

		template<template<length_t C, length_t R, typename _Ty, qualifier Q> class mat, typename ReturnType, typename _Ty, qualifier Q>
		struct matrix_functor_1<mat, 2, 2, ReturnType, _Ty, Q> {
			GLM_FUNC_QUALIFIER GLM_CONSTEXPR static mat<2, 2, _Ty, Q> call(ReturnType (*Func)(_Ty x), mat<2, 2, _Ty, Q> const &x) {
				return mat<2, 2, ReturnType, Q>(
					Func(x[0][0]), Func(x[0][1]),
					Func(x[1][0]), Func(x[1][1])
				);
			}
		};

		template<template<length_t C, length_t R, typename _Ty, qualifier Q> class mat, typename ReturnType, typename _Ty, qualifier Q>
		struct matrix_functor_1<mat, 2, 3, ReturnType, _Ty, Q> {

			GLM_FUNC_QUALIFIER GLM_CONSTEXPR static mat<2, 3, _Ty, Q> call(ReturnType (*Func)(_Ty x), mat<2, 3, _Ty, Q> const &x) {
				return mat<2, 3, ReturnType, Q>(
					Func(x[0][0]), Func(x[0][1]), Func(x[0][2]),
					Func(x[1][0]), Func(x[1][1]), Func(x[1][2])
				);
			}

		};

		template<template<length_t C, length_t R, typename _Ty, qualifier Q> class mat, typename ReturnType, typename _Ty, qualifier Q>
		struct matrix_functor_1<mat, 2, 4, ReturnType, _Ty, Q> {

			GLM_FUNC_QUALIFIER GLM_CONSTEXPR static mat<2, 4, _Ty, Q> call(ReturnType (*Func)(_Ty x), mat<2, 4, _Ty, Q> const &x) {
				return mat<2, 4, ReturnType, Q>(
					Func(x[0][0]), Func(x[0][1]), Func(x[0][2]), Func(x[0][3]),
					Func(x[1][0]), Func(x[1][1]), Func(x[1][2]), Func(x[1][3])
				);
			}

		};

		template<template<length_t C, length_t R, typename _Ty, qualifier Q> class mat, typename ReturnType, typename _Ty, qualifier Q>
		struct matrix_functor_1<mat, 3, 2, ReturnType, _Ty, Q> {

			GLM_FUNC_QUALIFIER GLM_CONSTEXPR static mat<3, 2, _Ty, Q> call(ReturnType (*Func)(_Ty x), mat<3, 2, _Ty, Q> const &x) {
				return mat<3, 2, ReturnType, Q>(
					Func(x[0][0]), Func(x[0][1]),
					Func(x[1][0]), Func(x[1][1]),
					Func(x[2][0]), Func(x[2][1])
				);
			}

		};

		template<template<length_t C, length_t R, typename _Ty, qualifier Q> class mat, typename ReturnType, typename _Ty, qualifier Q>
		struct matrix_functor_1<mat, 3, 3, ReturnType, _Ty, Q> {

			GLM_FUNC_QUALIFIER GLM_CONSTEXPR static mat<3, 3, _Ty, Q> call(ReturnType (*Func)(_Ty x), mat<3, 3, _Ty, Q> const &x) {
				return mat<3, 3, ReturnType, Q>(
					Func(x[0][0]), Func(x[0][1]), Func(x[0][2]),
					Func(x[1][0]), Func(x[1][1]), Func(x[1][2]),
					Func(x[2][0]), Func(x[2][1]), Func(x[2][2])
				);
			}

		};

		template<template<length_t C, length_t R, typename _Ty, qualifier Q> class mat, typename ReturnType, typename _Ty, qualifier Q>
		struct matrix_functor_1<mat, 3, 4, ReturnType, _Ty, Q> {

			GLM_FUNC_QUALIFIER GLM_CONSTEXPR static mat<3, 4, _Ty, Q> call(ReturnType (*Func)(_Ty x), mat<3, 4, _Ty, Q> const &x) {
				return mat<3, 4, ReturnType, Q>(
					Func(x[0][0]), Func(x[0][1]), Func(x[0][2]), Func(x[0][3]),
					Func(x[1][0]), Func(x[1][1]), Func(x[1][2]), Func(x[1][3]),
					Func(x[2][0]), Func(x[2][1]), Func(x[2][2]), Func(x[2][3])
				);
			}

		};

		template<template<length_t C, length_t R, typename _Ty, qualifier Q> class mat, typename ReturnType, typename _Ty, qualifier Q>
		struct matrix_functor_1<mat, 4, 2, ReturnType, _Ty, Q> {

			GLM_FUNC_QUALIFIER GLM_CONSTEXPR static mat<4, 2, _Ty, Q> call(ReturnType (*Func)(_Ty x), mat<4, 2, _Ty, Q> const &x) {
				return mat<4, 2, ReturnType, Q>(
					Func(x[0][0]), Func(x[0][1]),
					Func(x[1][0]), Func(x[1][1]),
					Func(x[2][0]), Func(x[2][1]),
					Func(x[3][0]), Func(x[3][1])
				);
			}

		};

		template<template<length_t C, length_t R, typename _Ty, qualifier Q> class mat, typename ReturnType, typename _Ty, qualifier Q>
		struct matrix_functor_1<mat, 4, 3, ReturnType, _Ty, Q> {

			GLM_FUNC_QUALIFIER GLM_CONSTEXPR static mat<4, 3, _Ty, Q> call(ReturnType (*Func)(_Ty x), mat<4, 3, _Ty, Q> const &x) {
				return mat<4, 3, ReturnType, Q>(
					Func(x[0][0]), Func(x[0][1]), Func(x[0][2]),
					Func(x[1][0]), Func(x[1][1]), Func(x[1][2]),
					Func(x[2][0]), Func(x[2][1]), Func(x[2][2]),
					Func(x[3][0]), Func(x[3][1]), Func(x[3][2])
				);
			}

		};

		template<template<length_t C, length_t R, typename _Ty, qualifier Q> class mat, typename ReturnType, typename _Ty, qualifier Q>
		struct matrix_functor_1<mat, 4, 4, ReturnType, _Ty, Q> {

			GLM_FUNC_QUALIFIER GLM_CONSTEXPR static mat<4, 4, _Ty, Q> call(ReturnType (*Func)(_Ty x), mat<4, 4, _Ty, Q> const &x) {
				return mat<4, 4, ReturnType, Q>(
					Func(x[0][0]), Func(x[0][1]), Func(x[0][2]), Func(x[0][3]),
					Func(x[1][0]), Func(x[1][1]), Func(x[1][2]), Func(x[1][3]),
					Func(x[2][0]), Func(x[2][1]), Func(x[2][2]), Func(x[2][3]),
					Func(x[3][0]), Func(x[3][1]), Func(x[3][2]), Func(x[3][3])
				);
			}

		};

	}

}// namespace glm
