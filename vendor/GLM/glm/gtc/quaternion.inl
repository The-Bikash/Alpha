#include "../trigonometric.hpp"
#include "../geometric.hpp"
#include "../exponential.hpp"
#include "epsilon.hpp"
#include <limits>

namespace glm
{
	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<3, _Ty, Q> eulerAngles(qua<_Ty, Q> const& x)
	{
		return vec<3, _Ty, Q>(pitch(x), yaw(x), roll(x));
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER _Ty roll(qua<_Ty, Q> const& q)
	{
		_Ty const y = static_cast<_Ty>(2) * (q.x * q.y + q.w * q.z);
		_Ty const x = q.w * q.w + q.x * q.x - q.y * q.y - q.z * q.z;

		if(all(equal(vec<2, _Ty, Q>(x, y), vec<2, _Ty, Q>(0), epsilon<_Ty>()))) //avoid atan2(0,0) - handle singularity - Matiis
			return static_cast<_Ty>(0);

		return static_cast<_Ty>(atan(y, x));
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER _Ty pitch(qua<_Ty, Q> const& q)
	{
		//return T(atan(T(2) * (q.y * q.z + q.w * q.x), q.w * q.w - q.x * q.x - q.y * q.y + q.z * q.z));
		_Ty const y = static_cast<_Ty>(2) * (q.y * q.z + q.w * q.x);
		_Ty const x = q.w * q.w - q.x * q.x - q.y * q.y + q.z * q.z;

		if(all(equal(vec<2, _Ty, Q>(x, y), vec<2, _Ty, Q>(0), epsilon<_Ty>()))) //avoid atan2(0,0) - handle singularity - Matiis
			return static_cast<_Ty>(static_cast<_Ty>(2) * atan(q.x, q.w));

		return static_cast<_Ty>(atan(y, x));
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER _Ty yaw(qua<_Ty, Q> const& q)
	{
		return asin(clamp(static_cast<_Ty>(-2) * (q.x * q.z - q.w * q.y), static_cast<_Ty>(-1), static_cast<_Ty>(1)));
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER mat<3, 3, _Ty, Q> mat3_cast(qua<_Ty, Q> const& q)
	{
		mat<3, 3, _Ty, Q> Result(_Ty(1));
		_Ty qxx(q.x * q.x);
		_Ty qyy(q.y * q.y);
		_Ty qzz(q.z * q.z);
		_Ty qxz(q.x * q.z);
		_Ty qxy(q.x * q.y);
		_Ty qyz(q.y * q.z);
		_Ty qwx(q.w * q.x);
		_Ty qwy(q.w * q.y);
		_Ty qwz(q.w * q.z);

		Result[0][0] = _Ty(1) - _Ty(2) * (qyy +  qzz);
		Result[0][1] = _Ty(2) * (qxy + qwz);
		Result[0][2] = _Ty(2) * (qxz - qwy);

		Result[1][0] = _Ty(2) * (qxy - qwz);
		Result[1][1] = _Ty(1) - _Ty(2) * (qxx +  qzz);
		Result[1][2] = _Ty(2) * (qyz + qwx);

		Result[2][0] = _Ty(2) * (qxz + qwy);
		Result[2][1] = _Ty(2) * (qyz - qwx);
		Result[2][2] = _Ty(1) - _Ty(2) * (qxx +  qyy);
		return Result;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER mat<4, 4, _Ty, Q> mat4_cast(qua<_Ty, Q> const& q)
	{
		return mat<4, 4, _Ty, Q>(mat3_cast(q));
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER qua<_Ty, Q> quat_cast(mat<3, 3, _Ty, Q> const& m)
	{
		_Ty fourXSquaredMinus1 = m[0][0] - m[1][1] - m[2][2];
		_Ty fourYSquaredMinus1 = m[1][1] - m[0][0] - m[2][2];
		_Ty fourZSquaredMinus1 = m[2][2] - m[0][0] - m[1][1];
		_Ty fourWSquaredMinus1 = m[0][0] + m[1][1] + m[2][2];

		int biggestIndex = 0;
		_Ty fourBiggestSquaredMinus1 = fourWSquaredMinus1;
		if(fourXSquaredMinus1 > fourBiggestSquaredMinus1)
		{
			fourBiggestSquaredMinus1 = fourXSquaredMinus1;
			biggestIndex = 1;
		}
		if(fourYSquaredMinus1 > fourBiggestSquaredMinus1)
		{
			fourBiggestSquaredMinus1 = fourYSquaredMinus1;
			biggestIndex = 2;
		}
		if(fourZSquaredMinus1 > fourBiggestSquaredMinus1)
		{
			fourBiggestSquaredMinus1 = fourZSquaredMinus1;
			biggestIndex = 3;
		}

		_Ty biggestVal = sqrt(fourBiggestSquaredMinus1 + static_cast<_Ty>(1)) * static_cast<_Ty>(0.5);
		_Ty mult = static_cast<_Ty>(0.25) / biggestVal;

		switch(biggestIndex)
		{
		case 0:
			return qua<_Ty, Q>(biggestVal, (m[1][2] - m[2][1]) * mult, (m[2][0] - m[0][2]) * mult, (m[0][1] - m[1][0]) * mult);
		case 1:
			return qua<_Ty, Q>((m[1][2] - m[2][1]) * mult, biggestVal, (m[0][1] + m[1][0]) * mult, (m[2][0] + m[0][2]) * mult);
		case 2:
			return qua<_Ty, Q>((m[2][0] - m[0][2]) * mult, (m[0][1] + m[1][0]) * mult, biggestVal, (m[1][2] + m[2][1]) * mult);
		case 3:
			return qua<_Ty, Q>((m[0][1] - m[1][0]) * mult, (m[2][0] + m[0][2]) * mult, (m[1][2] + m[2][1]) * mult, biggestVal);
		default: // Silence a -Wswitch-default warning in GCC. Should never actually get here. Assert is just for sanity.
			assert(false);
			return qua<_Ty, Q>(1, 0, 0, 0);
		}
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER qua<_Ty, Q> quat_cast(mat<4, 4, _Ty, Q> const& m4)
	{
		return quat_cast(mat<3, 3, _Ty, Q>(m4));
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<4, bool, Q> lessThan(qua<_Ty, Q> const& x, qua<_Ty, Q> const& y)
	{
		vec<4, bool, Q> Result;
		for(length_t i = 0; i < x.length(); ++i)
			Result[i] = x[i] < y[i];
		return Result;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<4, bool, Q> lessThanEqual(qua<_Ty, Q> const& x, qua<_Ty, Q> const& y)
	{
		vec<4, bool, Q> Result;
		for(length_t i = 0; i < x.length(); ++i)
			Result[i] = x[i] <= y[i];
		return Result;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<4, bool, Q> greaterThan(qua<_Ty, Q> const& x, qua<_Ty, Q> const& y)
	{
		vec<4, bool, Q> Result;
		for(length_t i = 0; i < x.length(); ++i)
			Result[i] = x[i] > y[i];
		return Result;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<4, bool, Q> greaterThanEqual(qua<_Ty, Q> const& x, qua<_Ty, Q> const& y)
	{
		vec<4, bool, Q> Result;
		for(length_t i = 0; i < x.length(); ++i)
			Result[i] = x[i] >= y[i];
		return Result;
	}


	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER qua<_Ty, Q> quatLookAt(vec<3, _Ty, Q> const& direction, vec<3, _Ty, Q> const& up)
	{
#		if GLM_CONFIG_CLIP_CONTROL & GLM_CLIP_CONTROL_LH_BIT
			return quatLookAtLH(direction, up);
#		else
			return quatLookAtRH(direction, up);
# 		endif
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER qua<_Ty, Q> quatLookAtRH(vec<3, _Ty, Q> const& direction, vec<3, _Ty, Q> const& up)
	{
		mat<3, 3, _Ty, Q> Result;

		Result[2] = -direction;
		vec<3, _Ty, Q> const& Right = cross(up, Result[2]);
		Result[0] = Right * inversesqrt(max(static_cast<_Ty>(0.00001), dot(Right, Right)));
		Result[1] = cross(Result[2], Result[0]);

		return quat_cast(Result);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER qua<_Ty, Q> quatLookAtLH(vec<3, _Ty, Q> const& direction, vec<3, _Ty, Q> const& up)
	{
		mat<3, 3, _Ty, Q> Result;

		Result[2] = direction;
		vec<3, _Ty, Q> const& Right = cross(up, Result[2]);
		Result[0] = Right * inversesqrt(max(static_cast<_Ty>(0.00001), dot(Right, Right)));
		Result[1] = cross(Result[2], Result[0]);

		return quat_cast(Result);
	}
}//namespace glm

#if GLM_CONFIG_SIMD == GLM_ENABLE
#	include "quaternion_simd.inl"
#endif

