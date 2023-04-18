#include "../trigonometric.hpp"
#include "../exponential.hpp"
#include "../ext/quaternion_common.hpp"
#include "../ext/quaternion_geometric.hpp"
#include <limits>

namespace glm{
namespace detail
{
	template <typename _Ty>
	struct genTypeTrait<qua<_Ty> >
	{
		static const genTypeEnum GENTYPE = GENTYPE_QUAT;
	};

	template<typename _Ty, qualifier Q, bool Aligned>
	struct compute_dot<qua<_Ty, Q>, _Ty, Aligned>
	{
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR static _Ty call(qua<_Ty, Q> const& a, qua<_Ty, Q> const& b)
		{
			vec<4, _Ty, Q> tmp(a.w * b.w, a.x * b.x, a.y * b.y, a.z * b.z);
			return (tmp.x + tmp.y) + (tmp.z + tmp.w);
		}
	};

	template<typename _Ty, qualifier Q, bool Aligned>
	struct compute_quat_add
	{
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR static qua<_Ty, Q> call(qua<_Ty, Q> const& q, qua<_Ty, Q> const& p)
		{
			return qua<_Ty, Q>(q.w + p.w, q.x + p.x, q.y + p.y, q.z + p.z);
		}
	};

	template<typename _Ty, qualifier Q, bool Aligned>
	struct compute_quat_sub
	{
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR static qua<_Ty, Q> call(qua<_Ty, Q> const& q, qua<_Ty, Q> const& p)
		{
			return qua<_Ty, Q>(q.w - p.w, q.x - p.x, q.y - p.y, q.z - p.z);
		}
	};

	template<typename _Ty, qualifier Q, bool Aligned>
	struct compute_quat_mul_scalar
	{
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR static qua<_Ty, Q> call(qua<_Ty, Q> const& q, _Ty s)
		{
			return qua<_Ty, Q>(q.w * s, q.x * s, q.y * s, q.z * s);
		}
	};

	template<typename _Ty, qualifier Q, bool Aligned>
	struct compute_quat_div_scalar
	{
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR static qua<_Ty, Q> call(qua<_Ty, Q> const& q, _Ty s)
		{
			return qua<_Ty, Q>(q.w / s, q.x / s, q.y / s, q.z / s);
		}
	};

	template<typename _Ty, qualifier Q, bool Aligned>
	struct compute_quat_mul_vec4
	{
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR static vec<4, _Ty, Q> call(qua<_Ty, Q> const& q, vec<4, _Ty, Q> const& v)
		{
			return vec<4, _Ty, Q>(q * vec<3, _Ty, Q>(v), v.w);
		}
	};
}//namespace detail

	// -- Component accesses --

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR _Ty & qua<_Ty, Q>::operator[](typename qua<_Ty, Q>::length_type i)
	{
		assert(i >= 0 && i < this->length());
#		ifdef GLM_FORCE_QUAT_DATA_XYZW
			return (&x)[i];
#		else
			return (&w)[i];
#		endif
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR _Ty const& qua<_Ty, Q>::operator[](typename qua<_Ty, Q>::length_type i) const
	{
		assert(i >= 0 && i < this->length());
#		ifdef GLM_FORCE_QUAT_DATA_XYZW
			return (&x)[i];
#		else
			return (&w)[i];
#		endif
	}

	// -- Implicit basic constructors --

#	if GLM_CONFIG_DEFAULTED_DEFAULT_CTOR == GLM_DISABLE
		template<typename T, qualifier Q>
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR qua<T, Q>::qua()
#			if GLM_CONFIG_CTOR_INIT != GLM_CTOR_INIT_DISABLE
#				ifdef GLM_FORCE_QUAT_DATA_XYZW
					: x(0), y(0), z(0), w(1)
#				else
					: w(1), x(0), y(0), z(0)
#				endif
#			endif
		{}
#	endif

#	if GLM_CONFIG_DEFAULTED_FUNCTIONS == GLM_DISABLE
		template<typename T, qualifier Q>
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR qua<T, Q>::qua(qua<T, Q> const& q)
#			ifdef GLM_FORCE_QUAT_DATA_XYZW
				: x(q.x), y(q.y), z(q.z), w(q.w)
#			else
				: w(q.w), x(q.x), y(q.y), z(q.z)
#			endif
		{}
#	endif

	template<typename _Ty, qualifier Q>
	template<qualifier P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR qua<_Ty, Q>::qua(qua<_Ty, P> const& q)
#		ifdef GLM_FORCE_QUAT_DATA_XYZW
			: x(q.x), y(q.y), z(q.z), w(q.w)
#		else
			: w(q.w), x(q.x), y(q.y), z(q.z)
#		endif
	{}

	// -- Explicit basic constructors --

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR qua<_Ty, Q>::qua(_Ty s, vec<3, _Ty, Q> const& v)
#		ifdef GLM_FORCE_QUAT_DATA_XYZW
			: x(v.x), y(v.y), z(v.z), w(s)
#		else
			: w(s), x(v.x), y(v.y), z(v.z)
#		endif
	{}

	template <typename _Ty, qualifier Q>
#	ifdef GLM_FORCE_QUAT_DATA_XYZW
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR qua<T, Q>::qua(T _x, T _y, T _z, T _w)
			: x(_x), y(_y), z(_z), w(_w)
#	else
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR qua<_Ty, Q>::qua(_Ty _w, _Ty _x, _Ty _y, _Ty _z)
			: w(_w), x(_x), y(_y), z(_z)
#	endif
	{}

	// -- Conversion constructors --

	template<typename _Ty, qualifier Q>
	template<typename U, qualifier P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR qua<_Ty, Q>::qua(qua<U, P> const& q)
#		ifdef GLM_FORCE_QUAT_DATA_XYZW
			: x(static_cast<T>(q.x)), y(static_cast<T>(q.y)), z(static_cast<T>(q.z)), w(static_cast<T>(q.w))
#		else
			: w(static_cast<_Ty>(q.w)), x(static_cast<_Ty>(q.x)), y(static_cast<_Ty>(q.y)), z(static_cast<_Ty>(q.z))
#		endif
	{}

	//template<typename valType>
	//GLM_FUNC_QUALIFIER qua<valType>::qua
	//(
	//	valType const& pitch,
	//	valType const& yaw,
	//	valType const& roll
	//)
	//{
	//	vec<3, valType> eulerAngle(pitch * valType(0.5), yaw * valType(0.5), roll * valType(0.5));
	//	vec<3, valType> c = glm::cos(eulerAngle * valType(0.5));
	//	vec<3, valType> s = glm::sin(eulerAngle * valType(0.5));
	//
	//	this->w = c.x * c.y * c.z + s.x * s.y * s.z;
	//	this->x = s.x * c.y * c.z - c.x * s.y * s.z;
	//	this->y = c.x * s.y * c.z + s.x * c.y * s.z;
	//	this->z = c.x * c.y * s.z - s.x * s.y * c.z;
	//}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER qua<_Ty, Q>::qua(vec<3, _Ty, Q> const& u, vec<3, _Ty, Q> const& v)
	{
		_Ty norm_u_norm_v = sqrt(dot(u, u) * dot(v, v));
		_Ty real_part = norm_u_norm_v + dot(u, v);
		vec<3, _Ty, Q> t;

		if(real_part < static_cast<_Ty>(1.e-6f) * norm_u_norm_v)
		{
			// If u and v are exactly opposite, rotate 180 degrees
			// around an arbitrary orthogonal axis. Axis normalisation
			// can happen later, when we normalise the quaternion.
			real_part = static_cast<_Ty>(0);
			t = abs(u.x) > abs(u.z) ? vec<3, _Ty, Q>(-u.y, u.x, static_cast<_Ty>(0)) : vec<3, _Ty, Q>(static_cast<_Ty>(0), -u.z, u.y);
		}
		else
		{
			// Otherwise, build quaternion the standard way.
			t = cross(u, v);
		}

		*this = normalize(qua<_Ty, Q>(real_part, t.x, t.y, t.z));
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR qua<_Ty, Q>::qua(vec<3, _Ty, Q> const& eulerAngle)
	{
		vec<3, _Ty, Q> c = glm::cos(eulerAngle * _Ty(0.5));
		vec<3, _Ty, Q> s = glm::sin(eulerAngle * _Ty(0.5));

		this->w = c.x * c.y * c.z + s.x * s.y * s.z;
		this->x = s.x * c.y * c.z - c.x * s.y * s.z;
		this->y = c.x * s.y * c.z + s.x * c.y * s.z;
		this->z = c.x * c.y * s.z - s.x * s.y * c.z;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER qua<_Ty, Q>::qua(mat<3, 3, _Ty, Q> const& m)
	{
		*this = quat_cast(m);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER qua<_Ty, Q>::qua(mat<4, 4, _Ty, Q> const& m)
	{
		*this = quat_cast(m);
	}

#	if GLM_HAS_EXPLICIT_CONVERSION_OPERATORS
	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER qua<_Ty, Q>::operator mat<3, 3, _Ty, Q>() const
	{
		return mat3_cast(*this);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER qua<_Ty, Q>::operator mat<4, 4, _Ty, Q>() const
	{
		return mat4_cast(*this);
	}
#	endif//GLM_HAS_EXPLICIT_CONVERSION_OPERATORS

	// -- Unary arithmetic operators --

#	if GLM_CONFIG_DEFAULTED_FUNCTIONS == GLM_DISABLE
		template<typename T, qualifier Q>
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR qua<T, Q> & qua<T, Q>::operator=(qua<T, Q> const& q)
		{
			this->w = q.w;
			this->x = q.x;
			this->y = q.y;
			this->z = q.z;
			return *this;
		}
#	endif

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR qua<_Ty, Q> & qua<_Ty, Q>::operator=(qua<U, Q> const& q)
	{
		this->w = static_cast<_Ty>(q.w);
		this->x = static_cast<_Ty>(q.x);
		this->y = static_cast<_Ty>(q.y);
		this->z = static_cast<_Ty>(q.z);
		return *this;
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR qua<_Ty, Q> & qua<_Ty, Q>::operator+=(qua<U, Q> const& q)
	{
		return (*this = detail::compute_quat_add<_Ty, Q, detail::is_aligned<Q>::value>::call(*this, qua<_Ty, Q>(q)));
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR qua<_Ty, Q> & qua<_Ty, Q>::operator-=(qua<U, Q> const& q)
	{
		return (*this = detail::compute_quat_sub<_Ty, Q, detail::is_aligned<Q>::value>::call(*this, qua<_Ty, Q>(q)));
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR qua<_Ty, Q> & qua<_Ty, Q>::operator*=(qua<U, Q> const& r)
	{
		qua<_Ty, Q> const p(*this);
		qua<_Ty, Q> const q(r);

		this->w = p.w * q.w - p.x * q.x - p.y * q.y - p.z * q.z;
		this->x = p.w * q.x + p.x * q.w + p.y * q.z - p.z * q.y;
		this->y = p.w * q.y + p.y * q.w + p.z * q.x - p.x * q.z;
		this->z = p.w * q.z + p.z * q.w + p.x * q.y - p.y * q.x;
		return *this;
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR qua<_Ty, Q> & qua<_Ty, Q>::operator*=(U s)
	{
		return (*this = detail::compute_quat_mul_scalar<_Ty, Q, detail::is_aligned<Q>::value>::call(*this, static_cast<U>(s)));
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR qua<_Ty, Q> & qua<_Ty, Q>::operator/=(U s)
	{
		return (*this = detail::compute_quat_div_scalar<_Ty, Q, detail::is_aligned<Q>::value>::call(*this, static_cast<U>(s)));
	}

	// -- Unary bit operators --

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR qua<_Ty, Q> operator+(qua<_Ty, Q> const& q)
	{
		return q;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR qua<_Ty, Q> operator-(qua<_Ty, Q> const& q)
	{
		return qua<_Ty, Q>(-q.w, -q.x, -q.y, -q.z);
	}

	// -- Binary operators --

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR qua<_Ty, Q> operator+(qua<_Ty, Q> const& q, qua<_Ty, Q> const& p)
	{
		return qua<_Ty, Q>(q) += p;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR qua<_Ty, Q> operator-(qua<_Ty, Q> const& q, qua<_Ty, Q> const& p)
	{
		return qua<_Ty, Q>(q) -= p;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR qua<_Ty, Q> operator*(qua<_Ty, Q> const& q, qua<_Ty, Q> const& p)
	{
		return qua<_Ty, Q>(q) *= p;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, _Ty, Q> operator*(qua<_Ty, Q> const& q, vec<3, _Ty, Q> const& v)
	{
		vec<3, _Ty, Q> const QuatVector(q.x, q.y, q.z);
		vec<3, _Ty, Q> const uv(glm::cross(QuatVector, v));
		vec<3, _Ty, Q> const uuv(glm::cross(QuatVector, uv));

		return v + ((uv * q.w) + uuv) * static_cast<_Ty>(2);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, _Ty, Q> operator*(vec<3, _Ty, Q> const& v, qua<_Ty, Q> const& q)
	{
		return glm::inverse(q) * v;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> operator*(qua<_Ty, Q> const& q, vec<4, _Ty, Q> const& v)
	{
		return detail::compute_quat_mul_vec4<_Ty, Q, detail::is_aligned<Q>::value>::call(q, v);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<4, _Ty, Q> operator*(vec<4, _Ty, Q> const& v, qua<_Ty, Q> const& q)
	{
		return glm::inverse(q) * v;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR qua<_Ty, Q> operator*(qua<_Ty, Q> const& q, _Ty const& s)
	{
		return qua<_Ty, Q>(
			q.w * s, q.x * s, q.y * s, q.z * s);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR qua<_Ty, Q> operator*(_Ty const& s, qua<_Ty, Q> const& q)
	{
		return q * s;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR qua<_Ty, Q> operator/(qua<_Ty, Q> const& q, _Ty const& s)
	{
		return qua<_Ty, Q>(
			q.w / s, q.x / s, q.y / s, q.z / s);
	}

	// -- Boolean operators --

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR bool operator==(qua<_Ty, Q> const& q1, qua<_Ty, Q> const& q2)
	{
		return q1.x == q2.x && q1.y == q2.y && q1.z == q2.z && q1.w == q2.w;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR bool operator!=(qua<_Ty, Q> const& q1, qua<_Ty, Q> const& q2)
	{
		return q1.x != q2.x || q1.y != q2.y || q1.z != q2.z || q1.w != q2.w;
	}
}//namespace glm

#if GLM_CONFIG_SIMD == GLM_ENABLE
#	include "type_quat_simd.inl"
#endif

