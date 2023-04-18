/// @ref core
/// @file glm/detail/type_mat2x2.hpp

#pragma once

#include "type_vec2.hpp"
#include <limits>
#include <cstddef>

namespace glm
{
	template<typename _Ty, qualifier Q>
	struct mat<2, 2, _Ty, Q>
	{
		typedef vec<2, _Ty, Q> col_type;
		typedef vec<2, _Ty, Q> row_type;
		typedef mat<2, 2, _Ty, Q> type;
		typedef mat<2, 2, _Ty, Q> transpose_type;
		typedef _Ty value_type;

	private:
		col_type value[2];

	public:
		// -- Accesses --

		typedef length_t length_type;
		GLM_FUNC_DECL static GLM_CONSTEXPR length_type length() { return 2; }

		GLM_FUNC_DECL col_type & operator[](length_type i) GLM_NOEXCEPT;
		GLM_FUNC_DECL GLM_CONSTEXPR col_type const& operator[](length_type i) const GLM_NOEXCEPT;

		// -- Constructors --

		GLM_FUNC_DECL GLM_CONSTEXPR mat() GLM_DEFAULT_CTOR;
		template<qualifier P>
		GLM_FUNC_DECL GLM_CONSTEXPR mat(mat<2, 2, _Ty, P> const& m);

		GLM_FUNC_DECL explicit GLM_CONSTEXPR mat(_Ty scalar);
		GLM_FUNC_DECL GLM_CONSTEXPR mat(
			_Ty const& x1, _Ty const& y1,
			_Ty const& x2, _Ty const& y2);
		GLM_FUNC_DECL GLM_CONSTEXPR mat(
			col_type const& v1,
			col_type const& v2);

		// -- Conversions --

		template<typename U, typename V, typename M, typename N>
		GLM_FUNC_DECL GLM_CONSTEXPR mat(
			U const& x1, V const& y1,
			M const& x2, N const& y2);

		template<typename U, typename V>
		GLM_FUNC_DECL GLM_CONSTEXPR mat(
			vec<2, U, Q> const& v1,
			vec<2, V, Q> const& v2);

		// -- Matrix conversions --

		template<typename U, qualifier P>
		GLM_FUNC_DECL GLM_EXPLICIT GLM_CONSTEXPR mat(mat<2, 2, U, P> const& m);

		GLM_FUNC_DECL GLM_EXPLICIT GLM_CONSTEXPR mat(mat<3, 3, _Ty, Q> const& x);
		GLM_FUNC_DECL GLM_EXPLICIT GLM_CONSTEXPR mat(mat<4, 4, _Ty, Q> const& x);
		GLM_FUNC_DECL GLM_EXPLICIT GLM_CONSTEXPR mat(mat<2, 3, _Ty, Q> const& x);
		GLM_FUNC_DECL GLM_EXPLICIT GLM_CONSTEXPR mat(mat<3, 2, _Ty, Q> const& x);
		GLM_FUNC_DECL GLM_EXPLICIT GLM_CONSTEXPR mat(mat<2, 4, _Ty, Q> const& x);
		GLM_FUNC_DECL GLM_EXPLICIT GLM_CONSTEXPR mat(mat<4, 2, _Ty, Q> const& x);
		GLM_FUNC_DECL GLM_EXPLICIT GLM_CONSTEXPR mat(mat<3, 4, _Ty, Q> const& x);
		GLM_FUNC_DECL GLM_EXPLICIT GLM_CONSTEXPR mat(mat<4, 3, _Ty, Q> const& x);

		// -- Unary arithmetic operators --

		template<typename U>
		GLM_FUNC_DECL mat<2, 2, _Ty, Q> & operator=(mat<2, 2, U, Q> const& m);
		template<typename U>
		GLM_FUNC_DECL mat<2, 2, _Ty, Q> & operator+=(U s);
		template<typename U>
		GLM_FUNC_DECL mat<2, 2, _Ty, Q> & operator+=(mat<2, 2, U, Q> const& m);
		template<typename U>
		GLM_FUNC_DECL mat<2, 2, _Ty, Q> & operator-=(U s);
		template<typename U>
		GLM_FUNC_DECL mat<2, 2, _Ty, Q> & operator-=(mat<2, 2, U, Q> const& m);
		template<typename U>
		GLM_FUNC_DECL mat<2, 2, _Ty, Q> & operator*=(U s);
		template<typename U>
		GLM_FUNC_DECL mat<2, 2, _Ty, Q> & operator*=(mat<2, 2, U, Q> const& m);
		template<typename U>
		GLM_FUNC_DECL mat<2, 2, _Ty, Q> & operator/=(U s);
		template<typename U>
		GLM_FUNC_DECL mat<2, 2, _Ty, Q> & operator/=(mat<2, 2, U, Q> const& m);

		// -- Increment and decrement operators --

		GLM_FUNC_DECL mat<2, 2, _Ty, Q> & operator++ ();
		GLM_FUNC_DECL mat<2, 2, _Ty, Q> & operator-- ();
		GLM_FUNC_DECL mat<2, 2, _Ty, Q> operator++(int);
		GLM_FUNC_DECL mat<2, 2, _Ty, Q> operator--(int);
	};

	// -- Unary operators --

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL mat<2, 2, _Ty, Q> operator+(mat<2, 2, _Ty, Q> const& m);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL mat<2, 2, _Ty, Q> operator-(mat<2, 2, _Ty, Q> const& m);

	// -- Binary operators --

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL mat<2, 2, _Ty, Q> operator+(mat<2, 2, _Ty, Q> const& m, _Ty scalar);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL mat<2, 2, _Ty, Q> operator+(_Ty scalar, mat<2, 2, _Ty, Q> const& m);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL mat<2, 2, _Ty, Q> operator+(mat<2, 2, _Ty, Q> const& m1, mat<2, 2, _Ty, Q> const& m2);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL mat<2, 2, _Ty, Q> operator-(mat<2, 2, _Ty, Q> const& m, _Ty scalar);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL mat<2, 2, _Ty, Q> operator-(_Ty scalar, mat<2, 2, _Ty, Q> const& m);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL mat<2, 2, _Ty, Q> operator-(mat<2, 2, _Ty, Q> const& m1, mat<2, 2, _Ty, Q> const& m2);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL mat<2, 2, _Ty, Q> operator*(mat<2, 2, _Ty, Q> const& m, _Ty scalar);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL mat<2, 2, _Ty, Q> operator*(_Ty scalar, mat<2, 2, _Ty, Q> const& m);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL typename mat<2, 2, _Ty, Q>::col_type operator*(mat<2, 2, _Ty, Q> const& m, typename mat<2, 2, _Ty, Q>::row_type const& v);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL typename mat<2, 2, _Ty, Q>::row_type operator*(typename mat<2, 2, _Ty, Q>::col_type const& v, mat<2, 2, _Ty, Q> const& m);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL mat<2, 2, _Ty, Q> operator*(mat<2, 2, _Ty, Q> const& m1, mat<2, 2, _Ty, Q> const& m2);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL mat<3, 2, _Ty, Q> operator*(mat<2, 2, _Ty, Q> const& m1, mat<3, 2, _Ty, Q> const& m2);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL mat<4, 2, _Ty, Q> operator*(mat<2, 2, _Ty, Q> const& m1, mat<4, 2, _Ty, Q> const& m2);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL mat<2, 2, _Ty, Q> operator/(mat<2, 2, _Ty, Q> const& m, _Ty scalar);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL mat<2, 2, _Ty, Q> operator/(_Ty scalar, mat<2, 2, _Ty, Q> const& m);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL typename mat<2, 2, _Ty, Q>::col_type operator/(mat<2, 2, _Ty, Q> const& m, typename mat<2, 2, _Ty, Q>::row_type const& v);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL typename mat<2, 2, _Ty, Q>::row_type operator/(typename mat<2, 2, _Ty, Q>::col_type const& v, mat<2, 2, _Ty, Q> const& m);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL mat<2, 2, _Ty, Q> operator/(mat<2, 2, _Ty, Q> const& m1, mat<2, 2, _Ty, Q> const& m2);

	// -- Boolean operators --

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL bool operator==(mat<2, 2, _Ty, Q> const& m1, mat<2, 2, _Ty, Q> const& m2);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL bool operator!=(mat<2, 2, _Ty, Q> const& m1, mat<2, 2, _Ty, Q> const& m2);
} //namespace glm

#ifndef GLM_EXTERNAL_TEMPLATE
#include "type_mat2x2.inl"
#endif
