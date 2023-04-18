/// @ref gtx_vec_swizzle
/// @file glm/gtx/vec_swizzle.hpp
///
/// @see core (dependence)
///
/// @defgroup gtx_vec_swizzle GLM_GTX_vec_swizzle
/// @ingroup gtx
///
/// Include <glm/gtx/vec_swizzle.hpp> to use the features of this extension.
///
/// Functions to perform swizzle operation.

#pragma once

#include "../glm.hpp"

#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	ifndef GLM_ENABLE_EXPERIMENTAL
#		pragma message("GLM: GLM_GTX_vec_swizzle is an experimental extension and may change in the future. Use #define GLM_ENABLE_EXPERIMENTAL before including it, if you really want to use it.")
#	else
#		pragma message("GLM: GLM_GTX_vec_swizzle extension included")
#	endif
#endif

namespace glm {
	/// @addtogroup gtx_vec_swizzle
	/// @{

	// xx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<2, _Ty, Q> xx(const glm::vec<1, _Ty, Q> &v) {
		return glm::vec<2, _Ty, Q>(v.x, v.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<2, _Ty, Q> xx(const glm::vec<2, _Ty, Q> &v) {
		return glm::vec<2, _Ty, Q>(v.x, v.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<2, _Ty, Q> xx(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<2, _Ty, Q>(v.x, v.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<2, _Ty, Q> xx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<2, _Ty, Q>(v.x, v.x);
	}

	// xy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<2, _Ty, Q> xy(const glm::vec<2, _Ty, Q> &v) {
		return glm::vec<2, _Ty, Q>(v.x, v.y);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<2, _Ty, Q> xy(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<2, _Ty, Q>(v.x, v.y);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<2, _Ty, Q> xy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<2, _Ty, Q>(v.x, v.y);
	}

	// xz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<2, _Ty, Q> xz(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<2, _Ty, Q>(v.x, v.z);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<2, _Ty, Q> xz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<2, _Ty, Q>(v.x, v.z);
	}

	// xw
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<2, _Ty, Q> xw(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<2, _Ty, Q>(v.x, v.w);
	}

	// yx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<2, _Ty, Q> yx(const glm::vec<2, _Ty, Q> &v) {
		return glm::vec<2, _Ty, Q>(v.y, v.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<2, _Ty, Q> yx(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<2, _Ty, Q>(v.y, v.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<2, _Ty, Q> yx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<2, _Ty, Q>(v.y, v.x);
	}

	// yy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<2, _Ty, Q> yy(const glm::vec<2, _Ty, Q> &v) {
		return glm::vec<2, _Ty, Q>(v.y, v.y);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<2, _Ty, Q> yy(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<2, _Ty, Q>(v.y, v.y);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<2, _Ty, Q> yy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<2, _Ty, Q>(v.y, v.y);
	}

	// yz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<2, _Ty, Q> yz(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<2, _Ty, Q>(v.y, v.z);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<2, _Ty, Q> yz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<2, _Ty, Q>(v.y, v.z);
	}

	// yw
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<2, _Ty, Q> yw(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<2, _Ty, Q>(v.y, v.w);
	}

	// zx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<2, _Ty, Q> zx(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<2, _Ty, Q>(v.z, v.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<2, _Ty, Q> zx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<2, _Ty, Q>(v.z, v.x);
	}

	// zy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<2, _Ty, Q> zy(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<2, _Ty, Q>(v.z, v.y);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<2, _Ty, Q> zy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<2, _Ty, Q>(v.z, v.y);
	}

	// zz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<2, _Ty, Q> zz(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<2, _Ty, Q>(v.z, v.z);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<2, _Ty, Q> zz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<2, _Ty, Q>(v.z, v.z);
	}

	// zw
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<2, _Ty, Q> zw(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<2, _Ty, Q>(v.z, v.w);
	}

	// wx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<2, _Ty, Q> wx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<2, _Ty, Q>(v.w, v.x);
	}

	// wy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<2, _Ty, Q> wy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<2, _Ty, Q>(v.w, v.y);
	}

	// wz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<2, _Ty, Q> wz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<2, _Ty, Q>(v.w, v.z);
	}

	// ww
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<2, _Ty, Q> ww(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<2, _Ty, Q>(v.w, v.w);
	}

	// xxx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> xxx(const glm::vec<1, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.x, v.x, v.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> xxx(const glm::vec<2, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.x, v.x, v.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> xxx(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.x, v.x, v.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> xxx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.x, v.x, v.x);
	}

	// xxy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> xxy(const glm::vec<2, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.x, v.x, v.y);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> xxy(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.x, v.x, v.y);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> xxy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.x, v.x, v.y);
	}

	// xxz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> xxz(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.x, v.x, v.z);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> xxz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.x, v.x, v.z);
	}

	// xxw
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> xxw(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.x, v.x, v.w);
	}

	// xyx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> xyx(const glm::vec<2, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.x, v.y, v.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> xyx(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.x, v.y, v.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> xyx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.x, v.y, v.x);
	}

	// xyy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> xyy(const glm::vec<2, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.x, v.y, v.y);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> xyy(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.x, v.y, v.y);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> xyy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.x, v.y, v.y);
	}

	// xyz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> xyz(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.x, v.y, v.z);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> xyz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.x, v.y, v.z);
	}

	// xyw
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> xyw(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.x, v.y, v.w);
	}

	// xzx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> xzx(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.x, v.z, v.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> xzx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.x, v.z, v.x);
	}

	// xzy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> xzy(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.x, v.z, v.y);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> xzy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.x, v.z, v.y);
	}

	// xzz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> xzz(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.x, v.z, v.z);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> xzz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.x, v.z, v.z);
	}

	// xzw
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> xzw(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.x, v.z, v.w);
	}

	// xwx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> xwx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.x, v.w, v.x);
	}

	// xwy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> xwy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.x, v.w, v.y);
	}

	// xwz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> xwz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.x, v.w, v.z);
	}

	// xww
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> xww(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.x, v.w, v.w);
	}

	// yxx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> yxx(const glm::vec<2, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.y, v.x, v.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> yxx(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.y, v.x, v.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> yxx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.y, v.x, v.x);
	}

	// yxy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> yxy(const glm::vec<2, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.y, v.x, v.y);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> yxy(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.y, v.x, v.y);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> yxy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.y, v.x, v.y);
	}

	// yxz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> yxz(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.y, v.x, v.z);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> yxz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.y, v.x, v.z);
	}

	// yxw
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> yxw(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.y, v.x, v.w);
	}

	// yyx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> yyx(const glm::vec<2, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.y, v.y, v.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> yyx(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.y, v.y, v.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> yyx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.y, v.y, v.x);
	}

	// yyy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> yyy(const glm::vec<2, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.y, v.y, v.y);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> yyy(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.y, v.y, v.y);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> yyy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.y, v.y, v.y);
	}

	// yyz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> yyz(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.y, v.y, v.z);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> yyz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.y, v.y, v.z);
	}

	// yyw
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> yyw(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.y, v.y, v.w);
	}

	// yzx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> yzx(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.y, v.z, v.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> yzx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.y, v.z, v.x);
	}

	// yzy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> yzy(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.y, v.z, v.y);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> yzy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.y, v.z, v.y);
	}

	// yzz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> yzz(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.y, v.z, v.z);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> yzz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.y, v.z, v.z);
	}

	// yzw
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> yzw(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.y, v.z, v.w);
	}

	// ywx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> ywx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.y, v.w, v.x);
	}

	// ywy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> ywy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.y, v.w, v.y);
	}

	// ywz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> ywz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.y, v.w, v.z);
	}

	// yww
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> yww(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.y, v.w, v.w);
	}

	// zxx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> zxx(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.z, v.x, v.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> zxx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.z, v.x, v.x);
	}

	// zxy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> zxy(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.z, v.x, v.y);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> zxy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.z, v.x, v.y);
	}

	// zxz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> zxz(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.z, v.x, v.z);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> zxz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.z, v.x, v.z);
	}

	// zxw
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> zxw(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.z, v.x, v.w);
	}

	// zyx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> zyx(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.z, v.y, v.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> zyx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.z, v.y, v.x);
	}

	// zyy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> zyy(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.z, v.y, v.y);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> zyy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.z, v.y, v.y);
	}

	// zyz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> zyz(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.z, v.y, v.z);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> zyz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.z, v.y, v.z);
	}

	// zyw
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> zyw(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.z, v.y, v.w);
	}

	// zzx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> zzx(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.z, v.z, v.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> zzx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.z, v.z, v.x);
	}

	// zzy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> zzy(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.z, v.z, v.y);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> zzy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.z, v.z, v.y);
	}

	// zzz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> zzz(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.z, v.z, v.z);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> zzz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.z, v.z, v.z);
	}

	// zzw
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> zzw(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.z, v.z, v.w);
	}

	// zwx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> zwx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.z, v.w, v.x);
	}

	// zwy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> zwy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.z, v.w, v.y);
	}

	// zwz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> zwz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.z, v.w, v.z);
	}

	// zww
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> zww(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.z, v.w, v.w);
	}

	// wxx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> wxx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.w, v.x, v.x);
	}

	// wxy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> wxy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.w, v.x, v.y);
	}

	// wxz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> wxz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.w, v.x, v.z);
	}

	// wxw
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> wxw(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.w, v.x, v.w);
	}

	// wyx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> wyx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.w, v.y, v.x);
	}

	// wyy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> wyy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.w, v.y, v.y);
	}

	// wyz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> wyz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.w, v.y, v.z);
	}

	// wyw
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> wyw(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.w, v.y, v.w);
	}

	// wzx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> wzx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.w, v.z, v.x);
	}

	// wzy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> wzy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.w, v.z, v.y);
	}

	// wzz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> wzz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.w, v.z, v.z);
	}

	// wzw
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> wzw(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.w, v.z, v.w);
	}

	// wwx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> wwx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.w, v.w, v.x);
	}

	// wwy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> wwy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.w, v.w, v.y);
	}

	// wwz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> wwz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.w, v.w, v.z);
	}

	// www
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<3, _Ty, Q> www(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<3, _Ty, Q>(v.w, v.w, v.w);
	}

	// xxxx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xxxx(const glm::vec<1, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.x, v.x, v.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xxxx(const glm::vec<2, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.x, v.x, v.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xxxx(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.x, v.x, v.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xxxx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.x, v.x, v.x);
	}

	// xxxy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xxxy(const glm::vec<2, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.x, v.x, v.y);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xxxy(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.x, v.x, v.y);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xxxy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.x, v.x, v.y);
	}

	// xxxz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xxxz(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.x, v.x, v.z);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xxxz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.x, v.x, v.z);
	}

	// xxxw
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xxxw(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.x, v.x, v.w);
	}

	// xxyx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xxyx(const glm::vec<2, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.x, v.y, v.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xxyx(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.x, v.y, v.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xxyx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.x, v.y, v.x);
	}

	// xxyy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xxyy(const glm::vec<2, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.x, v.y, v.y);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xxyy(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.x, v.y, v.y);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xxyy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.x, v.y, v.y);
	}

	// xxyz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xxyz(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.x, v.y, v.z);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xxyz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.x, v.y, v.z);
	}

	// xxyw
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xxyw(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.x, v.y, v.w);
	}

	// xxzx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xxzx(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.x, v.z, v.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xxzx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.x, v.z, v.x);
	}

	// xxzy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xxzy(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.x, v.z, v.y);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xxzy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.x, v.z, v.y);
	}

	// xxzz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xxzz(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.x, v.z, v.z);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xxzz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.x, v.z, v.z);
	}

	// xxzw
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xxzw(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.x, v.z, v.w);
	}

	// xxwx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xxwx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.x, v.w, v.x);
	}

	// xxwy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xxwy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.x, v.w, v.y);
	}

	// xxwz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xxwz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.x, v.w, v.z);
	}

	// xxww
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xxww(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.x, v.w, v.w);
	}

	// xyxx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xyxx(const glm::vec<2, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.y, v.x, v.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xyxx(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.y, v.x, v.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xyxx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.y, v.x, v.x);
	}

	// xyxy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xyxy(const glm::vec<2, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.y, v.x, v.y);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xyxy(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.y, v.x, v.y);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xyxy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.y, v.x, v.y);
	}

	// xyxz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xyxz(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.y, v.x, v.z);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xyxz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.y, v.x, v.z);
	}

	// xyxw
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xyxw(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.y, v.x, v.w);
	}

	// xyyx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xyyx(const glm::vec<2, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.y, v.y, v.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xyyx(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.y, v.y, v.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xyyx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.y, v.y, v.x);
	}

	// xyyy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xyyy(const glm::vec<2, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.y, v.y, v.y);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xyyy(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.y, v.y, v.y);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xyyy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.y, v.y, v.y);
	}

	// xyyz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xyyz(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.y, v.y, v.z);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xyyz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.y, v.y, v.z);
	}

	// xyyw
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xyyw(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.y, v.y, v.w);
	}

	// xyzx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xyzx(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.y, v.z, v.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xyzx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.y, v.z, v.x);
	}

	// xyzy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xyzy(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.y, v.z, v.y);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xyzy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.y, v.z, v.y);
	}

	// xyzz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xyzz(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.y, v.z, v.z);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xyzz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.y, v.z, v.z);
	}

	// xyzw
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xyzw(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.y, v.z, v.w);
	}

	// xywx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xywx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.y, v.w, v.x);
	}

	// xywy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xywy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.y, v.w, v.y);
	}

	// xywz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xywz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.y, v.w, v.z);
	}

	// xyww
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xyww(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.y, v.w, v.w);
	}

	// xzxx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xzxx(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.z, v.x, v.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xzxx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.z, v.x, v.x);
	}

	// xzxy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xzxy(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.z, v.x, v.y);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xzxy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.z, v.x, v.y);
	}

	// xzxz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xzxz(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.z, v.x, v.z);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xzxz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.z, v.x, v.z);
	}

	// xzxw
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xzxw(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.z, v.x, v.w);
	}

	// xzyx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xzyx(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.z, v.y, v.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xzyx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.z, v.y, v.x);
	}

	// xzyy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xzyy(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.z, v.y, v.y);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xzyy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.z, v.y, v.y);
	}

	// xzyz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xzyz(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.z, v.y, v.z);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xzyz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.z, v.y, v.z);
	}

	// xzyw
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xzyw(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.z, v.y, v.w);
	}

	// xzzx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xzzx(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.z, v.z, v.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xzzx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.z, v.z, v.x);
	}

	// xzzy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xzzy(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.z, v.z, v.y);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xzzy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.z, v.z, v.y);
	}

	// xzzz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xzzz(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.z, v.z, v.z);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xzzz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.z, v.z, v.z);
	}

	// xzzw
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xzzw(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.z, v.z, v.w);
	}

	// xzwx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xzwx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.z, v.w, v.x);
	}

	// xzwy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xzwy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.z, v.w, v.y);
	}

	// xzwz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xzwz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.z, v.w, v.z);
	}

	// xzww
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xzww(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.z, v.w, v.w);
	}

	// xwxx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xwxx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.w, v.x, v.x);
	}

	// xwxy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xwxy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.w, v.x, v.y);
	}

	// xwxz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xwxz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.w, v.x, v.z);
	}

	// xwxw
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xwxw(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.w, v.x, v.w);
	}

	// xwyx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xwyx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.w, v.y, v.x);
	}

	// xwyy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xwyy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.w, v.y, v.y);
	}

	// xwyz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xwyz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.w, v.y, v.z);
	}

	// xwyw
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xwyw(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.w, v.y, v.w);
	}

	// xwzx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xwzx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.w, v.z, v.x);
	}

	// xwzy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xwzy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.w, v.z, v.y);
	}

	// xwzz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xwzz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.w, v.z, v.z);
	}

	// xwzw
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xwzw(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.w, v.z, v.w);
	}

	// xwwx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xwwx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.w, v.w, v.x);
	}

	// xwwy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xwwy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.w, v.w, v.y);
	}

	// xwwz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xwwz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.w, v.w, v.z);
	}

	// xwww
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> xwww(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.x, v.w, v.w, v.w);
	}

	// yxxx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yxxx(const glm::vec<2, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.x, v.x, v.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yxxx(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.x, v.x, v.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yxxx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.x, v.x, v.x);
	}

	// yxxy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yxxy(const glm::vec<2, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.x, v.x, v.y);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yxxy(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.x, v.x, v.y);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yxxy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.x, v.x, v.y);
	}

	// yxxz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yxxz(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.x, v.x, v.z);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yxxz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.x, v.x, v.z);
	}

	// yxxw
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yxxw(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.x, v.x, v.w);
	}

	// yxyx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yxyx(const glm::vec<2, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.x, v.y, v.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yxyx(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.x, v.y, v.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yxyx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.x, v.y, v.x);
	}

	// yxyy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yxyy(const glm::vec<2, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.x, v.y, v.y);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yxyy(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.x, v.y, v.y);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yxyy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.x, v.y, v.y);
	}

	// yxyz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yxyz(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.x, v.y, v.z);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yxyz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.x, v.y, v.z);
	}

	// yxyw
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yxyw(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.x, v.y, v.w);
	}

	// yxzx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yxzx(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.x, v.z, v.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yxzx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.x, v.z, v.x);
	}

	// yxzy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yxzy(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.x, v.z, v.y);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yxzy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.x, v.z, v.y);
	}

	// yxzz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yxzz(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.x, v.z, v.z);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yxzz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.x, v.z, v.z);
	}

	// yxzw
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yxzw(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.x, v.z, v.w);
	}

	// yxwx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yxwx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.x, v.w, v.x);
	}

	// yxwy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yxwy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.x, v.w, v.y);
	}

	// yxwz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yxwz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.x, v.w, v.z);
	}

	// yxww
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yxww(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.x, v.w, v.w);
	}

	// yyxx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yyxx(const glm::vec<2, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.y, v.x, v.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yyxx(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.y, v.x, v.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yyxx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.y, v.x, v.x);
	}

	// yyxy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yyxy(const glm::vec<2, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.y, v.x, v.y);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yyxy(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.y, v.x, v.y);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yyxy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.y, v.x, v.y);
	}

	// yyxz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yyxz(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.y, v.x, v.z);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yyxz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.y, v.x, v.z);
	}

	// yyxw
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yyxw(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.y, v.x, v.w);
	}

	// yyyx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yyyx(const glm::vec<2, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.y, v.y, v.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yyyx(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.y, v.y, v.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yyyx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.y, v.y, v.x);
	}

	// yyyy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yyyy(const glm::vec<2, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.y, v.y, v.y);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yyyy(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.y, v.y, v.y);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yyyy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.y, v.y, v.y);
	}

	// yyyz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yyyz(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.y, v.y, v.z);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yyyz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.y, v.y, v.z);
	}

	// yyyw
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yyyw(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.y, v.y, v.w);
	}

	// yyzx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yyzx(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.y, v.z, v.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yyzx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.y, v.z, v.x);
	}

	// yyzy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yyzy(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.y, v.z, v.y);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yyzy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.y, v.z, v.y);
	}

	// yyzz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yyzz(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.y, v.z, v.z);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yyzz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.y, v.z, v.z);
	}

	// yyzw
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yyzw(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.y, v.z, v.w);
	}

	// yywx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yywx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.y, v.w, v.x);
	}

	// yywy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yywy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.y, v.w, v.y);
	}

	// yywz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yywz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.y, v.w, v.z);
	}

	// yyww
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yyww(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.y, v.w, v.w);
	}

	// yzxx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yzxx(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.z, v.x, v.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yzxx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.z, v.x, v.x);
	}

	// yzxy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yzxy(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.z, v.x, v.y);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yzxy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.z, v.x, v.y);
	}

	// yzxz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yzxz(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.z, v.x, v.z);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yzxz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.z, v.x, v.z);
	}

	// yzxw
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yzxw(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.z, v.x, v.w);
	}

	// yzyx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yzyx(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.z, v.y, v.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yzyx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.z, v.y, v.x);
	}

	// yzyy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yzyy(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.z, v.y, v.y);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yzyy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.z, v.y, v.y);
	}

	// yzyz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yzyz(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.z, v.y, v.z);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yzyz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.z, v.y, v.z);
	}

	// yzyw
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yzyw(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.z, v.y, v.w);
	}

	// yzzx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yzzx(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.z, v.z, v.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yzzx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.z, v.z, v.x);
	}

	// yzzy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yzzy(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.z, v.z, v.y);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yzzy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.z, v.z, v.y);
	}

	// yzzz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yzzz(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.z, v.z, v.z);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yzzz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.z, v.z, v.z);
	}

	// yzzw
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yzzw(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.z, v.z, v.w);
	}

	// yzwx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yzwx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.z, v.w, v.x);
	}

	// yzwy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yzwy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.z, v.w, v.y);
	}

	// yzwz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yzwz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.z, v.w, v.z);
	}

	// yzww
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> yzww(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.z, v.w, v.w);
	}

	// ywxx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> ywxx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.w, v.x, v.x);
	}

	// ywxy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> ywxy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.w, v.x, v.y);
	}

	// ywxz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> ywxz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.w, v.x, v.z);
	}

	// ywxw
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> ywxw(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.w, v.x, v.w);
	}

	// ywyx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> ywyx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.w, v.y, v.x);
	}

	// ywyy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> ywyy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.w, v.y, v.y);
	}

	// ywyz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> ywyz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.w, v.y, v.z);
	}

	// ywyw
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> ywyw(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.w, v.y, v.w);
	}

	// ywzx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> ywzx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.w, v.z, v.x);
	}

	// ywzy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> ywzy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.w, v.z, v.y);
	}

	// ywzz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> ywzz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.w, v.z, v.z);
	}

	// ywzw
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> ywzw(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.w, v.z, v.w);
	}

	// ywwx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> ywwx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.w, v.w, v.x);
	}

	// ywwy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> ywwy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.w, v.w, v.y);
	}

	// ywwz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> ywwz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.w, v.w, v.z);
	}

	// ywww
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> ywww(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.y, v.w, v.w, v.w);
	}

	// zxxx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zxxx(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.x, v.x, v.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zxxx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.x, v.x, v.x);
	}

	// zxxy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zxxy(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.x, v.x, v.y);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zxxy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.x, v.x, v.y);
	}

	// zxxz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zxxz(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.x, v.x, v.z);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zxxz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.x, v.x, v.z);
	}

	// zxxw
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zxxw(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.x, v.x, v.w);
	}

	// zxyx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zxyx(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.x, v.y, v.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zxyx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.x, v.y, v.x);
	}

	// zxyy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zxyy(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.x, v.y, v.y);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zxyy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.x, v.y, v.y);
	}

	// zxyz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zxyz(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.x, v.y, v.z);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zxyz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.x, v.y, v.z);
	}

	// zxyw
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zxyw(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.x, v.y, v.w);
	}

	// zxzx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zxzx(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.x, v.z, v.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zxzx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.x, v.z, v.x);
	}

	// zxzy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zxzy(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.x, v.z, v.y);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zxzy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.x, v.z, v.y);
	}

	// zxzz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zxzz(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.x, v.z, v.z);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zxzz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.x, v.z, v.z);
	}

	// zxzw
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zxzw(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.x, v.z, v.w);
	}

	// zxwx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zxwx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.x, v.w, v.x);
	}

	// zxwy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zxwy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.x, v.w, v.y);
	}

	// zxwz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zxwz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.x, v.w, v.z);
	}

	// zxww
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zxww(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.x, v.w, v.w);
	}

	// zyxx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zyxx(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.y, v.x, v.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zyxx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.y, v.x, v.x);
	}

	// zyxy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zyxy(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.y, v.x, v.y);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zyxy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.y, v.x, v.y);
	}

	// zyxz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zyxz(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.y, v.x, v.z);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zyxz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.y, v.x, v.z);
	}

	// zyxw
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zyxw(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.y, v.x, v.w);
	}

	// zyyx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zyyx(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.y, v.y, v.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zyyx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.y, v.y, v.x);
	}

	// zyyy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zyyy(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.y, v.y, v.y);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zyyy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.y, v.y, v.y);
	}

	// zyyz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zyyz(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.y, v.y, v.z);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zyyz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.y, v.y, v.z);
	}

	// zyyw
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zyyw(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.y, v.y, v.w);
	}

	// zyzx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zyzx(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.y, v.z, v.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zyzx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.y, v.z, v.x);
	}

	// zyzy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zyzy(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.y, v.z, v.y);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zyzy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.y, v.z, v.y);
	}

	// zyzz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zyzz(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.y, v.z, v.z);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zyzz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.y, v.z, v.z);
	}

	// zyzw
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zyzw(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.y, v.z, v.w);
	}

	// zywx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zywx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.y, v.w, v.x);
	}

	// zywy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zywy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.y, v.w, v.y);
	}

	// zywz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zywz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.y, v.w, v.z);
	}

	// zyww
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zyww(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.y, v.w, v.w);
	}

	// zzxx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zzxx(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.z, v.x, v.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zzxx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.z, v.x, v.x);
	}

	// zzxy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zzxy(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.z, v.x, v.y);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zzxy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.z, v.x, v.y);
	}

	// zzxz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zzxz(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.z, v.x, v.z);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zzxz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.z, v.x, v.z);
	}

	// zzxw
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zzxw(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.z, v.x, v.w);
	}

	// zzyx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zzyx(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.z, v.y, v.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zzyx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.z, v.y, v.x);
	}

	// zzyy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zzyy(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.z, v.y, v.y);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zzyy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.z, v.y, v.y);
	}

	// zzyz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zzyz(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.z, v.y, v.z);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zzyz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.z, v.y, v.z);
	}

	// zzyw
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zzyw(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.z, v.y, v.w);
	}

	// zzzx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zzzx(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.z, v.z, v.x);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zzzx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.z, v.z, v.x);
	}

	// zzzy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zzzy(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.z, v.z, v.y);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zzzy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.z, v.z, v.y);
	}

	// zzzz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zzzz(const glm::vec<3, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.z, v.z, v.z);
	}

	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zzzz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.z, v.z, v.z);
	}

	// zzzw
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zzzw(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.z, v.z, v.w);
	}

	// zzwx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zzwx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.z, v.w, v.x);
	}

	// zzwy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zzwy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.z, v.w, v.y);
	}

	// zzwz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zzwz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.z, v.w, v.z);
	}

	// zzww
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zzww(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.z, v.w, v.w);
	}

	// zwxx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zwxx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.w, v.x, v.x);
	}

	// zwxy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zwxy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.w, v.x, v.y);
	}

	// zwxz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zwxz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.w, v.x, v.z);
	}

	// zwxw
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zwxw(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.w, v.x, v.w);
	}

	// zwyx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zwyx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.w, v.y, v.x);
	}

	// zwyy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zwyy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.w, v.y, v.y);
	}

	// zwyz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zwyz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.w, v.y, v.z);
	}

	// zwyw
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zwyw(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.w, v.y, v.w);
	}

	// zwzx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zwzx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.w, v.z, v.x);
	}

	// zwzy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zwzy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.w, v.z, v.y);
	}

	// zwzz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zwzz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.w, v.z, v.z);
	}

	// zwzw
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zwzw(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.w, v.z, v.w);
	}

	// zwwx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zwwx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.w, v.w, v.x);
	}

	// zwwy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zwwy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.w, v.w, v.y);
	}

	// zwwz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zwwz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.w, v.w, v.z);
	}

	// zwww
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> zwww(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.z, v.w, v.w, v.w);
	}

	// wxxx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> wxxx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.w, v.x, v.x, v.x);
	}

	// wxxy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> wxxy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.w, v.x, v.x, v.y);
	}

	// wxxz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> wxxz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.w, v.x, v.x, v.z);
	}

	// wxxw
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> wxxw(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.w, v.x, v.x, v.w);
	}

	// wxyx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> wxyx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.w, v.x, v.y, v.x);
	}

	// wxyy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> wxyy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.w, v.x, v.y, v.y);
	}

	// wxyz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> wxyz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.w, v.x, v.y, v.z);
	}

	// wxyw
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> wxyw(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.w, v.x, v.y, v.w);
	}

	// wxzx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> wxzx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.w, v.x, v.z, v.x);
	}

	// wxzy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> wxzy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.w, v.x, v.z, v.y);
	}

	// wxzz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> wxzz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.w, v.x, v.z, v.z);
	}

	// wxzw
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> wxzw(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.w, v.x, v.z, v.w);
	}

	// wxwx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> wxwx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.w, v.x, v.w, v.x);
	}

	// wxwy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> wxwy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.w, v.x, v.w, v.y);
	}

	// wxwz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> wxwz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.w, v.x, v.w, v.z);
	}

	// wxww
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> wxww(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.w, v.x, v.w, v.w);
	}

	// wyxx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> wyxx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.w, v.y, v.x, v.x);
	}

	// wyxy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> wyxy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.w, v.y, v.x, v.y);
	}

	// wyxz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> wyxz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.w, v.y, v.x, v.z);
	}

	// wyxw
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> wyxw(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.w, v.y, v.x, v.w);
	}

	// wyyx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> wyyx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.w, v.y, v.y, v.x);
	}

	// wyyy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> wyyy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.w, v.y, v.y, v.y);
	}

	// wyyz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> wyyz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.w, v.y, v.y, v.z);
	}

	// wyyw
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> wyyw(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.w, v.y, v.y, v.w);
	}

	// wyzx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> wyzx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.w, v.y, v.z, v.x);
	}

	// wyzy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> wyzy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.w, v.y, v.z, v.y);
	}

	// wyzz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> wyzz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.w, v.y, v.z, v.z);
	}

	// wyzw
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> wyzw(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.w, v.y, v.z, v.w);
	}

	// wywx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> wywx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.w, v.y, v.w, v.x);
	}

	// wywy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> wywy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.w, v.y, v.w, v.y);
	}

	// wywz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> wywz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.w, v.y, v.w, v.z);
	}

	// wyww
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> wyww(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.w, v.y, v.w, v.w);
	}

	// wzxx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> wzxx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.w, v.z, v.x, v.x);
	}

	// wzxy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> wzxy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.w, v.z, v.x, v.y);
	}

	// wzxz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> wzxz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.w, v.z, v.x, v.z);
	}

	// wzxw
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> wzxw(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.w, v.z, v.x, v.w);
	}

	// wzyx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> wzyx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.w, v.z, v.y, v.x);
	}

	// wzyy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> wzyy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.w, v.z, v.y, v.y);
	}

	// wzyz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> wzyz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.w, v.z, v.y, v.z);
	}

	// wzyw
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> wzyw(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.w, v.z, v.y, v.w);
	}

	// wzzx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> wzzx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.w, v.z, v.z, v.x);
	}

	// wzzy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> wzzy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.w, v.z, v.z, v.y);
	}

	// wzzz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> wzzz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.w, v.z, v.z, v.z);
	}

	// wzzw
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> wzzw(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.w, v.z, v.z, v.w);
	}

	// wzwx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> wzwx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.w, v.z, v.w, v.x);
	}

	// wzwy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> wzwy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.w, v.z, v.w, v.y);
	}

	// wzwz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> wzwz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.w, v.z, v.w, v.z);
	}

	// wzww
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> wzww(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.w, v.z, v.w, v.w);
	}

	// wwxx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> wwxx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.w, v.w, v.x, v.x);
	}

	// wwxy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> wwxy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.w, v.w, v.x, v.y);
	}

	// wwxz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> wwxz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.w, v.w, v.x, v.z);
	}

	// wwxw
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> wwxw(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.w, v.w, v.x, v.w);
	}

	// wwyx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> wwyx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.w, v.w, v.y, v.x);
	}

	// wwyy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> wwyy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.w, v.w, v.y, v.y);
	}

	// wwyz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> wwyz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.w, v.w, v.y, v.z);
	}

	// wwyw
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> wwyw(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.w, v.w, v.y, v.w);
	}

	// wwzx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> wwzx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.w, v.w, v.z, v.x);
	}

	// wwzy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> wwzy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.w, v.w, v.z, v.y);
	}

	// wwzz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> wwzz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.w, v.w, v.z, v.z);
	}

	// wwzw
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> wwzw(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.w, v.w, v.z, v.w);
	}

	// wwwx
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> wwwx(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.w, v.w, v.w, v.x);
	}

	// wwwy
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> wwwy(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.w, v.w, v.w, v.y);
	}

	// wwwz
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> wwwz(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.w, v.w, v.w, v.z);
	}

	// wwww
	template<typename _Ty, qualifier Q>
	GLM_INLINE glm::vec<4, _Ty, Q> wwww(const glm::vec<4, _Ty, Q> &v) {
		return glm::vec<4, _Ty, Q>(v.w, v.w, v.w, v.w);
	}

	/// @}
}//namespace glm
