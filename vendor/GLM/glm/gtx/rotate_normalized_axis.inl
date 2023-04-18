/// @ref gtx_rotate_normalized_axis

namespace glm
{
	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER mat<4, 4, _Ty, Q> rotateNormalizedAxis
	(
		mat<4, 4, _Ty, Q> const& m,
		_Ty const& angle,
		vec<3, _Ty, Q> const& v
	)
	{
		_Ty const a = angle;
		_Ty const c = cos(a);
		_Ty const s = sin(a);

		vec<3, _Ty, Q> const axis(v);

		vec<3, _Ty, Q> const temp((static_cast<_Ty>(1) - c) * axis);

		mat<4, 4, _Ty, Q> Rotate;
		Rotate[0][0] = c + temp[0] * axis[0];
		Rotate[0][1] = 0 + temp[0] * axis[1] + s * axis[2];
		Rotate[0][2] = 0 + temp[0] * axis[2] - s * axis[1];

		Rotate[1][0] = 0 + temp[1] * axis[0] - s * axis[2];
		Rotate[1][1] = c + temp[1] * axis[1];
		Rotate[1][2] = 0 + temp[1] * axis[2] + s * axis[0];

		Rotate[2][0] = 0 + temp[2] * axis[0] + s * axis[1];
		Rotate[2][1] = 0 + temp[2] * axis[1] - s * axis[0];
		Rotate[2][2] = c + temp[2] * axis[2];

		mat<4, 4, _Ty, Q> Result;
		Result[0] = m[0] * Rotate[0][0] + m[1] * Rotate[0][1] + m[2] * Rotate[0][2];
		Result[1] = m[0] * Rotate[1][0] + m[1] * Rotate[1][1] + m[2] * Rotate[1][2];
		Result[2] = m[0] * Rotate[2][0] + m[1] * Rotate[2][1] + m[2] * Rotate[2][2];
		Result[3] = m[3];
		return Result;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER qua<_Ty, Q> rotateNormalizedAxis
	(
		qua<_Ty, Q> const& q,
		_Ty const& angle,
		vec<3, _Ty, Q> const& v
	)
	{
		vec<3, _Ty, Q> const Tmp(v);

		_Ty const AngleRad(angle);
		_Ty const Sin = sin(AngleRad * _Ty(0.5));

		return q * qua<_Ty, Q>(cos(AngleRad * static_cast<_Ty>(0.5)), Tmp.x * Sin, Tmp.y * Sin, Tmp.z * Sin);
		//return gtc::quaternion::cross(q, tquat<T, Q>(cos(AngleRad * T(0.5)), Tmp.x * fSin, Tmp.y * fSin, Tmp.z * fSin));
	}
}//namespace glm
