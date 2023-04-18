/// @ref core

#include "./compute_vector_relational.hpp"

namespace glm
{
	// -- Implicit basic constructors --

#	if GLM_CONFIG_DEFAULTED_DEFAULT_CTOR == GLM_DISABLE
		template<typename T, qualifier Q>
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q>::vec()
#			if GLM_CONFIG_CTOR_INIT != GLM_CTOR_INIT_DISABLE
				: x(0)
#			endif
		{}
#	endif

#	if GLM_CONFIG_DEFAULTED_FUNCTIONS == GLM_DISABLE
		template<typename T, qualifier Q>
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q>::vec(vec<1, T, Q> const& v)
			: x(v.x)
		{}
#	endif

	template<typename _Ty, qualifier Q>
	template<qualifier P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, _Ty, Q>::vec(vec<1, _Ty, P> const& v)
		: x(v.x)
	{}

	// -- Explicit basic constructors --

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, _Ty, Q>::vec(_Ty scalar)
		: x(scalar)
	{}

	// -- Conversion vector constructors --

	template<typename _Ty, qualifier Q>
	template<typename U, qualifier P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, _Ty, Q>::vec(vec<1, U, P> const& v)
		: x(static_cast<_Ty>(v.x))
	{}

	template<typename _Ty, qualifier Q>
	template<typename U, qualifier P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, _Ty, Q>::vec(vec<2, U, P> const& v)
		: x(static_cast<_Ty>(v.x))
	{}

	template<typename _Ty, qualifier Q>
	template<typename U, qualifier P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, _Ty, Q>::vec(vec<3, U, P> const& v)
		: x(static_cast<_Ty>(v.x))
	{}

	template<typename _Ty, qualifier Q>
	template<typename U, qualifier P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, _Ty, Q>::vec(vec<4, U, P> const& v)
		: x(static_cast<_Ty>(v.x))
	{}

	// -- Component accesses --

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR _Ty & vec<1, _Ty, Q>::operator[](typename vec<1, _Ty, Q>::length_type)
	{
		return x;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR _Ty const& vec<1, _Ty, Q>::operator[](typename vec<1, _Ty, Q>::length_type) const
	{
		return x;
	}

	// -- Unary arithmetic operators --

#	if GLM_CONFIG_DEFAULTED_FUNCTIONS == GLM_DISABLE
		template<typename T, qualifier Q>
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q> & vec<1, T, Q>::operator=(vec<1, T, Q> const& v)
		{
			this->x = v.x;
			return *this;
		}
#	endif

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, _Ty, Q> & vec<1, _Ty, Q>::operator=(vec<1, U, Q> const& v)
	{
		this->x = static_cast<_Ty>(v.x);
		return *this;
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, _Ty, Q> & vec<1, _Ty, Q>::operator+=(U scalar)
	{
		this->x += static_cast<_Ty>(scalar);
		return *this;
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, _Ty, Q> & vec<1, _Ty, Q>::operator+=(vec<1, U, Q> const& v)
	{
		this->x += static_cast<_Ty>(v.x);
		return *this;
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, _Ty, Q> & vec<1, _Ty, Q>::operator-=(U scalar)
	{
		this->x -= static_cast<_Ty>(scalar);
		return *this;
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, _Ty, Q> & vec<1, _Ty, Q>::operator-=(vec<1, U, Q> const& v)
	{
		this->x -= static_cast<_Ty>(v.x);
		return *this;
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, _Ty, Q> & vec<1, _Ty, Q>::operator*=(U scalar)
	{
		this->x *= static_cast<_Ty>(scalar);
		return *this;
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, _Ty, Q> & vec<1, _Ty, Q>::operator*=(vec<1, U, Q> const& v)
	{
		this->x *= static_cast<_Ty>(v.x);
		return *this;
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, _Ty, Q> & vec<1, _Ty, Q>::operator/=(U scalar)
	{
		this->x /= static_cast<_Ty>(scalar);
		return *this;
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, _Ty, Q> & vec<1, _Ty, Q>::operator/=(vec<1, U, Q> const& v)
	{
		this->x /= static_cast<_Ty>(v.x);
		return *this;
	}

	// -- Increment and decrement operators --

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, _Ty, Q> & vec<1, _Ty, Q>::operator++()
	{
		++this->x;
		return *this;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, _Ty, Q> & vec<1, _Ty, Q>::operator--()
	{
		--this->x;
		return *this;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, _Ty, Q> vec<1, _Ty, Q>::operator++(int)
	{
		vec<1, _Ty, Q> Result(*this);
		++*this;
		return Result;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, _Ty, Q> vec<1, _Ty, Q>::operator--(int)
	{
		vec<1, _Ty, Q> Result(*this);
		--*this;
		return Result;
	}

	// -- Unary bit operators --

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, _Ty, Q> & vec<1, _Ty, Q>::operator%=(U scalar)
	{
		this->x %= static_cast<_Ty>(scalar);
		return *this;
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, _Ty, Q> & vec<1, _Ty, Q>::operator%=(vec<1, U, Q> const& v)
	{
		this->x %= static_cast<_Ty>(v.x);
		return *this;
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, _Ty, Q> & vec<1, _Ty, Q>::operator&=(U scalar)
	{
		this->x &= static_cast<_Ty>(scalar);
		return *this;
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, _Ty, Q> & vec<1, _Ty, Q>::operator&=(vec<1, U, Q> const& v)
	{
		this->x &= static_cast<_Ty>(v.x);
		return *this;
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, _Ty, Q> & vec<1, _Ty, Q>::operator|=(U scalar)
	{
		this->x |= static_cast<_Ty>(scalar);
		return *this;
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, _Ty, Q> & vec<1, _Ty, Q>::operator|=(vec<1, U, Q> const& v)
	{
		this->x |= static_cast<_Ty>(v.x);
		return *this;
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, _Ty, Q> & vec<1, _Ty, Q>::operator^=(U scalar)
	{
		this->x ^= static_cast<_Ty>(scalar);
		return *this;
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, _Ty, Q> & vec<1, _Ty, Q>::operator^=(vec<1, U, Q> const& v)
	{
		this->x ^= static_cast<_Ty>(v.x);
		return *this;
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, _Ty, Q> & vec<1, _Ty, Q>::operator<<=(U scalar)
	{
		this->x <<= static_cast<_Ty>(scalar);
		return *this;
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, _Ty, Q> & vec<1, _Ty, Q>::operator<<=(vec<1, U, Q> const& v)
	{
		this->x <<= static_cast<_Ty>(v.x);
		return *this;
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, _Ty, Q> & vec<1, _Ty, Q>::operator>>=(U scalar)
	{
		this->x >>= static_cast<_Ty>(scalar);
		return *this;
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, _Ty, Q> & vec<1, _Ty, Q>::operator>>=(vec<1, U, Q> const& v)
	{
		this->x >>= static_cast<_Ty>(v.x);
		return *this;
	}

	// -- Unary constant operators --

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, _Ty, Q> operator+(vec<1, _Ty, Q> const& v)
	{
		return v;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, _Ty, Q> operator-(vec<1, _Ty, Q> const& v)
	{
		return vec<1, _Ty, Q>(
			-v.x);
	}

	// -- Binary arithmetic operators --

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, _Ty, Q> operator+(vec<1, _Ty, Q> const& v, _Ty scalar)
	{
		return vec<1, _Ty, Q>(
			v.x + scalar);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, _Ty, Q> operator+(_Ty scalar, vec<1, _Ty, Q> const& v)
	{
		return vec<1, _Ty, Q>(
			scalar + v.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, _Ty, Q> operator+(vec<1, _Ty, Q> const& v1, vec<1, _Ty, Q> const& v2)
	{
		return vec<1, _Ty, Q>(
			v1.x + v2.x);
	}

	//operator-
	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, _Ty, Q> operator-(vec<1, _Ty, Q> const& v, _Ty scalar)
	{
		return vec<1, _Ty, Q>(
			v.x - scalar);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, _Ty, Q> operator-(_Ty scalar, vec<1, _Ty, Q> const& v)
	{
		return vec<1, _Ty, Q>(
			scalar - v.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, _Ty, Q> operator-(vec<1, _Ty, Q> const& v1, vec<1, _Ty, Q> const& v2)
	{
		return vec<1, _Ty, Q>(
			v1.x - v2.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, _Ty, Q> operator*(vec<1, _Ty, Q> const& v, _Ty scalar)
	{
		return vec<1, _Ty, Q>(
			v.x * scalar);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, _Ty, Q> operator*(_Ty scalar, vec<1, _Ty, Q> const& v)
	{
		return vec<1, _Ty, Q>(
			scalar * v.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, _Ty, Q> operator*(vec<1, _Ty, Q> const& v1, vec<1, _Ty, Q> const& v2)
	{
		return vec<1, _Ty, Q>(
			v1.x * v2.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, _Ty, Q> operator/(vec<1, _Ty, Q> const& v, _Ty scalar)
	{
		return vec<1, _Ty, Q>(
			v.x / scalar);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, _Ty, Q> operator/(_Ty scalar, vec<1, _Ty, Q> const& v)
	{
		return vec<1, _Ty, Q>(
			scalar / v.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, _Ty, Q> operator/(vec<1, _Ty, Q> const& v1, vec<1, _Ty, Q> const& v2)
	{
		return vec<1, _Ty, Q>(
			v1.x / v2.x);
	}

	// -- Binary bit operators --

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, _Ty, Q> operator%(vec<1, _Ty, Q> const& v, _Ty scalar)
	{
		return vec<1, _Ty, Q>(
			v.x % scalar);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, _Ty, Q> operator%(_Ty scalar, vec<1, _Ty, Q> const& v)
	{
		return vec<1, _Ty, Q>(
			scalar % v.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, _Ty, Q> operator%(vec<1, _Ty, Q> const& v1, vec<1, _Ty, Q> const& v2)
	{
		return vec<1, _Ty, Q>(
			v1.x % v2.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, _Ty, Q> operator&(vec<1, _Ty, Q> const& v, _Ty scalar)
	{
		return vec<1, _Ty, Q>(
			v.x & scalar);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, _Ty, Q> operator&(_Ty scalar, vec<1, _Ty, Q> const& v)
	{
		return vec<1, _Ty, Q>(
			scalar & v.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, _Ty, Q> operator&(vec<1, _Ty, Q> const& v1, vec<1, _Ty, Q> const& v2)
	{
		return vec<1, _Ty, Q>(
			v1.x & v2.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, _Ty, Q> operator|(vec<1, _Ty, Q> const& v, _Ty scalar)
	{
		return vec<1, _Ty, Q>(
			v.x | scalar);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, _Ty, Q> operator|(_Ty scalar, vec<1, _Ty, Q> const& v)
	{
		return vec<1, _Ty, Q>(
			scalar | v.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, _Ty, Q> operator|(vec<1, _Ty, Q> const& v1, vec<1, _Ty, Q> const& v2)
	{
		return vec<1, _Ty, Q>(
			v1.x | v2.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, _Ty, Q> operator^(vec<1, _Ty, Q> const& v, _Ty scalar)
	{
		return vec<1, _Ty, Q>(
			v.x ^ scalar);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, _Ty, Q> operator^(_Ty scalar, vec<1, _Ty, Q> const& v)
	{
		return vec<1, _Ty, Q>(
			scalar ^ v.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, _Ty, Q> operator^(vec<1, _Ty, Q> const& v1, vec<1, _Ty, Q> const& v2)
	{
		return vec<1, _Ty, Q>(
			v1.x ^ v2.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, _Ty, Q> operator<<(vec<1, _Ty, Q> const& v, _Ty scalar)
	{
		return vec<1, _Ty, Q>(
			static_cast<_Ty>(v.x << scalar));
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, _Ty, Q> operator<<(_Ty scalar, vec<1, _Ty, Q> const& v)
	{
		return vec<1, _Ty, Q>(
			static_cast<_Ty>(scalar << v.x));
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, _Ty, Q> operator<<(vec<1, _Ty, Q> const& v1, vec<1, _Ty, Q> const& v2)
	{
		return vec<1, _Ty, Q>(
			static_cast<_Ty>(v1.x << v2.x));
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, _Ty, Q> operator>>(vec<1, _Ty, Q> const& v, _Ty scalar)
	{
		return vec<1, _Ty, Q>(
			static_cast<_Ty>(v.x >> scalar));
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, _Ty, Q> operator>>(_Ty scalar, vec<1, _Ty, Q> const& v)
	{
		return vec<1, _Ty, Q>(
			static_cast<_Ty>(scalar >> v.x));
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, _Ty, Q> operator>>(vec<1, _Ty, Q> const& v1, vec<1, _Ty, Q> const& v2)
	{
		return vec<1, _Ty, Q>(
			static_cast<_Ty>(v1.x >> v2.x));
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, _Ty, Q> operator~(vec<1, _Ty, Q> const& v)
	{
		return vec<1, _Ty, Q>(
			~v.x);
	}

	// -- Boolean operators --

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR bool operator==(vec<1, _Ty, Q> const& v1, vec<1, _Ty, Q> const& v2)
	{
		return detail::compute_equal<_Ty, std::numeric_limits<_Ty>::is_iec559>::call(v1.x, v2.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR bool operator!=(vec<1, _Ty, Q> const& v1, vec<1, _Ty, Q> const& v2)
	{
		return !(v1 == v2);
	}

	template<qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, bool, Q> operator&&(vec<1, bool, Q> const& v1, vec<1, bool, Q> const& v2)
	{
		return vec<1, bool, Q>(v1.x && v2.x);
	}

	template<qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, bool, Q> operator||(vec<1, bool, Q> const& v1, vec<1, bool, Q> const& v2)
	{
		return vec<1, bool, Q>(v1.x || v2.x);
	}
}//namespace glm
