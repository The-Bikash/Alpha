/// @ref core
/// @file glm/detail/type_vec4.hpp

#pragma once

#include "qualifier.hpp"
#if GLM_CONFIG_SWIZZLE == GLM_SWIZZLE_OPERATOR
#	include "_swizzle.hpp"
#elif GLM_CONFIG_SWIZZLE == GLM_SWIZZLE_FUNCTION
#	include "_swizzle_func.hpp"
#endif
#include <cstddef>

namespace glm
{
	template<typename _Ty, qualifier Q>
	struct vec<4, _Ty, Q>
	{
		// -- Implementation detail --

		typedef _Ty value_type;
		typedef vec<4, _Ty, Q> type;
		typedef vec<4, bool, Q> bool_type;

		// -- Data --

#		if GLM_SILENT_WARNINGS == GLM_ENABLE
#			if GLM_COMPILER & GLM_COMPILER_GCC
#				pragma GCC diagnostic push
#				pragma GCC diagnostic ignored "-Wpedantic"
#			elif GLM_COMPILER & GLM_COMPILER_CLANG
#				pragma clang diagnostic push
#				pragma clang diagnostic ignored "-Wgnu-anonymous-struct"
#				pragma clang diagnostic ignored "-Wnested-anon-types"
#			elif GLM_COMPILER & GLM_COMPILER_VC
#				pragma warning(push)
#				pragma warning(disable: 4201)  // nonstandard extension used : nameless struct/union
#			endif
#		endif

#		if GLM_CONFIG_XYZW_ONLY
			T x, y, z, w;
#			if GLM_CONFIG_SWIZZLE == GLM_SWIZZLE_FUNCTION
			GLM_SWIZZLE_GEN_VEC_FROM_VEC4_COMP(T, Q, x, y, z, w)
#			endif//GLM_CONFIG_SWIZZLE
#		elif GLM_CONFIG_ANONYMOUS_STRUCT == GLM_ENABLE
			union
			{
				struct { _Ty x, y, z, w; };
				struct { _Ty r, g, b, a; };
				struct { _Ty s, t, p, q; };

				typename detail::storage<4, _Ty, detail::is_aligned<Q>::value>::type data;

#				if GLM_CONFIG_SWIZZLE == GLM_SWIZZLE_OPERATOR
					GLM_SWIZZLE4_2_MEMBERS(T, Q, x, y, z, w)
					GLM_SWIZZLE4_2_MEMBERS(T, Q, r, g, b, a)
					GLM_SWIZZLE4_2_MEMBERS(T, Q, s, t, p, q)
					GLM_SWIZZLE4_3_MEMBERS(T, Q, x, y, z, w)
					GLM_SWIZZLE4_3_MEMBERS(T, Q, r, g, b, a)
					GLM_SWIZZLE4_3_MEMBERS(T, Q, s, t, p, q)
					GLM_SWIZZLE4_4_MEMBERS(T, Q, x, y, z, w)
					GLM_SWIZZLE4_4_MEMBERS(T, Q, r, g, b, a)
					GLM_SWIZZLE4_4_MEMBERS(T, Q, s, t, p, q)
#				endif
			};
#		else
			union { T x, r, s; };
			union { T y, g, t; };
			union { T z, b, p; };
			union { T w, a, q; };

#			if GLM_CONFIG_SWIZZLE == GLM_SWIZZLE_FUNCTION
				GLM_SWIZZLE_GEN_VEC_FROM_VEC4(T, Q)
#			endif
#		endif

#		if GLM_SILENT_WARNINGS == GLM_ENABLE
#			if GLM_COMPILER & GLM_COMPILER_CLANG
#				pragma clang diagnostic pop
#			elif GLM_COMPILER & GLM_COMPILER_GCC
#				pragma GCC diagnostic pop
#			elif GLM_COMPILER & GLM_COMPILER_VC
#				pragma warning(pop)
#			endif
#		endif

		// -- Component accesses --

		typedef length_t length_type;

		/// Return the count of components of the vector
		GLM_FUNC_DECL static GLM_CONSTEXPR length_type length(){return 4;}

		GLM_FUNC_DECL GLM_CONSTEXPR _Ty & operator[](length_type i);
		GLM_FUNC_DECL GLM_CONSTEXPR _Ty const& operator[](length_type i) const;

		// -- Implicit basic constructors --

		GLM_FUNC_DECL GLM_CONSTEXPR vec() GLM_DEFAULT_CTOR;
		GLM_FUNC_DECL GLM_CONSTEXPR vec(vec<4, _Ty, Q> const& v) GLM_DEFAULT;
		template<qualifier P>
		GLM_FUNC_DECL GLM_CONSTEXPR vec(vec<4, _Ty, P> const& v);

		// -- Explicit basic constructors --

		GLM_FUNC_DECL GLM_CONSTEXPR explicit vec(_Ty scalar);
		GLM_FUNC_DECL GLM_CONSTEXPR vec(_Ty x, _Ty y, _Ty z, _Ty w);

		// -- Conversion scalar constructors --

		template<typename U, qualifier P>
		GLM_FUNC_DECL GLM_CONSTEXPR explicit vec(vec<1, U, P> const& v);

		/// Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template<typename X, typename Y, typename Z, typename W>
		GLM_FUNC_DECL GLM_CONSTEXPR vec(X _x, Y _y, Z _z, W _w);
		template<typename X, typename Y, typename Z, typename W>
		GLM_FUNC_DECL GLM_CONSTEXPR vec(vec<1, X, Q> const& _x, Y _y, Z _z, W _w);
		template<typename X, typename Y, typename Z, typename W>
		GLM_FUNC_DECL GLM_CONSTEXPR vec(X _x, vec<1, Y, Q> const& _y, Z _z, W _w);
		template<typename X, typename Y, typename Z, typename W>
		GLM_FUNC_DECL GLM_CONSTEXPR vec(vec<1, X, Q> const& _x, vec<1, Y, Q> const& _y, Z _z, W _w);
		template<typename X, typename Y, typename Z, typename W>
		GLM_FUNC_DECL GLM_CONSTEXPR vec(X _x, Y _y, vec<1, Z, Q> const& _z, W _w);
		template<typename X, typename Y, typename Z, typename W>
		GLM_FUNC_DECL GLM_CONSTEXPR vec(vec<1, X, Q> const& _x, Y _y, vec<1, Z, Q> const& _z, W _w);
		template<typename X, typename Y, typename Z, typename W>
		GLM_FUNC_DECL GLM_CONSTEXPR vec(X _x, vec<1, Y, Q> const& _y, vec<1, Z, Q> const& _z, W _w);
		template<typename X, typename Y, typename Z, typename W>
		GLM_FUNC_DECL GLM_CONSTEXPR vec(vec<1, X, Q> const& _x, vec<1, Y, Q> const& _y, vec<1, Z, Q> const& _z, W _w);
		template<typename X, typename Y, typename Z, typename W>
		GLM_FUNC_DECL GLM_CONSTEXPR vec(vec<1, X, Q> const& _x, Y _y, Z _z, vec<1, W, Q> const& _w);
		template<typename X, typename Y, typename Z, typename W>
		GLM_FUNC_DECL GLM_CONSTEXPR vec(X _x, vec<1, Y, Q> const& _y, Z _z, vec<1, W, Q> const& _w);
		template<typename X, typename Y, typename Z, typename W>
		GLM_FUNC_DECL GLM_CONSTEXPR vec(vec<1, X, Q> const& _x, vec<1, Y, Q> const& _y, Z _z, vec<1, W, Q> const& _w);
		template<typename X, typename Y, typename Z, typename W>
		GLM_FUNC_DECL GLM_CONSTEXPR vec(X _x, Y _y, vec<1, Z, Q> const& _z, vec<1, W, Q> const& _w);
		template<typename X, typename Y, typename Z, typename W>
		GLM_FUNC_DECL GLM_CONSTEXPR vec(vec<1, X, Q> const& _x, Y _y, vec<1, Z, Q> const& _z, vec<1, W, Q> const& _w);
		template<typename X, typename Y, typename Z, typename W>
		GLM_FUNC_DECL GLM_CONSTEXPR vec(X _x, vec<1, Y, Q> const& _y, vec<1, Z, Q> const& _z, vec<1, W, Q> const& _w);
		template<typename X, typename Y, typename Z, typename W>
		GLM_FUNC_DECL GLM_CONSTEXPR vec(vec<1, X, Q> const& _x, vec<1, Y, Q> const& _y, vec<1, Z, Q> const& _z, vec<1, W, Q> const& _w);

		// -- Conversion vector constructors --

		/// Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template<typename A, typename B, typename C, qualifier P>
		GLM_FUNC_DECL GLM_CONSTEXPR vec(vec<2, A, P> const& _xy, B _z, C _w);
		/// Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template<typename A, typename B, typename C, qualifier P>
		GLM_FUNC_DECL GLM_CONSTEXPR vec(vec<2, A, P> const& _xy, vec<1, B, P> const& _z, C _w);
		/// Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template<typename A, typename B, typename C, qualifier P>
		GLM_FUNC_DECL GLM_CONSTEXPR vec(vec<2, A, P> const& _xy, B _z, vec<1, C, P> const& _w);
		/// Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template<typename A, typename B, typename C, qualifier P>
		GLM_FUNC_DECL GLM_CONSTEXPR vec(vec<2, A, P> const& _xy, vec<1, B, P> const& _z, vec<1, C, P> const& _w);
		/// Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template<typename A, typename B, typename C, qualifier P>
		GLM_FUNC_DECL GLM_CONSTEXPR vec(A _x, vec<2, B, P> const& _yz, C _w);
		/// Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template<typename A, typename B, typename C, qualifier P>
		GLM_FUNC_DECL GLM_CONSTEXPR vec(vec<1, A, P> const& _x, vec<2, B, P> const& _yz, C _w);
		/// Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template<typename A, typename B, typename C, qualifier P>
		GLM_FUNC_DECL GLM_CONSTEXPR vec(A _x, vec<2, B, P> const& _yz, vec<1, C, P> const& _w);
		/// Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template<typename A, typename B, typename C, qualifier P>
		GLM_FUNC_DECL GLM_CONSTEXPR vec(vec<1, A, P> const& _x, vec<2, B, P> const& _yz, vec<1, C, P> const& _w);
		/// Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template<typename A, typename B, typename C, qualifier P>
		GLM_FUNC_DECL GLM_CONSTEXPR vec(A _x, B _y, vec<2, C, P> const& _zw);
		/// Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template<typename A, typename B, typename C, qualifier P>
		GLM_FUNC_DECL GLM_CONSTEXPR vec(vec<1, A, P> const& _x, B _y, vec<2, C, P> const& _zw);
		/// Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template<typename A, typename B, typename C, qualifier P>
		GLM_FUNC_DECL GLM_CONSTEXPR vec(A _x, vec<1, B, P> const& _y, vec<2, C, P> const& _zw);
		/// Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template<typename A, typename B, typename C, qualifier P>
		GLM_FUNC_DECL GLM_CONSTEXPR vec(vec<1, A, P> const& _x, vec<1, B, P> const& _y, vec<2, C, P> const& _zw);
		/// Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template<typename A, typename B, qualifier P>
		GLM_FUNC_DECL GLM_CONSTEXPR vec(vec<3, A, P> const& _xyz, B _w);
		/// Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template<typename A, typename B, qualifier P>
		GLM_FUNC_DECL GLM_CONSTEXPR vec(vec<3, A, P> const& _xyz, vec<1, B, P> const& _w);
		/// Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template<typename A, typename B, qualifier P>
		GLM_FUNC_DECL GLM_CONSTEXPR vec(A _x, vec<3, B, P> const& _yzw);
		/// Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template<typename A, typename B, qualifier P>
		GLM_FUNC_DECL GLM_CONSTEXPR vec(vec<1, A, P> const& _x, vec<3, B, P> const& _yzw);
		/// Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template<typename A, typename B, qualifier P>
		GLM_FUNC_DECL GLM_CONSTEXPR vec(vec<2, A, P> const& _xy, vec<2, B, P> const& _zw);

		/// Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template<typename U, qualifier P>
		GLM_FUNC_DECL GLM_CONSTEXPR GLM_EXPLICIT vec(vec<4, U, P> const& v);

		// -- Swizzle constructors --
#		if GLM_CONFIG_SWIZZLE == GLM_SWIZZLE_OPERATOR
			template<int E0, int E1, int E2, int E3>
			GLM_FUNC_DECL GLM_CONSTEXPR vec(detail::_swizzle<4, T, Q, E0, E1, E2, E3> const& that)
			{
				*this = that();
			}

			template<int E0, int E1, int F0, int F1>
			GLM_FUNC_DECL GLM_CONSTEXPR vec(detail::_swizzle<2, T, Q, E0, E1, -1, -2> const& v, detail::_swizzle<2, T, Q, F0, F1, -1, -2> const& u)
			{
				*this = vec<4, T, Q>(v(), u());
			}

			template<int E0, int E1>
			GLM_FUNC_DECL GLM_CONSTEXPR vec(T const& x, T const& y, detail::_swizzle<2, T, Q, E0, E1, -1, -2> const& v)
			{
				*this = vec<4, T, Q>(x, y, v());
			}

			template<int E0, int E1>
			GLM_FUNC_DECL GLM_CONSTEXPR vec(T const& x, detail::_swizzle<2, T, Q, E0, E1, -1, -2> const& v, T const& w)
			{
				*this = vec<4, T, Q>(x, v(), w);
			}

			template<int E0, int E1>
			GLM_FUNC_DECL GLM_CONSTEXPR vec(detail::_swizzle<2, T, Q, E0, E1, -1, -2> const& v, T const& z, T const& w)
			{
				*this = vec<4, T, Q>(v(), z, w);
			}

			template<int E0, int E1, int E2>
			GLM_FUNC_DECL GLM_CONSTEXPR vec(detail::_swizzle<3, T, Q, E0, E1, E2, -1> const& v, T const& w)
			{
				*this = vec<4, T, Q>(v(), w);
			}

			template<int E0, int E1, int E2>
			GLM_FUNC_DECL GLM_CONSTEXPR vec(T const& x, detail::_swizzle<3, T, Q, E0, E1, E2, -1> const& v)
			{
				*this = vec<4, T, Q>(x, v());
			}
#		endif//GLM_CONFIG_SWIZZLE == GLM_SWIZZLE_OPERATOR

		// -- Unary arithmetic operators --

		GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q>& operator=(vec<4, _Ty, Q> const& v) GLM_DEFAULT;

		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q>& operator=(vec<4, U, Q> const& v);
		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q>& operator+=(U scalar);
		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q>& operator+=(vec<1, U, Q> const& v);
		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q>& operator+=(vec<4, U, Q> const& v);
		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q>& operator-=(U scalar);
		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q>& operator-=(vec<1, U, Q> const& v);
		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q>& operator-=(vec<4, U, Q> const& v);
		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q>& operator*=(U scalar);
		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q>& operator*=(vec<1, U, Q> const& v);
		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q>& operator*=(vec<4, U, Q> const& v);
		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q>& operator/=(U scalar);
		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q>& operator/=(vec<1, U, Q> const& v);
		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q>& operator/=(vec<4, U, Q> const& v);

		// -- Increment and decrement operators --

		GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> & operator++();
		GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> & operator--();
		GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> operator++(int);
		GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> operator--(int);

		// -- Unary bit operators --

		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> & operator%=(U scalar);
		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> & operator%=(vec<1, U, Q> const& v);
		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> & operator%=(vec<4, U, Q> const& v);
		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> & operator&=(U scalar);
		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> & operator&=(vec<1, U, Q> const& v);
		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> & operator&=(vec<4, U, Q> const& v);
		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> & operator|=(U scalar);
		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> & operator|=(vec<1, U, Q> const& v);
		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> & operator|=(vec<4, U, Q> const& v);
		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> & operator^=(U scalar);
		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> & operator^=(vec<1, U, Q> const& v);
		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> & operator^=(vec<4, U, Q> const& v);
		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> & operator<<=(U scalar);
		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> & operator<<=(vec<1, U, Q> const& v);
		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> & operator<<=(vec<4, U, Q> const& v);
		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> & operator>>=(U scalar);
		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> & operator>>=(vec<1, U, Q> const& v);
		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> & operator>>=(vec<4, U, Q> const& v);
	};

	// -- Unary operators --

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> operator+(vec<4, _Ty, Q> const& v);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> operator-(vec<4, _Ty, Q> const& v);

	// -- Binary operators --

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> operator+(vec<4, _Ty, Q> const& v, _Ty const & scalar);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> operator+(vec<4, _Ty, Q> const& v1, vec<1, _Ty, Q> const& v2);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> operator+(_Ty scalar, vec<4, _Ty, Q> const& v);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> operator+(vec<1, _Ty, Q> const& v1, vec<4, _Ty, Q> const& v2);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> operator+(vec<4, _Ty, Q> const& v1, vec<4, _Ty, Q> const& v2);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> operator-(vec<4, _Ty, Q> const& v, _Ty const & scalar);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> operator-(vec<4, _Ty, Q> const& v1, vec<1, _Ty, Q> const& v2);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> operator-(_Ty scalar, vec<4, _Ty, Q> const& v);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> operator-(vec<1, _Ty, Q> const& v1, vec<4, _Ty, Q> const& v2);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> operator-(vec<4, _Ty, Q> const& v1, vec<4, _Ty, Q> const& v2);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> operator*(vec<4, _Ty, Q> const& v, _Ty const & scalar);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> operator*(vec<4, _Ty, Q> const& v1, vec<1, _Ty, Q> const& v2);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> operator*(_Ty scalar, vec<4, _Ty, Q> const& v);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> operator*(vec<1, _Ty, Q> const& v1, vec<4, _Ty, Q> const& v2);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> operator*(vec<4, _Ty, Q> const& v1, vec<4, _Ty, Q> const& v2);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> operator/(vec<4, _Ty, Q> const& v, _Ty const & scalar);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> operator/(vec<4, _Ty, Q> const& v1, vec<1, _Ty, Q> const& v2);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> operator/(_Ty scalar, vec<4, _Ty, Q> const& v);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> operator/(vec<1, _Ty, Q> const& v1, vec<4, _Ty, Q> const& v2);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> operator/(vec<4, _Ty, Q> const& v1, vec<4, _Ty, Q> const& v2);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> operator%(vec<4, _Ty, Q> const& v, _Ty scalar);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> operator%(vec<4, _Ty, Q> const& v, vec<1, _Ty, Q> const& scalar);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> operator%(_Ty scalar, vec<4, _Ty, Q> const& v);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> operator%(vec<1, _Ty, Q> const& scalar, vec<4, _Ty, Q> const& v);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> operator%(vec<4, _Ty, Q> const& v1, vec<4, _Ty, Q> const& v2);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> operator&(vec<4, _Ty, Q> const& v, _Ty scalar);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> operator&(vec<4, _Ty, Q> const& v, vec<1, _Ty, Q> const& scalar);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> operator&(_Ty scalar, vec<4, _Ty, Q> const& v);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> operator&(vec<1, _Ty, Q> const& scalar, vec<4, _Ty, Q> const& v);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> operator&(vec<4, _Ty, Q> const& v1, vec<4, _Ty, Q> const& v2);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> operator|(vec<4, _Ty, Q> const& v, _Ty scalar);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> operator|(vec<4, _Ty, Q> const& v, vec<1, _Ty, Q> const& scalar);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> operator|(_Ty scalar, vec<4, _Ty, Q> const& v);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> operator|(vec<1, _Ty, Q> const& scalar, vec<4, _Ty, Q> const& v);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> operator|(vec<4, _Ty, Q> const& v1, vec<4, _Ty, Q> const& v2);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> operator^(vec<4, _Ty, Q> const& v, _Ty scalar);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> operator^(vec<4, _Ty, Q> const& v, vec<1, _Ty, Q> const& scalar);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> operator^(_Ty scalar, vec<4, _Ty, Q> const& v);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> operator^(vec<1, _Ty, Q> const& scalar, vec<4, _Ty, Q> const& v);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> operator^(vec<4, _Ty, Q> const& v1, vec<4, _Ty, Q> const& v2);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> operator<<(vec<4, _Ty, Q> const& v, _Ty scalar);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> operator<<(vec<4, _Ty, Q> const& v, vec<1, _Ty, Q> const& scalar);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> operator<<(_Ty scalar, vec<4, _Ty, Q> const& v);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> operator<<(vec<1, _Ty, Q> const& scalar, vec<4, _Ty, Q> const& v);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> operator<<(vec<4, _Ty, Q> const& v1, vec<4, _Ty, Q> const& v2);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> operator>>(vec<4, _Ty, Q> const& v, _Ty scalar);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> operator>>(vec<4, _Ty, Q> const& v, vec<1, _Ty, Q> const& scalar);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> operator>>(_Ty scalar, vec<4, _Ty, Q> const& v);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> operator>>(vec<1, _Ty, Q> const& scalar, vec<4, _Ty, Q> const& v);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> operator>>(vec<4, _Ty, Q> const& v1, vec<4, _Ty, Q> const& v2);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> operator~(vec<4, _Ty, Q> const& v);

	// -- Boolean operators --

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR bool operator==(vec<4, _Ty, Q> const& v1, vec<4, _Ty, Q> const& v2);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR bool operator!=(vec<4, _Ty, Q> const& v1, vec<4, _Ty, Q> const& v2);

	template<qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<4, bool, Q> operator&&(vec<4, bool, Q> const& v1, vec<4, bool, Q> const& v2);

	template<qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<4, bool, Q> operator||(vec<4, bool, Q> const& v1, vec<4, bool, Q> const& v2);
}//namespace glm

#ifndef GLM_EXTERNAL_TEMPLATE
#include "type_vec4.inl"
#endif//GLM_EXTERNAL_TEMPLATE
