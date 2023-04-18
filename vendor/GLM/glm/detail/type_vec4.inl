/// @ref core

#include "compute_vector_relational.hpp"

namespace glm{
namespace detail
{
	template<typename _Ty, qualifier Q, bool Aligned>
	struct compute_vec4_add
	{
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR static vec<4, _Ty, Q> call(vec<4, _Ty, Q> const& a, vec<4, _Ty, Q> const& b)
		{
			return vec<4, _Ty, Q>(a.x + b.x, a.y + b.y, a.z + b.z, a.w + b.w);
		}
	};

	template<typename _Ty, qualifier Q, bool Aligned>
	struct compute_vec4_sub
	{
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR static vec<4, _Ty, Q> call(vec<4, _Ty, Q> const& a, vec<4, _Ty, Q> const& b)
		{
			return vec<4, _Ty, Q>(a.x - b.x, a.y - b.y, a.z - b.z, a.w - b.w);
		}
	};

	template<typename _Ty, qualifier Q, bool Aligned>
	struct compute_vec4_mul
	{
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR static vec<4, _Ty, Q> call(vec<4, _Ty, Q> const& a, vec<4, _Ty, Q> const& b)
		{
			return vec<4, _Ty, Q>(a.x * b.x, a.y * b.y, a.z * b.z, a.w * b.w);
		}
	};

	template<typename _Ty, qualifier Q, bool Aligned>
	struct compute_vec4_div
	{
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR static vec<4, _Ty, Q> call(vec<4, _Ty, Q> const& a, vec<4, _Ty, Q> const& b)
		{
			return vec<4, _Ty, Q>(a.x / b.x, a.y / b.y, a.z / b.z, a.w / b.w);
		}
	};

	template<typename _Ty, qualifier Q, bool Aligned>
	struct compute_vec4_mod
	{
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR static vec<4, _Ty, Q> call(vec<4, _Ty, Q> const& a, vec<4, _Ty, Q> const& b)
		{
			return vec<4, _Ty, Q>(a.x % b.x, a.y % b.y, a.z % b.z, a.w % b.w);
		}
	};

	template<typename _Ty, qualifier Q, int IsInt, std::size_t Size, bool Aligned>
	struct compute_vec4_and
	{
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR static vec<4, _Ty, Q> call(vec<4, _Ty, Q> const& a, vec<4, _Ty, Q> const& b)
		{
			return vec<4, _Ty, Q>(a.x & b.x, a.y & b.y, a.z & b.z, a.w & b.w);
		}
	};

	template<typename _Ty, qualifier Q, int IsInt, std::size_t Size, bool Aligned>
	struct compute_vec4_or
	{
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR static vec<4, _Ty, Q> call(vec<4, _Ty, Q> const& a, vec<4, _Ty, Q> const& b)
		{
			return vec<4, _Ty, Q>(a.x | b.x, a.y | b.y, a.z | b.z, a.w | b.w);
		}
	};

	template<typename _Ty, qualifier Q, int IsInt, std::size_t Size, bool Aligned>
	struct compute_vec4_xor
	{
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR static vec<4, _Ty, Q> call(vec<4, _Ty, Q> const& a, vec<4, _Ty, Q> const& b)
		{
			return vec<4, _Ty, Q>(a.x ^ b.x, a.y ^ b.y, a.z ^ b.z, a.w ^ b.w);
		}
	};

	template<typename _Ty, qualifier Q, int IsInt, std::size_t Size, bool Aligned>
	struct compute_vec4_shift_left
	{
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR static vec<4, _Ty, Q> call(vec<4, _Ty, Q> const& a, vec<4, _Ty, Q> const& b)
		{
			return vec<4, _Ty, Q>(a.x << b.x, a.y << b.y, a.z << b.z, a.w << b.w);
		}
	};

	template<typename _Ty, qualifier Q, int IsInt, std::size_t Size, bool Aligned>
	struct compute_vec4_shift_right
	{
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR static vec<4, _Ty, Q> call(vec<4, _Ty, Q> const& a, vec<4, _Ty, Q> const& b)
		{
			return vec<4, _Ty, Q>(a.x >> b.x, a.y >> b.y, a.z >> b.z, a.w >> b.w);
		}
	};

	template<typename _Ty, qualifier Q, int IsInt, std::size_t Size, bool Aligned>
	struct compute_vec4_equal
	{
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR static bool call(vec<4, _Ty, Q> const& v1, vec<4, _Ty, Q> const& v2)
		{
			return
				detail::compute_equal<_Ty, std::numeric_limits<_Ty>::is_iec559>::call(v1.x, v2.x) &&
				detail::compute_equal<_Ty, std::numeric_limits<_Ty>::is_iec559>::call(v1.y, v2.y) &&
				detail::compute_equal<_Ty, std::numeric_limits<_Ty>::is_iec559>::call(v1.z, v2.z) &&
				detail::compute_equal<_Ty, std::numeric_limits<_Ty>::is_iec559>::call(v1.w, v2.w);
		}
	};

	template<typename _Ty, qualifier Q, int IsInt, std::size_t Size, bool Aligned>
	struct compute_vec4_nequal
	{
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR static bool call(vec<4, _Ty, Q> const& v1, vec<4, _Ty, Q> const& v2)
		{
			return !compute_vec4_equal<_Ty, Q, detail::is_int<_Ty>::value, sizeof(_Ty) * 8, detail::is_aligned<Q>::value>::call(v1, v2);
		}
	};

	template<typename _Ty, qualifier Q, int IsInt, std::size_t Size, bool Aligned>
	struct compute_vec4_bitwise_not
	{
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR static vec<4, _Ty, Q> call(vec<4, _Ty, Q> const& v)
		{
			return vec<4, _Ty, Q>(~v.x, ~v.y, ~v.z, ~v.w);
		}
	};
}//namespace detail

	// -- Implicit basic constructors --

#	if GLM_CONFIG_DEFAULTED_DEFAULT_CTOR == GLM_DISABLE
		template<typename T, qualifier Q>
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q>::vec()
#			if GLM_CONFIG_CTOR_INIT != GLM_CTOR_INIT_DISABLE
				: x(0), y(0), z(0), w(0)
#			endif
		{}
#	endif

#	if GLM_CONFIG_DEFAULTED_FUNCTIONS == GLM_DISABLE
		template<typename T, qualifier Q>
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q>::vec(vec<4, T, Q> const& v)
			: x(v.x), y(v.y), z(v.z), w(v.w)
		{}
#	endif

	template<typename _Ty, qualifier Q>
	template<qualifier P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q>::vec(vec<4, _Ty, P> const& v)
		: x(v.x), y(v.y), z(v.z), w(v.w)
	{}

	// -- Explicit basic constructors --

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q>::vec(_Ty scalar)
		: x(scalar), y(scalar), z(scalar), w(scalar)
	{}

	template <typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q>::vec(_Ty _x, _Ty _y, _Ty _z, _Ty _w)
		: x(_x), y(_y), z(_z), w(_w)
	{}

	// -- Conversion scalar constructors --

	template<typename _Ty, qualifier Q>
	template<typename U, qualifier P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q>::vec(vec<1, U, P> const& v)
		: x(static_cast<_Ty>(v.x))
		, y(static_cast<_Ty>(v.x))
		, z(static_cast<_Ty>(v.x))
		, w(static_cast<_Ty>(v.x))
	{}

	template<typename _Ty, qualifier Q>
	template<typename X, typename Y, typename Z, typename W>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q>::vec(X _x, Y _y, Z _z, W _w)
		: x(static_cast<_Ty>(_x))
		, y(static_cast<_Ty>(_y))
		, z(static_cast<_Ty>(_z))
		, w(static_cast<_Ty>(_w))
	{}

	template<typename _Ty, qualifier Q>
	template<typename X, typename Y, typename Z, typename W>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q>::vec(vec<1, X, Q> const& _x, Y _y, Z _z, W _w)
		: x(static_cast<_Ty>(_x.x))
		, y(static_cast<_Ty>(_y))
		, z(static_cast<_Ty>(_z))
		, w(static_cast<_Ty>(_w))
	{}

	template<typename _Ty, qualifier Q>
	template<typename X, typename Y, typename Z, typename W>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q>::vec(X _x, vec<1, Y, Q> const& _y, Z _z, W _w)
		: x(static_cast<_Ty>(_x))
		, y(static_cast<_Ty>(_y.x))
		, z(static_cast<_Ty>(_z))
		, w(static_cast<_Ty>(_w))
	{}

	template<typename _Ty, qualifier Q>
	template<typename X, typename Y, typename Z, typename W>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q>::vec(vec<1, X, Q> const& _x, vec<1, Y, Q> const& _y, Z _z, W _w)
		: x(static_cast<_Ty>(_x.x))
		, y(static_cast<_Ty>(_y.x))
		, z(static_cast<_Ty>(_z))
		, w(static_cast<_Ty>(_w))
	{}

	template<typename _Ty, qualifier Q>
	template<typename X, typename Y, typename Z, typename W>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q>::vec(X _x, Y _y, vec<1, Z, Q> const& _z, W _w)
		: x(static_cast<_Ty>(_x))
		, y(static_cast<_Ty>(_y))
		, z(static_cast<_Ty>(_z.x))
		, w(static_cast<_Ty>(_w))
	{}

	template<typename _Ty, qualifier Q>
	template<typename X, typename Y, typename Z, typename W>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q>::vec(vec<1, X, Q> const& _x, Y _y, vec<1, Z, Q> const& _z, W _w)
		: x(static_cast<_Ty>(_x.x))
		, y(static_cast<_Ty>(_y))
		, z(static_cast<_Ty>(_z.x))
		, w(static_cast<_Ty>(_w))
	{}

	template<typename _Ty, qualifier Q>
	template<typename X, typename Y, typename Z, typename W>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q>::vec(X _x, vec<1, Y, Q> const& _y, vec<1, Z, Q> const& _z, W _w)
		: x(static_cast<_Ty>(_x))
		, y(static_cast<_Ty>(_y.x))
		, z(static_cast<_Ty>(_z.x))
		, w(static_cast<_Ty>(_w))
	{}

	template<typename _Ty, qualifier Q>
	template<typename X, typename Y, typename Z, typename W>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q>::vec(vec<1, X, Q> const& _x, vec<1, Y, Q> const& _y, vec<1, Z, Q> const& _z, W _w)
		: x(static_cast<_Ty>(_x.x))
		, y(static_cast<_Ty>(_y.x))
		, z(static_cast<_Ty>(_z.x))
		, w(static_cast<_Ty>(_w))
	{}

	template<typename _Ty, qualifier Q>
	template<typename X, typename Y, typename Z, typename W>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q>::vec(vec<1, X, Q> const& _x, Y _y, Z _z, vec<1, W, Q> const& _w)
		: x(static_cast<_Ty>(_x.x))
		, y(static_cast<_Ty>(_y))
		, z(static_cast<_Ty>(_z))
		, w(static_cast<_Ty>(_w.x))
	{}

	template<typename _Ty, qualifier Q>
	template<typename X, typename Y, typename Z, typename W>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q>::vec(X _x, vec<1, Y, Q> const& _y, Z _z, vec<1, W, Q> const& _w)
		: x(static_cast<_Ty>(_x))
		, y(static_cast<_Ty>(_y.x))
		, z(static_cast<_Ty>(_z))
		, w(static_cast<_Ty>(_w.x))
	{}

	template<typename _Ty, qualifier Q>
	template<typename X, typename Y, typename Z, typename W>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q>::vec(vec<1, X, Q> const& _x, vec<1, Y, Q> const& _y, Z _z, vec<1, W, Q> const& _w)
		: x(static_cast<_Ty>(_x.x))
		, y(static_cast<_Ty>(_y.x))
		, z(static_cast<_Ty>(_z))
		, w(static_cast<_Ty>(_w.x))
	{}

	template<typename _Ty, qualifier Q>
	template<typename X, typename Y, typename Z, typename W>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q>::vec(X _x, Y _y, vec<1, Z, Q> const& _z, vec<1, W, Q> const& _w)
		: x(static_cast<_Ty>(_x))
		, y(static_cast<_Ty>(_y))
		, z(static_cast<_Ty>(_z.x))
		, w(static_cast<_Ty>(_w.x))
	{}

	template<typename _Ty, qualifier Q>
	template<typename X, typename Y, typename Z, typename W>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q>::vec(vec<1, X, Q> const& _x, Y _y, vec<1, Z, Q> const& _z, vec<1, W, Q> const& _w)
		: x(static_cast<_Ty>(_x.x))
		, y(static_cast<_Ty>(_y))
		, z(static_cast<_Ty>(_z.x))
		, w(static_cast<_Ty>(_w.x))
	{}

	template<typename _Ty, qualifier Q>
	template<typename X, typename Y, typename Z, typename W>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q>::vec(X _x, vec<1, Y, Q> const& _y, vec<1, Z, Q> const& _z, vec<1, W, Q> const& _w)
		: x(static_cast<_Ty>(_x))
		, y(static_cast<_Ty>(_y.x))
		, z(static_cast<_Ty>(_z.x))
		, w(static_cast<_Ty>(_w.x))
	{}

	template<typename _Ty, qualifier Q>
	template<typename X, typename Y, typename Z, typename W>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q>::vec(vec<1, X, Q> const& _x, vec<1, Y, Q> const& _y, vec<1, Z, Q> const& _z, vec<1, W, Q> const& _w)
		: x(static_cast<_Ty>(_x.x))
		, y(static_cast<_Ty>(_y.x))
		, z(static_cast<_Ty>(_z.x))
		, w(static_cast<_Ty>(_w.x))
	{}

	// -- Conversion vector constructors --

	template<typename _Ty, qualifier Q>
	template<typename A, typename B, typename C, qualifier P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q>::vec(vec<2, A, P> const& _xy, B _z, C _w)
		: x(static_cast<_Ty>(_xy.x))
		, y(static_cast<_Ty>(_xy.y))
		, z(static_cast<_Ty>(_z))
		, w(static_cast<_Ty>(_w))
	{}

	template<typename _Ty, qualifier Q>
	template<typename A, typename B, typename C, qualifier P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q>::vec(vec<2, A, P> const& _xy, vec<1, B, P> const& _z, C _w)
		: x(static_cast<_Ty>(_xy.x))
		, y(static_cast<_Ty>(_xy.y))
		, z(static_cast<_Ty>(_z.x))
		, w(static_cast<_Ty>(_w))
	{}

	template<typename _Ty, qualifier Q>
	template<typename A, typename B, typename C, qualifier P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q>::vec(vec<2, A, P> const& _xy, B _z, vec<1, C, P> const& _w)
		: x(static_cast<_Ty>(_xy.x))
		, y(static_cast<_Ty>(_xy.y))
		, z(static_cast<_Ty>(_z))
		, w(static_cast<_Ty>(_w.x))
	{}

	template<typename _Ty, qualifier Q>
	template<typename A, typename B, typename C, qualifier P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q>::vec(vec<2, A, P> const& _xy, vec<1, B, P> const& _z, vec<1, C, P> const& _w)
		: x(static_cast<_Ty>(_xy.x))
		, y(static_cast<_Ty>(_xy.y))
		, z(static_cast<_Ty>(_z.x))
		, w(static_cast<_Ty>(_w.x))
	{}

	template<typename _Ty, qualifier Q>
	template<typename A, typename B, typename C, qualifier P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q>::vec(A _x, vec<2, B, P> const& _yz, C _w)
		: x(static_cast<_Ty>(_x))
		, y(static_cast<_Ty>(_yz.x))
		, z(static_cast<_Ty>(_yz.y))
		, w(static_cast<_Ty>(_w))
	{}

	template<typename _Ty, qualifier Q>
	template<typename A, typename B, typename C, qualifier P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q>::vec(vec<1, A, P> const& _x, vec<2, B, P> const& _yz, C _w)
		: x(static_cast<_Ty>(_x.x))
		, y(static_cast<_Ty>(_yz.x))
		, z(static_cast<_Ty>(_yz.y))
		, w(static_cast<_Ty>(_w))
	{}

	template<typename _Ty, qualifier Q>
	template<typename A, typename B, typename C, qualifier P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q>::vec(A _x, vec<2, B, P> const& _yz, vec<1, C, P> const& _w)
		: x(static_cast<_Ty>(_x))
		, y(static_cast<_Ty>(_yz.x))
		, z(static_cast<_Ty>(_yz.y))
		, w(static_cast<_Ty>(_w.x))
	{}

	template<typename _Ty, qualifier Q>
	template<typename A, typename B, typename C, qualifier P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q>::vec(vec<1, A, P> const& _x, vec<2, B, P> const& _yz, vec<1, C, P> const& _w)
		: x(static_cast<_Ty>(_x.x))
		, y(static_cast<_Ty>(_yz.x))
		, z(static_cast<_Ty>(_yz.y))
		, w(static_cast<_Ty>(_w.x))
	{}

	template<typename _Ty, qualifier Q>
	template<typename A, typename B, typename C, qualifier P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q>::vec(A _x, B _y, vec<2, C, P> const& _zw)
		: x(static_cast<_Ty>(_x))
		, y(static_cast<_Ty>(_y))
		, z(static_cast<_Ty>(_zw.x))
		, w(static_cast<_Ty>(_zw.y))
	{}

	template<typename _Ty, qualifier Q>
	template<typename A, typename B, typename C, qualifier P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q>::vec(vec<1, A, P> const& _x, B _y, vec<2, C, P> const& _zw)
		: x(static_cast<_Ty>(_x.x))
		, y(static_cast<_Ty>(_y))
		, z(static_cast<_Ty>(_zw.x))
		, w(static_cast<_Ty>(_zw.y))
	{}

	template<typename _Ty, qualifier Q>
	template<typename A, typename B, typename C, qualifier P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q>::vec(A _x, vec<1, B, P> const& _y, vec<2, C, P> const& _zw)
		: x(static_cast<_Ty>(_x))
		, y(static_cast<_Ty>(_y.x))
		, z(static_cast<_Ty>(_zw.x))
		, w(static_cast<_Ty>(_zw.y))
	{}

	template<typename _Ty, qualifier Q>
	template<typename A, typename B, typename C, qualifier P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q>::vec(vec<1, A, P> const& _x, vec<1, B, P> const& _y, vec<2, C, P> const& _zw)
		: x(static_cast<_Ty>(_x.x))
		, y(static_cast<_Ty>(_y.x))
		, z(static_cast<_Ty>(_zw.x))
		, w(static_cast<_Ty>(_zw.y))
	{}

	template<typename _Ty, qualifier Q>
	template<typename A, typename B, qualifier P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q>::vec(vec<3, A, P> const& _xyz, B _w)
		: x(static_cast<_Ty>(_xyz.x))
		, y(static_cast<_Ty>(_xyz.y))
		, z(static_cast<_Ty>(_xyz.z))
		, w(static_cast<_Ty>(_w))
	{}

	template<typename _Ty, qualifier Q>
	template<typename A, typename B, qualifier P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q>::vec(vec<3, A, P> const& _xyz, vec<1, B, P> const& _w)
		: x(static_cast<_Ty>(_xyz.x))
		, y(static_cast<_Ty>(_xyz.y))
		, z(static_cast<_Ty>(_xyz.z))
		, w(static_cast<_Ty>(_w.x))
	{}

	template<typename _Ty, qualifier Q>
	template<typename A, typename B, qualifier P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q>::vec(A _x, vec<3, B, P> const& _yzw)
		: x(static_cast<_Ty>(_x))
		, y(static_cast<_Ty>(_yzw.x))
		, z(static_cast<_Ty>(_yzw.y))
		, w(static_cast<_Ty>(_yzw.z))
	{}

	template<typename _Ty, qualifier Q>
	template<typename A, typename B, qualifier P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q>::vec(vec<1, A, P> const& _x, vec<3, B, P> const& _yzw)
		: x(static_cast<_Ty>(_x.x))
		, y(static_cast<_Ty>(_yzw.x))
		, z(static_cast<_Ty>(_yzw.y))
		, w(static_cast<_Ty>(_yzw.z))
	{}

	template<typename _Ty, qualifier Q>
	template<typename A, typename B, qualifier P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q>::vec(vec<2, A, P> const& _xy, vec<2, B, P> const& _zw)
		: x(static_cast<_Ty>(_xy.x))
		, y(static_cast<_Ty>(_xy.y))
		, z(static_cast<_Ty>(_zw.x))
		, w(static_cast<_Ty>(_zw.y))
	{}

	template<typename _Ty, qualifier Q>
	template<typename U, qualifier P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q>::vec(vec<4, U, P> const& v)
		: x(static_cast<_Ty>(v.x))
		, y(static_cast<_Ty>(v.y))
		, z(static_cast<_Ty>(v.z))
		, w(static_cast<_Ty>(v.w))
	{}

	// -- Component accesses --

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR _Ty& vec<4, _Ty, Q>::operator[](typename vec<4, _Ty, Q>::length_type i)
	{
		assert(i >= 0 && i < this->length());
		switch(i)
		{
		default:
		case 0:
			return x;
		case 1:
			return y;
		case 2:
			return z;
		case 3:
			return w;
		}
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR _Ty const& vec<4, _Ty, Q>::operator[](typename vec<4, _Ty, Q>::length_type i) const
	{
		assert(i >= 0 && i < this->length());
		switch(i)
		{
		default:
		case 0:
			return x;
		case 1:
			return y;
		case 2:
			return z;
		case 3:
			return w;
		}
	}

	// -- Unary arithmetic operators --

#	if GLM_CONFIG_DEFAULTED_FUNCTIONS == GLM_DISABLE
		template<typename T, qualifier Q>
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, T, Q>& vec<4, T, Q>::operator=(vec<4, T, Q> const& v)
		{
			this->x = v.x;
			this->y = v.y;
			this->z = v.z;
			this->w = v.w;
			return *this;
		}
#	endif

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q>& vec<4, _Ty, Q>::operator=(vec<4, U, Q> const& v)
	{
		this->x = static_cast<_Ty>(v.x);
		this->y = static_cast<_Ty>(v.y);
		this->z = static_cast<_Ty>(v.z);
		this->w = static_cast<_Ty>(v.w);
		return *this;
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> & vec<4, _Ty, Q>::operator+=(U scalar)
	{
		return (*this = detail::compute_vec4_add<_Ty, Q, detail::is_aligned<Q>::value>::call(*this, vec<4, _Ty, Q>(scalar)));
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> & vec<4, _Ty, Q>::operator+=(vec<1, U, Q> const& v)
	{
		return (*this = detail::compute_vec4_add<_Ty, Q, detail::is_aligned<Q>::value>::call(*this, vec<4, _Ty, Q>(v.x)));
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> & vec<4, _Ty, Q>::operator+=(vec<4, U, Q> const& v)
	{
		return (*this = detail::compute_vec4_add<_Ty, Q, detail::is_aligned<Q>::value>::call(*this, vec<4, _Ty, Q>(v)));
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> & vec<4, _Ty, Q>::operator-=(U scalar)
	{
		return (*this = detail::compute_vec4_sub<_Ty, Q, detail::is_aligned<Q>::value>::call(*this, vec<4, _Ty, Q>(scalar)));
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> & vec<4, _Ty, Q>::operator-=(vec<1, U, Q> const& v)
	{
		return (*this = detail::compute_vec4_sub<_Ty, Q, detail::is_aligned<Q>::value>::call(*this, vec<4, _Ty, Q>(v.x)));
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> & vec<4, _Ty, Q>::operator-=(vec<4, U, Q> const& v)
	{
		return (*this = detail::compute_vec4_sub<_Ty, Q, detail::is_aligned<Q>::value>::call(*this, vec<4, _Ty, Q>(v)));
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> & vec<4, _Ty, Q>::operator*=(U scalar)
	{
		return (*this = detail::compute_vec4_mul<_Ty, Q, detail::is_aligned<Q>::value>::call(*this, vec<4, _Ty, Q>(scalar)));
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> & vec<4, _Ty, Q>::operator*=(vec<1, U, Q> const& v)
	{
		return (*this = detail::compute_vec4_mul<_Ty, Q, detail::is_aligned<Q>::value>::call(*this, vec<4, _Ty, Q>(v.x)));
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> & vec<4, _Ty, Q>::operator*=(vec<4, U, Q> const& v)
	{
		return (*this = detail::compute_vec4_mul<_Ty, Q, detail::is_aligned<Q>::value>::call(*this, vec<4, _Ty, Q>(v)));
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> & vec<4, _Ty, Q>::operator/=(U scalar)
	{
		return (*this = detail::compute_vec4_div<_Ty, Q, detail::is_aligned<Q>::value>::call(*this, vec<4, _Ty, Q>(scalar)));
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> & vec<4, _Ty, Q>::operator/=(vec<1, U, Q> const& v)
	{
		return (*this = detail::compute_vec4_div<_Ty, Q, detail::is_aligned<Q>::value>::call(*this, vec<4, _Ty, Q>(v.x)));
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> & vec<4, _Ty, Q>::operator/=(vec<4, U, Q> const& v)
	{
		return (*this = detail::compute_vec4_div<_Ty, Q, detail::is_aligned<Q>::value>::call(*this, vec<4, _Ty, Q>(v)));
	}

	// -- Increment and decrement operators --

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> & vec<4, _Ty, Q>::operator++()
	{
		++this->x;
		++this->y;
		++this->z;
		++this->w;
		return *this;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> & vec<4, _Ty, Q>::operator--()
	{
		--this->x;
		--this->y;
		--this->z;
		--this->w;
		return *this;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> vec<4, _Ty, Q>::operator++(int)
	{
		vec<4, _Ty, Q> Result(*this);
		++*this;
		return Result;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> vec<4, _Ty, Q>::operator--(int)
	{
		vec<4, _Ty, Q> Result(*this);
		--*this;
		return Result;
	}

	// -- Unary bit operators --

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> & vec<4, _Ty, Q>::operator%=(U scalar)
	{
		return (*this = detail::compute_vec4_mod<_Ty, Q, detail::is_aligned<Q>::value>::call(*this, vec<4, _Ty, Q>(scalar)));
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> & vec<4, _Ty, Q>::operator%=(vec<1, U, Q> const& v)
	{
		return (*this = detail::compute_vec4_mod<_Ty, Q, detail::is_aligned<Q>::value>::call(*this, vec<4, _Ty, Q>(v)));
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> & vec<4, _Ty, Q>::operator%=(vec<4, U, Q> const& v)
	{
		return (*this = detail::compute_vec4_mod<_Ty, Q, detail::is_aligned<Q>::value>::call(*this, vec<4, _Ty, Q>(v)));
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> & vec<4, _Ty, Q>::operator&=(U scalar)
	{
		return (*this = detail::compute_vec4_and<_Ty, Q, detail::is_int<_Ty>::value, sizeof(_Ty) * 8, detail::is_aligned<Q>::value>::call(*this, vec<4, _Ty, Q>(scalar)));
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> & vec<4, _Ty, Q>::operator&=(vec<1, U, Q> const& v)
	{
		return (*this = detail::compute_vec4_and<_Ty, Q, detail::is_int<_Ty>::value, sizeof(_Ty) * 8, detail::is_aligned<Q>::value>::call(*this, vec<4, _Ty, Q>(v)));
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> & vec<4, _Ty, Q>::operator&=(vec<4, U, Q> const& v)
	{
		return (*this = detail::compute_vec4_and<_Ty, Q, detail::is_int<_Ty>::value, sizeof(_Ty) * 8, detail::is_aligned<Q>::value>::call(*this, vec<4, _Ty, Q>(v)));
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> & vec<4, _Ty, Q>::operator|=(U scalar)
	{
		return (*this = detail::compute_vec4_or<_Ty, Q, detail::is_int<_Ty>::value, sizeof(_Ty) * 8, detail::is_aligned<Q>::value>::call(*this, vec<4, _Ty, Q>(scalar)));
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> & vec<4, _Ty, Q>::operator|=(vec<1, U, Q> const& v)
	{
		return (*this = detail::compute_vec4_or<_Ty, Q, detail::is_int<_Ty>::value, sizeof(_Ty) * 8, detail::is_aligned<Q>::value>::call(*this, vec<4, _Ty, Q>(v)));
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> & vec<4, _Ty, Q>::operator|=(vec<4, U, Q> const& v)
	{
		return (*this = detail::compute_vec4_or<_Ty, Q, detail::is_int<_Ty>::value, sizeof(_Ty) * 8, detail::is_aligned<Q>::value>::call(*this, vec<4, _Ty, Q>(v)));
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> & vec<4, _Ty, Q>::operator^=(U scalar)
	{
		return (*this = detail::compute_vec4_xor<_Ty, Q, detail::is_int<_Ty>::value, sizeof(_Ty) * 8, detail::is_aligned<Q>::value>::call(*this, vec<4, _Ty, Q>(scalar)));
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> & vec<4, _Ty, Q>::operator^=(vec<1, U, Q> const& v)
	{
		return (*this = detail::compute_vec4_xor<_Ty, Q, detail::is_int<_Ty>::value, sizeof(_Ty) * 8, detail::is_aligned<Q>::value>::call(*this, vec<4, _Ty, Q>(v)));
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> & vec<4, _Ty, Q>::operator^=(vec<4, U, Q> const& v)
	{
		return (*this = detail::compute_vec4_xor<_Ty, Q, detail::is_int<_Ty>::value, sizeof(_Ty) * 8, detail::is_aligned<Q>::value>::call(*this, vec<4, _Ty, Q>(v)));
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> & vec<4, _Ty, Q>::operator<<=(U scalar)
	{
		return (*this = detail::compute_vec4_shift_left<_Ty, Q, detail::is_int<_Ty>::value, sizeof(_Ty) * 8, detail::is_aligned<Q>::value>::call(*this, vec<4, _Ty, Q>(scalar)));
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> & vec<4, _Ty, Q>::operator<<=(vec<1, U, Q> const& v)
	{
		return (*this = detail::compute_vec4_shift_left<_Ty, Q, detail::is_int<_Ty>::value, sizeof(_Ty) * 8, detail::is_aligned<Q>::value>::call(*this, vec<4, _Ty, Q>(v)));
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> & vec<4, _Ty, Q>::operator<<=(vec<4, U, Q> const& v)
	{
		return (*this = detail::compute_vec4_shift_left<_Ty, Q, detail::is_int<_Ty>::value, sizeof(_Ty) * 8, detail::is_aligned<Q>::value>::call(*this, vec<4, _Ty, Q>(v)));
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> & vec<4, _Ty, Q>::operator>>=(U scalar)
	{
		return (*this = detail::compute_vec4_shift_right<_Ty, Q, detail::is_int<_Ty>::value, sizeof(_Ty) * 8, detail::is_aligned<Q>::value>::call(*this, vec<4, _Ty, Q>(scalar)));
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> & vec<4, _Ty, Q>::operator>>=(vec<1, U, Q> const& v)
	{
		return (*this = detail::compute_vec4_shift_right<_Ty, Q, detail::is_int<_Ty>::value, sizeof(_Ty) * 8, detail::is_aligned<Q>::value>::call(*this, vec<4, _Ty, Q>(v)));
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> & vec<4, _Ty, Q>::operator>>=(vec<4, U, Q> const& v)
	{
		return (*this = detail::compute_vec4_shift_right<_Ty, Q, detail::is_int<_Ty>::value, sizeof(_Ty) * 8, detail::is_aligned<Q>::value>::call(*this, vec<4, _Ty, Q>(v)));
	}

	// -- Unary constant operators --

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> operator+(vec<4, _Ty, Q> const& v)
	{
		return v;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> operator-(vec<4, _Ty, Q> const& v)
	{
		return vec<4, _Ty, Q>(0) -= v;
	}

	// -- Binary arithmetic operators --

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> operator+(vec<4, _Ty, Q> const& v, _Ty const & scalar)
	{
		return vec<4, _Ty, Q>(v) += scalar;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> operator+(vec<4, _Ty, Q> const& v1, vec<1, _Ty, Q> const& v2)
	{
		return vec<4, _Ty, Q>(v1) += v2;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> operator+(_Ty scalar, vec<4, _Ty, Q> const& v)
	{
		return vec<4, _Ty, Q>(v) += scalar;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> operator+(vec<1, _Ty, Q> const& v1, vec<4, _Ty, Q> const& v2)
	{
		return vec<4, _Ty, Q>(v2) += v1;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> operator+(vec<4, _Ty, Q> const& v1, vec<4, _Ty, Q> const& v2)
	{
		return vec<4, _Ty, Q>(v1) += v2;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> operator-(vec<4, _Ty, Q> const& v, _Ty const & scalar)
	{
		return vec<4, _Ty, Q>(v) -= scalar;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> operator-(vec<4, _Ty, Q> const& v1, vec<1, _Ty, Q> const& v2)
	{
		return vec<4, _Ty, Q>(v1) -= v2;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> operator-(_Ty scalar, vec<4, _Ty, Q> const& v)
	{
		return vec<4, _Ty, Q>(scalar) -= v;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> operator-(vec<1, _Ty, Q> const& v1, vec<4, _Ty, Q> const& v2)
	{
		return vec<4, _Ty, Q>(v1.x) -= v2;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> operator-(vec<4, _Ty, Q> const& v1, vec<4, _Ty, Q> const& v2)
	{
		return vec<4, _Ty, Q>(v1) -= v2;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> operator*(vec<4, _Ty, Q> const& v, _Ty const & scalar)
	{
		return vec<4, _Ty, Q>(v) *= scalar;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> operator*(vec<4, _Ty, Q> const& v1, vec<1, _Ty, Q> const& v2)
	{
		return vec<4, _Ty, Q>(v1) *= v2;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> operator*(_Ty scalar, vec<4, _Ty, Q> const& v)
	{
		return vec<4, _Ty, Q>(v) *= scalar;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> operator*(vec<1, _Ty, Q> const& v1, vec<4, _Ty, Q> const& v2)
	{
		return vec<4, _Ty, Q>(v2) *= v1;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> operator*(vec<4, _Ty, Q> const& v1, vec<4, _Ty, Q> const& v2)
	{
		return vec<4, _Ty, Q>(v1) *= v2;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> operator/(vec<4, _Ty, Q> const& v, _Ty const & scalar)
	{
		return vec<4, _Ty, Q>(v) /= scalar;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> operator/(vec<4, _Ty, Q> const& v1, vec<1, _Ty, Q> const& v2)
	{
		return vec<4, _Ty, Q>(v1) /= v2;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> operator/(_Ty scalar, vec<4, _Ty, Q> const& v)
	{
		return vec<4, _Ty, Q>(scalar) /= v;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> operator/(vec<1, _Ty, Q> const& v1, vec<4, _Ty, Q> const& v2)
	{
		return vec<4, _Ty, Q>(v1.x) /= v2;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> operator/(vec<4, _Ty, Q> const& v1, vec<4, _Ty, Q> const& v2)
	{
		return vec<4, _Ty, Q>(v1) /= v2;
	}

	// -- Binary bit operators --

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> operator%(vec<4, _Ty, Q> const& v, _Ty scalar)
	{
		return vec<4, _Ty, Q>(v) %= scalar;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> operator%(vec<4, _Ty, Q> const& v1, vec<1, _Ty, Q> const& v2)
	{
		return vec<4, _Ty, Q>(v1) %= v2.x;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> operator%(_Ty scalar, vec<4, _Ty, Q> const& v)
	{
		return vec<4, _Ty, Q>(scalar) %= v;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> operator%(vec<1, _Ty, Q> const& scalar, vec<4, _Ty, Q> const& v)
	{
		return vec<4, _Ty, Q>(scalar.x) %= v;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> operator%(vec<4, _Ty, Q> const& v1, vec<4, _Ty, Q> const& v2)
	{
		return vec<4, _Ty, Q>(v1) %= v2;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> operator&(vec<4, _Ty, Q> const& v, _Ty scalar)
	{
		return vec<4, _Ty, Q>(v) &= scalar;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> operator&(vec<4, _Ty, Q> const& v, vec<1, _Ty, Q> const& scalar)
	{
		return vec<4, _Ty, Q>(v) &= scalar;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> operator&(_Ty scalar, vec<4, _Ty, Q> const& v)
	{
		return vec<4, _Ty, Q>(scalar) &= v;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> operator&(vec<1, _Ty, Q> const& v1, vec<4, _Ty, Q> const& v2)
	{
		return vec<4, _Ty, Q>(v1.x) &= v2;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> operator&(vec<4, _Ty, Q> const& v1, vec<4, _Ty, Q> const& v2)
	{
		return vec<4, _Ty, Q>(v1) &= v2;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> operator|(vec<4, _Ty, Q> const& v, _Ty scalar)
	{
		return vec<4, _Ty, Q>(v) |= scalar;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> operator|(vec<4, _Ty, Q> const& v1, vec<1, _Ty, Q> const& v2)
	{
		return vec<4, _Ty, Q>(v1) |= v2.x;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> operator|(_Ty scalar, vec<4, _Ty, Q> const& v)
	{
		return vec<4, _Ty, Q>(scalar) |= v;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> operator|(vec<1, _Ty, Q> const& v1, vec<4, _Ty, Q> const& v2)
	{
		return vec<4, _Ty, Q>(v1.x) |= v2;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> operator|(vec<4, _Ty, Q> const& v1, vec<4, _Ty, Q> const& v2)
	{
		return vec<4, _Ty, Q>(v1) |= v2;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> operator^(vec<4, _Ty, Q> const& v, _Ty scalar)
	{
		return vec<4, _Ty, Q>(v) ^= scalar;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> operator^(vec<4, _Ty, Q> const& v1, vec<1, _Ty, Q> const& v2)
	{
		return vec<4, _Ty, Q>(v1) ^= v2.x;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> operator^(_Ty scalar, vec<4, _Ty, Q> const& v)
	{
		return vec<4, _Ty, Q>(scalar) ^= v;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> operator^(vec<1, _Ty, Q> const& v1, vec<4, _Ty, Q> const& v2)
	{
		return vec<4, _Ty, Q>(v1.x) ^= v2;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> operator^(vec<4, _Ty, Q> const& v1, vec<4, _Ty, Q> const& v2)
	{
		return vec<4, _Ty, Q>(v1) ^= v2;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> operator<<(vec<4, _Ty, Q> const& v, _Ty scalar)
	{
		return vec<4, _Ty, Q>(v) <<= scalar;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> operator<<(vec<4, _Ty, Q> const& v1, vec<1, _Ty, Q> const& v2)
	{
		return vec<4, _Ty, Q>(v1) <<= v2.x;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> operator<<(_Ty scalar, vec<4, _Ty, Q> const& v)
	{
		return vec<4, _Ty, Q>(scalar) <<= v;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> operator<<(vec<1, _Ty, Q> const& v1, vec<4, _Ty, Q> const& v2)
	{
		return vec<4, _Ty, Q>(v1.x) <<= v2;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> operator<<(vec<4, _Ty, Q> const& v1, vec<4, _Ty, Q> const& v2)
	{
		return vec<4, _Ty, Q>(v1) <<= v2;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> operator>>(vec<4, _Ty, Q> const& v, _Ty scalar)
	{
		return vec<4, _Ty, Q>(v) >>= scalar;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> operator>>(vec<4, _Ty, Q> const& v1, vec<1, _Ty, Q> const& v2)
	{
		return vec<4, _Ty, Q>(v1) >>= v2.x;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> operator>>(_Ty scalar, vec<4, _Ty, Q> const& v)
	{
		return vec<4, _Ty, Q>(scalar) >>= v;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> operator>>(vec<1, _Ty, Q> const& v1, vec<4, _Ty, Q> const& v2)
	{
		return vec<4, _Ty, Q>(v1.x) >>= v2;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> operator>>(vec<4, _Ty, Q> const& v1, vec<4, _Ty, Q> const& v2)
	{
		return vec<4, _Ty, Q>(v1) >>= v2;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> operator~(vec<4, _Ty, Q> const& v)
	{
		return detail::compute_vec4_bitwise_not<_Ty, Q, detail::is_int<_Ty>::value, sizeof(_Ty) * 8, detail::is_aligned<Q>::value>::call(v);
	}

	// -- Boolean operators --

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR bool operator==(vec<4, _Ty, Q> const& v1, vec<4, _Ty, Q> const& v2)
	{
		return detail::compute_vec4_equal<_Ty, Q, detail::is_int<_Ty>::value, sizeof(_Ty) * 8, detail::is_aligned<Q>::value>::call(v1, v2);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR bool operator!=(vec<4, _Ty, Q> const& v1, vec<4, _Ty, Q> const& v2)
	{
		return detail::compute_vec4_nequal<_Ty, Q, detail::is_int<_Ty>::value, sizeof(_Ty) * 8, detail::is_aligned<Q>::value>::call(v1, v2);
	}

	template<qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, bool, Q> operator&&(vec<4, bool, Q> const& v1, vec<4, bool, Q> const& v2)
	{
		return vec<4, bool, Q>(v1.x && v2.x, v1.y && v2.y, v1.z && v2.z, v1.w && v2.w);
	}

	template<qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, bool, Q> operator||(vec<4, bool, Q> const& v1, vec<4, bool, Q> const& v2)
	{
		return vec<4, bool, Q>(v1.x || v2.x, v1.y || v2.y, v1.z || v2.z, v1.w || v2.w);
	}
}//namespace glm

#if GLM_CONFIG_SIMD == GLM_ENABLE
#	include "type_vec4_simd.inl"
#endif
