/// @ref gtx_euler_angles
/// @file glm/gtx/euler_angles.hpp
///
/// @see core (dependence)
///
/// @defgroup gtx_euler_angles GLM_GTX_euler_angles
/// @ingroup gtx
///
/// Include <glm/gtx/euler_angles.hpp> to use the features of this extension.
///
/// Build matrices from Euler angles.
///
/// Extraction of Euler angles from rotation matrix.
/// Based on the original paper 2014 Mike Day - Extracting Euler Angles from a Rotation Matrix.

#pragma once

// Dependency:
#include "../glm.hpp"

#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	ifndef GLM_ENABLE_EXPERIMENTAL
#		pragma message("GLM: GLM_GTX_euler_angles is an experimental extension and may change in the future. Use #define GLM_ENABLE_EXPERIMENTAL before including it, if you really want to use it.")
#	else
#		pragma message("GLM: GLM_GTX_euler_angles extension included")
#	endif
#endif

namespace glm
{
	/// @addtogroup gtx_euler_angles
	/// @{

	/// Creates a 3D 4 * 4 homogeneous rotation matrix from an euler angle X.
	/// @see gtx_euler_angles
	template<typename _Ty>
	GLM_FUNC_DECL mat<4, 4, _Ty, defaultp> eulerAngleX(
		_Ty const& angleX);

	/// Creates a 3D 4 * 4 homogeneous rotation matrix from an euler angle Y.
	/// @see gtx_euler_angles
	template<typename _Ty>
	GLM_FUNC_DECL mat<4, 4, _Ty, defaultp> eulerAngleY(
		_Ty const& angleY);

	/// Creates a 3D 4 * 4 homogeneous rotation matrix from an euler angle Z.
	/// @see gtx_euler_angles
	template<typename _Ty>
	GLM_FUNC_DECL mat<4, 4, _Ty, defaultp> eulerAngleZ(
		_Ty const& angleZ);

	/// Creates a 3D 4 * 4 homogeneous derived matrix from the rotation matrix about X-axis.
	/// @see gtx_euler_angles
	template <typename _Ty>
	GLM_FUNC_DECL mat<4, 4, _Ty, defaultp> derivedEulerAngleX(
		_Ty const & angleX, _Ty const & angularVelocityX);

	/// Creates a 3D 4 * 4 homogeneous derived matrix from the rotation matrix about Y-axis.
	/// @see gtx_euler_angles
	template <typename _Ty>
	GLM_FUNC_DECL mat<4, 4, _Ty, defaultp> derivedEulerAngleY(
		_Ty const & angleY, _Ty const & angularVelocityY);

	/// Creates a 3D 4 * 4 homogeneous derived matrix from the rotation matrix about Z-axis.
	/// @see gtx_euler_angles
	template <typename _Ty>
	GLM_FUNC_DECL mat<4, 4, _Ty, defaultp> derivedEulerAngleZ(
		_Ty const & angleZ, _Ty const & angularVelocityZ);

	/// Creates a 3D 4 * 4 homogeneous rotation matrix from euler angles (X * Y).
	/// @see gtx_euler_angles
	template<typename _Ty>
	GLM_FUNC_DECL mat<4, 4, _Ty, defaultp> eulerAngleXY(
		_Ty const& angleX,
		_Ty const& angleY);

	/// Creates a 3D 4 * 4 homogeneous rotation matrix from euler angles (Y * X).
	/// @see gtx_euler_angles
	template<typename _Ty>
	GLM_FUNC_DECL mat<4, 4, _Ty, defaultp> eulerAngleYX(
		_Ty const& angleY,
		_Ty const& angleX);

	/// Creates a 3D 4 * 4 homogeneous rotation matrix from euler angles (X * Z).
	/// @see gtx_euler_angles
	template<typename _Ty>
	GLM_FUNC_DECL mat<4, 4, _Ty, defaultp> eulerAngleXZ(
		_Ty const& angleX,
		_Ty const& angleZ);

	/// Creates a 3D 4 * 4 homogeneous rotation matrix from euler angles (Z * X).
	/// @see gtx_euler_angles
	template<typename _Ty>
	GLM_FUNC_DECL mat<4, 4, _Ty, defaultp> eulerAngleZX(
		_Ty const& angle,
		_Ty const& angleX);

	/// Creates a 3D 4 * 4 homogeneous rotation matrix from euler angles (Y * Z).
	/// @see gtx_euler_angles
	template<typename _Ty>
	GLM_FUNC_DECL mat<4, 4, _Ty, defaultp> eulerAngleYZ(
		_Ty const& angleY,
		_Ty const& angleZ);

	/// Creates a 3D 4 * 4 homogeneous rotation matrix from euler angles (Z * Y).
	/// @see gtx_euler_angles
	template<typename _Ty>
	GLM_FUNC_DECL mat<4, 4, _Ty, defaultp> eulerAngleZY(
		_Ty const& angleZ,
		_Ty const& angleY);

    /// Creates a 3D 4 * 4 homogeneous rotation matrix from euler angles (X * Y * Z).
    /// @see gtx_euler_angles
    template<typename _Ty>
    GLM_FUNC_DECL mat<4, 4, _Ty, defaultp> eulerAngleXYZ(
        _Ty const& t1,
        _Ty const& t2,
        _Ty const& t3);

	/// Creates a 3D 4 * 4 homogeneous rotation matrix from euler angles (Y * X * Z).
	/// @see gtx_euler_angles
	template<typename _Ty>
	GLM_FUNC_DECL mat<4, 4, _Ty, defaultp> eulerAngleYXZ(
		_Ty const& yaw,
		_Ty const& pitch,
		_Ty const& roll);

	/// Creates a 3D 4 * 4 homogeneous rotation matrix from euler angles (X * Z * X).
	/// @see gtx_euler_angles
	template <typename _Ty>
	GLM_FUNC_DECL mat<4, 4, _Ty, defaultp> eulerAngleXZX(
		_Ty const & t1,
		_Ty const & t2,
		_Ty const & t3);

	/// Creates a 3D 4 * 4 homogeneous rotation matrix from euler angles (X * Y * X).
	/// @see gtx_euler_angles
	template <typename _Ty>
	GLM_FUNC_DECL mat<4, 4, _Ty, defaultp> eulerAngleXYX(
		_Ty const & t1,
		_Ty const & t2,
		_Ty const & t3);

	/// Creates a 3D 4 * 4 homogeneous rotation matrix from euler angles (Y * X * Y).
	/// @see gtx_euler_angles
	template <typename _Ty>
	GLM_FUNC_DECL mat<4, 4, _Ty, defaultp> eulerAngleYXY(
		_Ty const & t1,
		_Ty const & t2,
		_Ty const & t3);

	/// Creates a 3D 4 * 4 homogeneous rotation matrix from euler angles (Y * Z * Y).
	/// @see gtx_euler_angles
	template <typename _Ty>
	GLM_FUNC_DECL mat<4, 4, _Ty, defaultp> eulerAngleYZY(
		_Ty const & t1,
		_Ty const & t2,
		_Ty const & t3);

	/// Creates a 3D 4 * 4 homogeneous rotation matrix from euler angles (Z * Y * Z).
	/// @see gtx_euler_angles
	template <typename _Ty>
	GLM_FUNC_DECL mat<4, 4, _Ty, defaultp> eulerAngleZYZ(
		_Ty const & t1,
		_Ty const & t2,
		_Ty const & t3);

	/// Creates a 3D 4 * 4 homogeneous rotation matrix from euler angles (Z * X * Z).
	/// @see gtx_euler_angles
	template <typename _Ty>
	GLM_FUNC_DECL mat<4, 4, _Ty, defaultp> eulerAngleZXZ(
		_Ty const & t1,
		_Ty const & t2,
		_Ty const & t3);

	/// Creates a 3D 4 * 4 homogeneous rotation matrix from euler angles (X * Z * Y).
	/// @see gtx_euler_angles
	template <typename _Ty>
	GLM_FUNC_DECL mat<4, 4, _Ty, defaultp> eulerAngleXZY(
		_Ty const & t1,
		_Ty const & t2,
		_Ty const & t3);

	/// Creates a 3D 4 * 4 homogeneous rotation matrix from euler angles (Y * Z * X).
	/// @see gtx_euler_angles
	template <typename _Ty>
	GLM_FUNC_DECL mat<4, 4, _Ty, defaultp> eulerAngleYZX(
		_Ty const & t1,
		_Ty const & t2,
		_Ty const & t3);

	/// Creates a 3D 4 * 4 homogeneous rotation matrix from euler angles (Z * Y * X).
	/// @see gtx_euler_angles
	template <typename _Ty>
	GLM_FUNC_DECL mat<4, 4, _Ty, defaultp> eulerAngleZYX(
		_Ty const & t1,
		_Ty const & t2,
		_Ty const & t3);

	/// Creates a 3D 4 * 4 homogeneous rotation matrix from euler angles (Z * X * Y).
	/// @see gtx_euler_angles
	template <typename _Ty>
	GLM_FUNC_DECL mat<4, 4, _Ty, defaultp> eulerAngleZXY(
		_Ty const & t1,
		_Ty const & t2,
		_Ty const & t3);

	/// Creates a 3D 4 * 4 homogeneous rotation matrix from euler angles (Y * X * Z).
	/// @see gtx_euler_angles
	template<typename _Ty>
	GLM_FUNC_DECL mat<4, 4, _Ty, defaultp> yawPitchRoll(
		_Ty const& yaw,
		_Ty const& pitch,
		_Ty const& roll);

	/// Creates a 2D 2 * 2 rotation matrix from an euler angle.
	/// @see gtx_euler_angles
	template<typename _Ty>
	GLM_FUNC_DECL mat<2, 2, _Ty, defaultp> orientate2(_Ty const& angle);

	/// Creates a 2D 4 * 4 homogeneous rotation matrix from an euler angle.
	/// @see gtx_euler_angles
	template<typename _Ty>
	GLM_FUNC_DECL mat<3, 3, _Ty, defaultp> orientate3(_Ty const& angle);

	/// Creates a 3D 3 * 3 rotation matrix from euler angles (Y * X * Z).
	/// @see gtx_euler_angles
	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL mat<3, 3, _Ty, Q> orientate3(vec<3, _Ty, Q> const& angles);

	/// Creates a 3D 4 * 4 homogeneous rotation matrix from euler angles (Y * X * Z).
	/// @see gtx_euler_angles
	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL mat<4, 4, _Ty, Q> orientate4(vec<3, _Ty, Q> const& angles);

    /// Extracts the (X * Y * Z) Euler angles from the rotation matrix M
    /// @see gtx_euler_angles
    template<typename _Ty>
    GLM_FUNC_DECL void extractEulerAngleXYZ(mat<4, 4, _Ty, defaultp> const& M,
                                            _Ty & t1,
                                            _Ty & t2,
                                            _Ty & t3);

	/// Extracts the (Y * X * Z) Euler angles from the rotation matrix M
	/// @see gtx_euler_angles
	template <typename _Ty>
	GLM_FUNC_DECL void extractEulerAngleYXZ(mat<4, 4, _Ty, defaultp> const & M,
											_Ty & t1,
											_Ty & t2,
											_Ty & t3);

	/// Extracts the (X * Z * X) Euler angles from the rotation matrix M
	/// @see gtx_euler_angles
	template <typename _Ty>
	GLM_FUNC_DECL void extractEulerAngleXZX(mat<4, 4, _Ty, defaultp> const & M,
											_Ty & t1,
											_Ty & t2,
											_Ty & t3);

	/// Extracts the (X * Y * X) Euler angles from the rotation matrix M
	/// @see gtx_euler_angles
	template <typename _Ty>
	GLM_FUNC_DECL void extractEulerAngleXYX(mat<4, 4, _Ty, defaultp> const & M,
											_Ty & t1,
											_Ty & t2,
											_Ty & t3);

	/// Extracts the (Y * X * Y) Euler angles from the rotation matrix M
	/// @see gtx_euler_angles
	template <typename _Ty>
	GLM_FUNC_DECL void extractEulerAngleYXY(mat<4, 4, _Ty, defaultp> const & M,
											_Ty & t1,
											_Ty & t2,
											_Ty & t3);

	/// Extracts the (Y * Z * Y) Euler angles from the rotation matrix M
	/// @see gtx_euler_angles
	template <typename _Ty>
	GLM_FUNC_DECL void extractEulerAngleYZY(mat<4, 4, _Ty, defaultp> const & M,
											_Ty & t1,
											_Ty & t2,
											_Ty & t3);

	/// Extracts the (Z * Y * Z) Euler angles from the rotation matrix M
	/// @see gtx_euler_angles
	template <typename _Ty>
	GLM_FUNC_DECL void extractEulerAngleZYZ(mat<4, 4, _Ty, defaultp> const & M,
											_Ty & t1,
											_Ty & t2,
											_Ty & t3);

	/// Extracts the (Z * X * Z) Euler angles from the rotation matrix M
	/// @see gtx_euler_angles
	template <typename _Ty>
	GLM_FUNC_DECL void extractEulerAngleZXZ(mat<4, 4, _Ty, defaultp> const & M,
											_Ty & t1,
											_Ty & t2,
											_Ty & t3);

	/// Extracts the (X * Z * Y) Euler angles from the rotation matrix M
	/// @see gtx_euler_angles
	template <typename _Ty>
	GLM_FUNC_DECL void extractEulerAngleXZY(mat<4, 4, _Ty, defaultp> const & M,
											_Ty & t1,
											_Ty & t2,
											_Ty & t3);

	/// Extracts the (Y * Z * X) Euler angles from the rotation matrix M
	/// @see gtx_euler_angles
	template <typename _Ty>
	GLM_FUNC_DECL void extractEulerAngleYZX(mat<4, 4, _Ty, defaultp> const & M,
											_Ty & t1,
											_Ty & t2,
											_Ty & t3);

	/// Extracts the (Z * Y * X) Euler angles from the rotation matrix M
	/// @see gtx_euler_angles
	template <typename _Ty>
	GLM_FUNC_DECL void extractEulerAngleZYX(mat<4, 4, _Ty, defaultp> const & M,
											_Ty & t1,
											_Ty & t2,
											_Ty & t3);

	/// Extracts the (Z * X * Y) Euler angles from the rotation matrix M
	/// @see gtx_euler_angles
	template <typename _Ty>
	GLM_FUNC_DECL void extractEulerAngleZXY(mat<4, 4, _Ty, defaultp> const & M,
											_Ty & t1,
											_Ty & t2,
											_Ty & t3);

	/// @}
}//namespace glm

#include "euler_angles.inl"
