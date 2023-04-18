/// @ref gtx_matrix_transform_2d
/// @author Miguel Ángel Pérez Martínez

#include "../trigonometric.hpp"

namespace glm
{

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER mat<3, 3, _Ty, Q> translate(
		mat<3, 3, _Ty, Q> const& m,
		vec<2, _Ty, Q> const& v)
	{
		mat<3, 3, _Ty, Q> Result(m);
		Result[2] = m[0] * v[0] + m[1] * v[1] + m[2];
		return Result;
	}


	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER mat<3, 3, _Ty, Q> rotate(
		mat<3, 3, _Ty, Q> const& m,
		_Ty angle)
	{
		_Ty const a = angle;
		_Ty const c = cos(a);
		_Ty const s = sin(a);

		mat<3, 3, _Ty, Q> Result;
		Result[0] = m[0] * c + m[1] * s;
		Result[1] = m[0] * -s + m[1] * c;
		Result[2] = m[2];
		return Result;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER mat<3, 3, _Ty, Q> scale(
		mat<3, 3, _Ty, Q> const& m,
		vec<2, _Ty, Q> const& v)
	{
		mat<3, 3, _Ty, Q> Result;
		Result[0] = m[0] * v[0];
		Result[1] = m[1] * v[1];
		Result[2] = m[2];
		return Result;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER mat<3, 3, _Ty, Q> shearX(
		mat<3, 3, _Ty, Q> const& m,
		_Ty y)
	{
		mat<3, 3, _Ty, Q> Result(1);
		Result[0][1] = y;
		return m * Result;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER mat<3, 3, _Ty, Q> shearY(
		mat<3, 3, _Ty, Q> const& m,
		_Ty x)
	{
		mat<3, 3, _Ty, Q> Result(1);
		Result[1][0] = x;
		return m * Result;
	}

}//namespace glm
