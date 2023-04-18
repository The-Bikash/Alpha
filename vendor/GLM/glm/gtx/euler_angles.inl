/// @ref gtx_euler_angles

#include "compatibility.hpp" // glm::atan2

namespace glm
{
	template<typename _Ty>
	GLM_FUNC_QUALIFIER mat<4, 4, _Ty, defaultp> eulerAngleX
	(
		_Ty const& angleX
	)
	{
		_Ty cosX = glm::cos(angleX);
		_Ty sinX = glm::sin(angleX);

		return mat<4, 4, _Ty, defaultp>(
			_Ty(1), _Ty(0), _Ty(0), _Ty(0),
			_Ty(0), cosX, sinX, _Ty(0),
			_Ty(0),-sinX, cosX, _Ty(0),
			_Ty(0), _Ty(0), _Ty(0), _Ty(1));
	}

	template<typename _Ty>
	GLM_FUNC_QUALIFIER mat<4, 4, _Ty, defaultp> eulerAngleY
	(
		_Ty const& angleY
	)
	{
		_Ty cosY = glm::cos(angleY);
		_Ty sinY = glm::sin(angleY);

		return mat<4, 4, _Ty, defaultp>(
			cosY,	_Ty(0),	-sinY,	_Ty(0),
			_Ty(0),	_Ty(1),	_Ty(0),	_Ty(0),
			sinY,	_Ty(0),	cosY,	_Ty(0),
			_Ty(0),	_Ty(0),	_Ty(0),	_Ty(1));
	}

	template<typename _Ty>
	GLM_FUNC_QUALIFIER mat<4, 4, _Ty, defaultp> eulerAngleZ
	(
		_Ty const& angleZ
	)
	{
		_Ty cosZ = glm::cos(angleZ);
		_Ty sinZ = glm::sin(angleZ);

		return mat<4, 4, _Ty, defaultp>(
			cosZ,	sinZ,	_Ty(0), _Ty(0),
			-sinZ,	cosZ,	_Ty(0), _Ty(0),
			_Ty(0),	_Ty(0),	_Ty(1), _Ty(0),
			_Ty(0),	_Ty(0),	_Ty(0), _Ty(1));
	}

	template <typename _Ty>
	GLM_FUNC_QUALIFIER mat<4, 4, _Ty, defaultp> derivedEulerAngleX
	(
		_Ty const & angleX,
		_Ty const & angularVelocityX
	)
	{
		_Ty cosX = glm::cos(angleX) * angularVelocityX;
		_Ty sinX = glm::sin(angleX) * angularVelocityX;

		return mat<4, 4, _Ty, defaultp>(
			_Ty(0), _Ty(0), _Ty(0), _Ty(0),
			_Ty(0),-sinX, cosX, _Ty(0),
			_Ty(0),-cosX,-sinX, _Ty(0),
			_Ty(0), _Ty(0), _Ty(0), _Ty(0));
	}

	template <typename _Ty>
	GLM_FUNC_QUALIFIER mat<4, 4, _Ty, defaultp> derivedEulerAngleY
	(
		_Ty const & angleY,
		_Ty const & angularVelocityY
	)
	{
		_Ty cosY = glm::cos(angleY) * angularVelocityY;
		_Ty sinY = glm::sin(angleY) * angularVelocityY;

		return mat<4, 4, _Ty, defaultp>(
			-sinY, _Ty(0), -cosY, _Ty(0),
			 _Ty(0), _Ty(0),  _Ty(0), _Ty(0),
			 cosY, _Ty(0), -sinY, _Ty(0),
			 _Ty(0), _Ty(0),  _Ty(0), _Ty(0));
	}

	template <typename _Ty>
	GLM_FUNC_QUALIFIER mat<4, 4, _Ty, defaultp> derivedEulerAngleZ
	(
		_Ty const & angleZ,
		_Ty const & angularVelocityZ
	)
	{
		_Ty cosZ = glm::cos(angleZ) * angularVelocityZ;
		_Ty sinZ = glm::sin(angleZ) * angularVelocityZ;

		return mat<4, 4, _Ty, defaultp>(
			-sinZ,  cosZ, _Ty(0), _Ty(0),
			-cosZ, -sinZ, _Ty(0), _Ty(0),
			 _Ty(0),  _Ty(0), _Ty(0), _Ty(0),
			 _Ty(0),  _Ty(0), _Ty(0), _Ty(0));
	}

	template<typename _Ty>
	GLM_FUNC_QUALIFIER mat<4, 4, _Ty, defaultp> eulerAngleXY
	(
		_Ty const& angleX,
		_Ty const& angleY
	)
	{
		_Ty cosX = glm::cos(angleX);
		_Ty sinX = glm::sin(angleX);
		_Ty cosY = glm::cos(angleY);
		_Ty sinY = glm::sin(angleY);

		return mat<4, 4, _Ty, defaultp>(
			cosY,   -sinX * -sinY,  cosX * -sinY,   _Ty(0),
			_Ty(0),   cosX,           sinX,           _Ty(0),
			sinY,   -sinX * cosY,   cosX * cosY,    _Ty(0),
			_Ty(0),   _Ty(0),           _Ty(0),           _Ty(1));
	}

	template<typename _Ty>
	GLM_FUNC_QUALIFIER mat<4, 4, _Ty, defaultp> eulerAngleYX
	(
		_Ty const& angleY,
		_Ty const& angleX
	)
	{
		_Ty cosX = glm::cos(angleX);
		_Ty sinX = glm::sin(angleX);
		_Ty cosY = glm::cos(angleY);
		_Ty sinY = glm::sin(angleY);

		return mat<4, 4, _Ty, defaultp>(
			cosY,          0,      -sinY,    _Ty(0),
			sinY * sinX,  cosX, cosY * sinX, _Ty(0),
			sinY * cosX, -sinX, cosY * cosX, _Ty(0),
			_Ty(0),         _Ty(0),     _Ty(0),    _Ty(1));
	}

	template<typename _Ty>
	GLM_FUNC_QUALIFIER mat<4, 4, _Ty, defaultp> eulerAngleXZ
	(
		_Ty const& angleX,
		_Ty const& angleZ
	)
	{
		return eulerAngleX(angleX) * eulerAngleZ(angleZ);
	}

	template<typename _Ty>
	GLM_FUNC_QUALIFIER mat<4, 4, _Ty, defaultp> eulerAngleZX
	(
		_Ty const& angleZ,
		_Ty const& angleX
	)
	{
		return eulerAngleZ(angleZ) * eulerAngleX(angleX);
	}

	template<typename _Ty>
	GLM_FUNC_QUALIFIER mat<4, 4, _Ty, defaultp> eulerAngleYZ
	(
		_Ty const& angleY,
		_Ty const& angleZ
	)
	{
		return eulerAngleY(angleY) * eulerAngleZ(angleZ);
	}

	template<typename _Ty>
	GLM_FUNC_QUALIFIER mat<4, 4, _Ty, defaultp> eulerAngleZY
	(
		_Ty const& angleZ,
		_Ty const& angleY
	)
	{
		return eulerAngleZ(angleZ) * eulerAngleY(angleY);
	}

    template<typename _Ty>
    GLM_FUNC_QUALIFIER mat<4, 4, _Ty, defaultp> eulerAngleXYZ
    (
     _Ty const& t1,
     _Ty const& t2,
     _Ty const& t3
     )
    {
        _Ty c1 = glm::cos(-t1);
        _Ty c2 = glm::cos(-t2);
        _Ty c3 = glm::cos(-t3);
        _Ty s1 = glm::sin(-t1);
        _Ty s2 = glm::sin(-t2);
        _Ty s3 = glm::sin(-t3);

        mat<4, 4, _Ty, defaultp> Result;
        Result[0][0] = c2 * c3;
        Result[0][1] =-c1 * s3 + s1 * s2 * c3;
        Result[0][2] = s1 * s3 + c1 * s2 * c3;
        Result[0][3] = static_cast<_Ty>(0);
        Result[1][0] = c2 * s3;
        Result[1][1] = c1 * c3 + s1 * s2 * s3;
        Result[1][2] =-s1 * c3 + c1 * s2 * s3;
        Result[1][3] = static_cast<_Ty>(0);
        Result[2][0] =-s2;
        Result[2][1] = s1 * c2;
        Result[2][2] = c1 * c2;
        Result[2][3] = static_cast<_Ty>(0);
        Result[3][0] = static_cast<_Ty>(0);
        Result[3][1] = static_cast<_Ty>(0);
        Result[3][2] = static_cast<_Ty>(0);
        Result[3][3] = static_cast<_Ty>(1);
        return Result;
    }

	template<typename _Ty>
	GLM_FUNC_QUALIFIER mat<4, 4, _Ty, defaultp> eulerAngleYXZ
	(
		_Ty const& yaw,
		_Ty const& pitch,
		_Ty const& roll
	)
	{
		_Ty tmp_ch = glm::cos(yaw);
		_Ty tmp_sh = glm::sin(yaw);
		_Ty tmp_cp = glm::cos(pitch);
		_Ty tmp_sp = glm::sin(pitch);
		_Ty tmp_cb = glm::cos(roll);
		_Ty tmp_sb = glm::sin(roll);

		mat<4, 4, _Ty, defaultp> Result;
		Result[0][0] = tmp_ch * tmp_cb + tmp_sh * tmp_sp * tmp_sb;
		Result[0][1] = tmp_sb * tmp_cp;
		Result[0][2] = -tmp_sh * tmp_cb + tmp_ch * tmp_sp * tmp_sb;
		Result[0][3] = static_cast<_Ty>(0);
		Result[1][0] = -tmp_ch * tmp_sb + tmp_sh * tmp_sp * tmp_cb;
		Result[1][1] = tmp_cb * tmp_cp;
		Result[1][2] = tmp_sb * tmp_sh + tmp_ch * tmp_sp * tmp_cb;
		Result[1][3] = static_cast<_Ty>(0);
		Result[2][0] = tmp_sh * tmp_cp;
		Result[2][1] = -tmp_sp;
		Result[2][2] = tmp_ch * tmp_cp;
		Result[2][3] = static_cast<_Ty>(0);
		Result[3][0] = static_cast<_Ty>(0);
		Result[3][1] = static_cast<_Ty>(0);
		Result[3][2] = static_cast<_Ty>(0);
		Result[3][3] = static_cast<_Ty>(1);
		return Result;
	}

	template <typename _Ty>
	GLM_FUNC_QUALIFIER mat<4, 4, _Ty, defaultp> eulerAngleXZX
	(
		_Ty const & t1,
		_Ty const & t2,
		_Ty const & t3
	)
	{
		_Ty c1 = glm::cos(t1);
		_Ty s1 = glm::sin(t1);
		_Ty c2 = glm::cos(t2);
		_Ty s2 = glm::sin(t2);
		_Ty c3 = glm::cos(t3);
		_Ty s3 = glm::sin(t3);

		mat<4, 4, _Ty, defaultp> Result;
		Result[0][0] = c2;
		Result[0][1] = c1 * s2;
		Result[0][2] = s1 * s2;
		Result[0][3] = static_cast<_Ty>(0);
		Result[1][0] =-c3 * s2;
		Result[1][1] = c1 * c2 * c3 - s1 * s3;
		Result[1][2] = c1 * s3 + c2 * c3 * s1;
		Result[1][3] = static_cast<_Ty>(0);
		Result[2][0] = s2 * s3;
		Result[2][1] =-c3 * s1 - c1 * c2 * s3;
		Result[2][2] = c1 * c3 - c2 * s1 * s3;
		Result[2][3] = static_cast<_Ty>(0);
		Result[3][0] = static_cast<_Ty>(0);
		Result[3][1] = static_cast<_Ty>(0);
		Result[3][2] = static_cast<_Ty>(0);
		Result[3][3] = static_cast<_Ty>(1);
		return Result;
	}

	template <typename _Ty>
	GLM_FUNC_QUALIFIER mat<4, 4, _Ty, defaultp> eulerAngleXYX
	(
		_Ty const & t1,
		_Ty const & t2,
		_Ty const & t3
	)
	{
		_Ty c1 = glm::cos(t1);
		_Ty s1 = glm::sin(t1);
		_Ty c2 = glm::cos(t2);
		_Ty s2 = glm::sin(t2);
		_Ty c3 = glm::cos(t3);
		_Ty s3 = glm::sin(t3);

		mat<4, 4, _Ty, defaultp> Result;
		Result[0][0] = c2;
		Result[0][1] = s1 * s2;
		Result[0][2] =-c1 * s2;
		Result[0][3] = static_cast<_Ty>(0);
		Result[1][0] = s2 * s3;
		Result[1][1] = c1 * c3 - c2 * s1 * s3;
		Result[1][2] = c3 * s1 + c1 * c2 * s3;
		Result[1][3] = static_cast<_Ty>(0);
		Result[2][0] = c3 * s2;
		Result[2][1] =-c1 * s3 - c2 * c3 * s1;
		Result[2][2] = c1 * c2 * c3 - s1 * s3;
		Result[2][3] = static_cast<_Ty>(0);
		Result[3][0] = static_cast<_Ty>(0);
		Result[3][1] = static_cast<_Ty>(0);
		Result[3][2] = static_cast<_Ty>(0);
		Result[3][3] = static_cast<_Ty>(1);
		return Result;
	}

	template <typename _Ty>
	GLM_FUNC_QUALIFIER mat<4, 4, _Ty, defaultp> eulerAngleYXY
	(
		_Ty const & t1,
		_Ty const & t2,
		_Ty const & t3
	)
	{
		_Ty c1 = glm::cos(t1);
		_Ty s1 = glm::sin(t1);
		_Ty c2 = glm::cos(t2);
		_Ty s2 = glm::sin(t2);
		_Ty c3 = glm::cos(t3);
		_Ty s3 = glm::sin(t3);

		mat<4, 4, _Ty, defaultp> Result;
		Result[0][0] = c1 * c3 - c2 * s1 * s3;
		Result[0][1] = s2* s3;
		Result[0][2] =-c3 * s1 - c1 * c2 * s3;
		Result[0][3] = static_cast<_Ty>(0);
		Result[1][0] = s1 * s2;
		Result[1][1] = c2;
		Result[1][2] = c1 * s2;
		Result[1][3] = static_cast<_Ty>(0);
		Result[2][0] = c1 * s3 + c2 * c3 * s1;
		Result[2][1] =-c3 * s2;
		Result[2][2] = c1 * c2 * c3 - s1 * s3;
		Result[2][3] = static_cast<_Ty>(0);
		Result[3][0] = static_cast<_Ty>(0);
		Result[3][1] = static_cast<_Ty>(0);
		Result[3][2] = static_cast<_Ty>(0);
		Result[3][3] = static_cast<_Ty>(1);
		return Result;
	}

	template <typename _Ty>
	GLM_FUNC_QUALIFIER mat<4, 4, _Ty, defaultp> eulerAngleYZY
	(
		_Ty const & t1,
		_Ty const & t2,
		_Ty const & t3
	)
	{
		_Ty c1 = glm::cos(t1);
		_Ty s1 = glm::sin(t1);
		_Ty c2 = glm::cos(t2);
		_Ty s2 = glm::sin(t2);
		_Ty c3 = glm::cos(t3);
		_Ty s3 = glm::sin(t3);

		mat<4, 4, _Ty, defaultp> Result;
		Result[0][0] = c1 * c2 * c3 - s1 * s3;
		Result[0][1] = c3 * s2;
		Result[0][2] =-c1 * s3 - c2 * c3 * s1;
		Result[0][3] = static_cast<_Ty>(0);
		Result[1][0] =-c1 * s2;
		Result[1][1] = c2;
		Result[1][2] = s1 * s2;
		Result[1][3] = static_cast<_Ty>(0);
		Result[2][0] = c3 * s1 + c1 * c2 * s3;
		Result[2][1] = s2 * s3;
		Result[2][2] = c1 * c3 - c2 * s1 * s3;
		Result[2][3] = static_cast<_Ty>(0);
		Result[3][0] = static_cast<_Ty>(0);
		Result[3][1] = static_cast<_Ty>(0);
		Result[3][2] = static_cast<_Ty>(0);
		Result[3][3] = static_cast<_Ty>(1);
		return Result;
	}

	template <typename _Ty>
	GLM_FUNC_QUALIFIER mat<4, 4, _Ty, defaultp> eulerAngleZYZ
	(
		_Ty const & t1,
		_Ty const & t2,
		_Ty const & t3
	)
	{
		_Ty c1 = glm::cos(t1);
		_Ty s1 = glm::sin(t1);
		_Ty c2 = glm::cos(t2);
		_Ty s2 = glm::sin(t2);
		_Ty c3 = glm::cos(t3);
		_Ty s3 = glm::sin(t3);

		mat<4, 4, _Ty, defaultp> Result;
		Result[0][0] = c1 * c2 * c3 - s1 * s3;
		Result[0][1] = c1 * s3 + c2 * c3 * s1;
		Result[0][2] =-c3 * s2;
		Result[0][3] = static_cast<_Ty>(0);
		Result[1][0] =-c3 * s1 - c1 * c2 * s3;
		Result[1][1] = c1 * c3 - c2 * s1 * s3;
		Result[1][2] = s2 * s3;
		Result[1][3] = static_cast<_Ty>(0);
		Result[2][0] = c1 * s2;
		Result[2][1] = s1 * s2;
		Result[2][2] = c2;
		Result[2][3] = static_cast<_Ty>(0);
		Result[3][0] = static_cast<_Ty>(0);
		Result[3][1] = static_cast<_Ty>(0);
		Result[3][2] = static_cast<_Ty>(0);
		Result[3][3] = static_cast<_Ty>(1);
		return Result;
	}

	template <typename _Ty>
	GLM_FUNC_QUALIFIER mat<4, 4, _Ty, defaultp> eulerAngleZXZ
	(
		_Ty const & t1,
		_Ty const & t2,
		_Ty const & t3
	)
	{
		_Ty c1 = glm::cos(t1);
		_Ty s1 = glm::sin(t1);
		_Ty c2 = glm::cos(t2);
		_Ty s2 = glm::sin(t2);
		_Ty c3 = glm::cos(t3);
		_Ty s3 = glm::sin(t3);

		mat<4, 4, _Ty, defaultp> Result;
		Result[0][0] = c1 * c3 - c2 * s1 * s3;
		Result[0][1] = c3 * s1 + c1 * c2 * s3;
		Result[0][2] = s2 *s3;
		Result[0][3] = static_cast<_Ty>(0);
		Result[1][0] =-c1 * s3 - c2 * c3 * s1;
		Result[1][1] = c1 * c2 * c3 - s1 * s3;
		Result[1][2] = c3 * s2;
		Result[1][3] = static_cast<_Ty>(0);
		Result[2][0] = s1 * s2;
		Result[2][1] =-c1 * s2;
		Result[2][2] = c2;
		Result[2][3] = static_cast<_Ty>(0);
		Result[3][0] = static_cast<_Ty>(0);
		Result[3][1] = static_cast<_Ty>(0);
		Result[3][2] = static_cast<_Ty>(0);
		Result[3][3] = static_cast<_Ty>(1);
		return Result;
	}

	template <typename _Ty>
	GLM_FUNC_QUALIFIER mat<4, 4, _Ty, defaultp> eulerAngleXZY
	(
		_Ty const & t1,
		_Ty const & t2,
		_Ty const & t3
	)
	{
		_Ty c1 = glm::cos(t1);
		_Ty s1 = glm::sin(t1);
		_Ty c2 = glm::cos(t2);
		_Ty s2 = glm::sin(t2);
		_Ty c3 = glm::cos(t3);
		_Ty s3 = glm::sin(t3);

		mat<4, 4, _Ty, defaultp> Result;
		Result[0][0] = c2 * c3;
		Result[0][1] = s1 * s3 + c1 * c3 * s2;
		Result[0][2] = c3 * s1 * s2 - c1 * s3;
		Result[0][3] = static_cast<_Ty>(0);
		Result[1][0] =-s2;
		Result[1][1] = c1 * c2;
		Result[1][2] = c2 * s1;
		Result[1][3] = static_cast<_Ty>(0);
		Result[2][0] = c2 * s3;
		Result[2][1] = c1 * s2 * s3 - c3 * s1;
		Result[2][2] = c1 * c3 + s1 * s2 *s3;
		Result[2][3] = static_cast<_Ty>(0);
		Result[3][0] = static_cast<_Ty>(0);
		Result[3][1] = static_cast<_Ty>(0);
		Result[3][2] = static_cast<_Ty>(0);
		Result[3][3] = static_cast<_Ty>(1);
		return Result;
	}

	template <typename _Ty>
	GLM_FUNC_QUALIFIER mat<4, 4, _Ty, defaultp> eulerAngleYZX
	(
		_Ty const & t1,
		_Ty const & t2,
		_Ty const & t3
	)
	{
		_Ty c1 = glm::cos(t1);
		_Ty s1 = glm::sin(t1);
		_Ty c2 = glm::cos(t2);
		_Ty s2 = glm::sin(t2);
		_Ty c3 = glm::cos(t3);
		_Ty s3 = glm::sin(t3);

		mat<4, 4, _Ty, defaultp> Result;
		Result[0][0] = c1 * c2;
		Result[0][1] = s2;
		Result[0][2] =-c2 * s1;
		Result[0][3] = static_cast<_Ty>(0);
		Result[1][0] = s1 * s3 - c1 * c3 * s2;
		Result[1][1] = c2 * c3;
		Result[1][2] = c1 * s3 + c3 * s1 * s2;
		Result[1][3] = static_cast<_Ty>(0);
		Result[2][0] = c3 * s1 + c1 * s2 * s3;
		Result[2][1] =-c2 * s3;
		Result[2][2] = c1 * c3 - s1 * s2 * s3;
		Result[2][3] = static_cast<_Ty>(0);
		Result[3][0] = static_cast<_Ty>(0);
		Result[3][1] = static_cast<_Ty>(0);
		Result[3][2] = static_cast<_Ty>(0);
		Result[3][3] = static_cast<_Ty>(1);
		return Result;
	}

	template <typename _Ty>
	GLM_FUNC_QUALIFIER mat<4, 4, _Ty, defaultp> eulerAngleZYX
	(
		_Ty const & t1,
		_Ty const & t2,
		_Ty const & t3
	)
	{
		_Ty c1 = glm::cos(t1);
		_Ty s1 = glm::sin(t1);
		_Ty c2 = glm::cos(t2);
		_Ty s2 = glm::sin(t2);
		_Ty c3 = glm::cos(t3);
		_Ty s3 = glm::sin(t3);

		mat<4, 4, _Ty, defaultp> Result;
		Result[0][0] = c1 * c2;
		Result[0][1] = c2 * s1;
		Result[0][2] =-s2;
		Result[0][3] = static_cast<_Ty>(0);
		Result[1][0] = c1 * s2 * s3 - c3 * s1;
		Result[1][1] = c1 * c3 + s1 * s2 * s3;
		Result[1][2] = c2 * s3;
		Result[1][3] = static_cast<_Ty>(0);
		Result[2][0] = s1 * s3 + c1 * c3 * s2;
		Result[2][1] = c3 * s1 * s2 - c1 * s3;
		Result[2][2] = c2 * c3;
		Result[2][3] = static_cast<_Ty>(0);
		Result[3][0] = static_cast<_Ty>(0);
		Result[3][1] = static_cast<_Ty>(0);
		Result[3][2] = static_cast<_Ty>(0);
		Result[3][3] = static_cast<_Ty>(1);
		return Result;
	}

	template <typename _Ty>
	GLM_FUNC_QUALIFIER mat<4, 4, _Ty, defaultp> eulerAngleZXY
	(
		_Ty const & t1,
		_Ty const & t2,
		_Ty const & t3
	)
	{
		_Ty c1 = glm::cos(t1);
		_Ty s1 = glm::sin(t1);
		_Ty c2 = glm::cos(t2);
		_Ty s2 = glm::sin(t2);
		_Ty c3 = glm::cos(t3);
		_Ty s3 = glm::sin(t3);

		mat<4, 4, _Ty, defaultp> Result;
		Result[0][0] = c1 * c3 - s1 * s2 * s3;
		Result[0][1] = c3 * s1 + c1 * s2 * s3;
		Result[0][2] =-c2 * s3;
		Result[0][3] = static_cast<_Ty>(0);
		Result[1][0] =-c2 * s1;
		Result[1][1] = c1 * c2;
		Result[1][2] = s2;
		Result[1][3] = static_cast<_Ty>(0);
		Result[2][0] = c1 * s3 + c3 * s1 * s2;
		Result[2][1] = s1 * s3 - c1 * c3 * s2;
		Result[2][2] = c2 * c3;
		Result[2][3] = static_cast<_Ty>(0);
		Result[3][0] = static_cast<_Ty>(0);
		Result[3][1] = static_cast<_Ty>(0);
		Result[3][2] = static_cast<_Ty>(0);
		Result[3][3] = static_cast<_Ty>(1);
		return Result;
	}

	template<typename _Ty>
	GLM_FUNC_QUALIFIER mat<4, 4, _Ty, defaultp> yawPitchRoll
	(
		_Ty const& yaw,
		_Ty const& pitch,
		_Ty const& roll
	)
	{
		_Ty tmp_ch = glm::cos(yaw);
		_Ty tmp_sh = glm::sin(yaw);
		_Ty tmp_cp = glm::cos(pitch);
		_Ty tmp_sp = glm::sin(pitch);
		_Ty tmp_cb = glm::cos(roll);
		_Ty tmp_sb = glm::sin(roll);

		mat<4, 4, _Ty, defaultp> Result;
		Result[0][0] = tmp_ch * tmp_cb + tmp_sh * tmp_sp * tmp_sb;
		Result[0][1] = tmp_sb * tmp_cp;
		Result[0][2] = -tmp_sh * tmp_cb + tmp_ch * tmp_sp * tmp_sb;
		Result[0][3] = static_cast<_Ty>(0);
		Result[1][0] = -tmp_ch * tmp_sb + tmp_sh * tmp_sp * tmp_cb;
		Result[1][1] = tmp_cb * tmp_cp;
		Result[1][2] = tmp_sb * tmp_sh + tmp_ch * tmp_sp * tmp_cb;
		Result[1][3] = static_cast<_Ty>(0);
		Result[2][0] = tmp_sh * tmp_cp;
		Result[2][1] = -tmp_sp;
		Result[2][2] = tmp_ch * tmp_cp;
		Result[2][3] = static_cast<_Ty>(0);
		Result[3][0] = static_cast<_Ty>(0);
		Result[3][1] = static_cast<_Ty>(0);
		Result[3][2] = static_cast<_Ty>(0);
		Result[3][3] = static_cast<_Ty>(1);
		return Result;
	}

	template<typename _Ty>
	GLM_FUNC_QUALIFIER mat<2, 2, _Ty, defaultp> orientate2
	(
		_Ty const& angle
	)
	{
		_Ty c = glm::cos(angle);
		_Ty s = glm::sin(angle);

		mat<2, 2, _Ty, defaultp> Result;
		Result[0][0] = c;
		Result[0][1] = s;
		Result[1][0] = -s;
		Result[1][1] = c;
		return Result;
	}

	template<typename _Ty>
	GLM_FUNC_QUALIFIER mat<3, 3, _Ty, defaultp> orientate3
	(
		_Ty const& angle
	)
	{
		_Ty c = glm::cos(angle);
		_Ty s = glm::sin(angle);

		mat<3, 3, _Ty, defaultp> Result;
		Result[0][0] = c;
		Result[0][1] = s;
		Result[0][2] = _Ty(0.0);
		Result[1][0] = -s;
		Result[1][1] = c;
		Result[1][2] = _Ty(0.0);
		Result[2][0] = _Ty(0.0);
		Result[2][1] = _Ty(0.0);
		Result[2][2] = _Ty(1.0);
		return Result;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER mat<3, 3, _Ty, Q> orientate3
	(
		vec<3, _Ty, Q> const& angles
	)
	{
		return mat<3, 3, _Ty, Q>(yawPitchRoll(angles.z, angles.x, angles.y));
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER mat<4, 4, _Ty, Q> orientate4
	(
		vec<3, _Ty, Q> const& angles
	)
	{
		return yawPitchRoll(angles.z, angles.x, angles.y);
	}

    template<typename _Ty>
    GLM_FUNC_DECL void extractEulerAngleXYZ(mat<4, 4, _Ty, defaultp> const& M,
                                            _Ty & t1,
                                            _Ty & t2,
                                            _Ty & t3)
    {
        _Ty T1 = glm::atan2(M[2][1], M[2][2]);
        _Ty C2 = glm::sqrt(M[0][0]*M[0][0] + M[1][0]*M[1][0]);
        _Ty T2 = glm::atan2(-M[2][0], C2);
        _Ty S1 = glm::sin(T1);
        _Ty C1 = glm::cos(T1);
        _Ty T3 = glm::atan2(S1*M[0][2] - C1*M[0][1], C1*M[1][1] - S1*M[1][2  ]);
        t1 = -T1;
        t2 = -T2;
        t3 = -T3;
    }

	template <typename _Ty>
	GLM_FUNC_QUALIFIER void extractEulerAngleYXZ(mat<4, 4, _Ty, defaultp> const & M,
												 _Ty & t1,
												 _Ty & t2,
												 _Ty & t3)
	{
		_Ty T1 = glm::atan2(M[2][0], M[2][2]);
		_Ty C2 = glm::sqrt(M[0][1]*M[0][1] + M[1][1]*M[1][1]);
		_Ty T2 = glm::atan2(-M[2][1], C2);
		_Ty S1 = glm::sin(T1);
		_Ty C1 = glm::cos(T1);
		_Ty T3 = glm::atan2(S1*M[1][2] - C1*M[1][0], C1*M[0][0] - S1*M[0][2]);
		t1 = T1;
		t2 = T2;
		t3 = T3;
	}

	template <typename _Ty>
	GLM_FUNC_QUALIFIER void extractEulerAngleXZX(mat<4, 4, _Ty, defaultp> const & M,
												 _Ty & t1,
												 _Ty & t2,
												 _Ty & t3)
	{
		_Ty T1 = glm::atan2(M[0][2], M[0][1]);
		_Ty S2 = glm::sqrt(M[1][0]*M[1][0] + M[2][0]*M[2][0]);
		_Ty T2 = glm::atan2(S2, M[0][0]);
		_Ty S1 = glm::sin(T1);
		_Ty C1 = glm::cos(T1);
		_Ty T3 = glm::atan2(C1*M[1][2] - S1*M[1][1], C1*M[2][2] - S1*M[2][1]);
		t1 = T1;
		t2 = T2;
		t3 = T3;
	}

	template <typename _Ty>
	GLM_FUNC_QUALIFIER void extractEulerAngleXYX(mat<4, 4, _Ty, defaultp> const & M,
												 _Ty & t1,
												 _Ty & t2,
												 _Ty & t3)
	{
		_Ty T1 = glm::atan2(M[0][1], -M[0][2]);
		_Ty S2 = glm::sqrt(M[1][0]*M[1][0] + M[2][0]*M[2][0]);
		_Ty T2 = glm::atan2(S2, M[0][0]);
		_Ty S1 = glm::sin(T1);
		_Ty C1 = glm::cos(T1);
		_Ty T3 = glm::atan2(-C1*M[2][1] - S1*M[2][2], C1*M[1][1] + S1*M[1][2]);
		t1 = T1;
		t2 = T2;
		t3 = T3;
	}

	template <typename _Ty>
	GLM_FUNC_QUALIFIER void extractEulerAngleYXY(mat<4, 4, _Ty, defaultp> const & M,
												 _Ty & t1,
												 _Ty & t2,
												 _Ty & t3)
	{
		_Ty T1 = glm::atan2(M[1][0], M[1][2]);
		_Ty S2 = glm::sqrt(M[0][1]*M[0][1] + M[2][1]*M[2][1]);
		_Ty T2 = glm::atan2(S2, M[1][1]);
		_Ty S1 = glm::sin(T1);
		_Ty C1 = glm::cos(T1);
		_Ty T3 = glm::atan2(C1*M[2][0] - S1*M[2][2], C1*M[0][0] - S1*M[0][2]);
		t1 = T1;
		t2 = T2;
		t3 = T3;
	}

	template <typename _Ty>
	GLM_FUNC_QUALIFIER void extractEulerAngleYZY(mat<4, 4, _Ty, defaultp> const & M,
												 _Ty & t1,
												 _Ty & t2,
												 _Ty & t3)
	{
		_Ty T1 = glm::atan2(M[1][2], -M[1][0]);
		_Ty S2 = glm::sqrt(M[0][1]*M[0][1] + M[2][1]*M[2][1]);
		_Ty T2 = glm::atan2(S2, M[1][1]);
		_Ty S1 = glm::sin(T1);
		_Ty C1 = glm::cos(T1);
		_Ty T3 = glm::atan2(-S1*M[0][0] - C1*M[0][2], S1*M[2][0] + C1*M[2][2]);
		t1 = T1;
		t2 = T2;
		t3 = T3;
	}

	template <typename _Ty>
	GLM_FUNC_QUALIFIER void extractEulerAngleZYZ(mat<4, 4, _Ty, defaultp> const & M,
												 _Ty & t1,
												 _Ty & t2,
												 _Ty & t3)
	{
		_Ty T1 = glm::atan2(M[2][1], M[2][0]);
		_Ty S2 = glm::sqrt(M[0][2]*M[0][2] + M[1][2]*M[1][2]);
		_Ty T2 = glm::atan2(S2, M[2][2]);
		_Ty S1 = glm::sin(T1);
		_Ty C1 = glm::cos(T1);
		_Ty T3 = glm::atan2(C1*M[0][1] - S1*M[0][0], C1*M[1][1] - S1*M[1][0]);
		t1 = T1;
		t2 = T2;
		t3 = T3;
	}

	template <typename _Ty>
	GLM_FUNC_QUALIFIER void extractEulerAngleZXZ(mat<4, 4, _Ty, defaultp> const & M,
												 _Ty & t1,
												 _Ty & t2,
												 _Ty & t3)
	{
		_Ty T1 = glm::atan2(M[2][0], -M[2][1]);
		_Ty S2 = glm::sqrt(M[0][2]*M[0][2] + M[1][2]*M[1][2]);
		_Ty T2 = glm::atan2(S2, M[2][2]);
		_Ty S1 = glm::sin(T1);
		_Ty C1 = glm::cos(T1);
		_Ty T3 = glm::atan2(-C1*M[1][0] - S1*M[1][1], C1*M[0][0] + S1*M[0][1]);
		t1 = T1;
		t2 = T2;
		t3 = T3;
	}

	template <typename _Ty>
	GLM_FUNC_QUALIFIER void extractEulerAngleXZY(mat<4, 4, _Ty, defaultp> const & M,
												 _Ty & t1,
												 _Ty & t2,
												 _Ty & t3)
	{
		_Ty T1 = glm::atan2(M[1][2], M[1][1]);
		_Ty C2 = glm::sqrt(M[0][0]*M[0][0] + M[2][0]*M[2][0]);
		_Ty T2 = glm::atan2(-M[1][0], C2);
		_Ty S1 = glm::sin(T1);
		_Ty C1 = glm::cos(T1);
		_Ty T3 = glm::atan2(S1*M[0][1] - C1*M[0][2], C1*M[2][2] - S1*M[2][1]);
		t1 = T1;
		t2 = T2;
		t3 = T3;
	}

	template <typename _Ty>
	GLM_FUNC_QUALIFIER void extractEulerAngleYZX(mat<4, 4, _Ty, defaultp> const & M,
												 _Ty & t1,
												 _Ty & t2,
												 _Ty & t3)
	{
		_Ty T1 = glm::atan2(-M[0][2], M[0][0]);
		_Ty C2 = glm::sqrt(M[1][1]*M[1][1] + M[2][1]*M[2][1]);
		_Ty T2 = glm::atan2(M[0][1], C2);
		_Ty S1 = glm::sin(T1);
		_Ty C1 = glm::cos(T1);
		_Ty T3 = glm::atan2(S1*M[1][0] + C1*M[1][2], S1*M[2][0] + C1*M[2][2]);
		t1 = T1;
		t2 = T2;
		t3 = T3;
	}

	template <typename _Ty>
	GLM_FUNC_QUALIFIER void extractEulerAngleZYX(mat<4, 4, _Ty, defaultp> const & M,
												 _Ty & t1,
												 _Ty & t2,
												 _Ty & t3)
	{
		_Ty T1 = glm::atan2(M[0][1], M[0][0]);
		_Ty C2 = glm::sqrt(M[1][2]*M[1][2] + M[2][2]*M[2][2]);
		_Ty T2 = glm::atan2(-M[0][2], C2);
		_Ty S1 = glm::sin(T1);
		_Ty C1 = glm::cos(T1);
		_Ty T3 = glm::atan2(S1*M[2][0] - C1*M[2][1], C1*M[1][1] - S1*M[1][0]);
		t1 = T1;
		t2 = T2;
		t3 = T3;
	}

	template <typename _Ty>
	GLM_FUNC_QUALIFIER void extractEulerAngleZXY(mat<4, 4, _Ty, defaultp> const & M,
												 _Ty & t1,
												 _Ty & t2,
												 _Ty & t3)
	{
		_Ty T1 = glm::atan2(-M[1][0], M[1][1]);
		_Ty C2 = glm::sqrt(M[0][2]*M[0][2] + M[2][2]*M[2][2]);
		_Ty T2 = glm::atan2(M[1][2], C2);
		_Ty S1 = glm::sin(T1);
		_Ty C1 = glm::cos(T1);
		_Ty T3 = glm::atan2(C1*M[2][0] + S1*M[2][1], C1*M[0][0] + S1*M[0][1]);
		t1 = T1;
		t2 = T2;
		t3 = T3;
	}
}//namespace glm
