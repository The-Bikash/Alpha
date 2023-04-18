/// @ref ext_vector_common
/// @file glm/ext/vector_common.hpp
///
/// @defgroup ext_vector_common GLM_EXT_vector_common
/// @ingroup ext
///
/// Exposes min and max functions for 3 to 4 vector parameters.
///
/// Include <glm/ext/vector_common.hpp> to use the features of this extension.
///
/// @see core_common
/// @see ext_scalar_common

#pragma once

// Dependency:
#include "../ext/scalar_common.hpp"
#include "../common.hpp"

#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	pragma message("GLM: GLM_EXT_vector_common extension included")
#endif

namespace glm
{
	/// @addtogroup ext_vector_common
	/// @{

	/// Return the minimum component-wise values of 3 inputs
	///
	/// @tparam L Integer between 1 and 4 included that qualify the dimension of the vector
	/// @tparam T Floating-point or integer scalar types
	/// @tparam Q Value from qualifier enum
	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<L, _Ty, Q> min(vec<L, _Ty, Q> const& a, vec<L, _Ty, Q> const& b, vec<L, _Ty, Q> const& c);

	/// Return the minimum component-wise values of 4 inputs
	///
	/// @tparam L Integer between 1 and 4 included that qualify the dimension of the vector
	/// @tparam T Floating-point or integer scalar types
	/// @tparam Q Value from qualifier enum
	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<L, _Ty, Q> min(vec<L, _Ty, Q> const& a, vec<L, _Ty, Q> const& b, vec<L, _Ty, Q> const& c, vec<L, _Ty, Q> const& d);

	/// Return the maximum component-wise values of 3 inputs
	///
	/// @tparam L Integer between 1 and 4 included that qualify the dimension of the vector
	/// @tparam T Floating-point or integer scalar types
	/// @tparam Q Value from qualifier enum
	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<L, _Ty, Q> max(vec<L, _Ty, Q> const& x, vec<L, _Ty, Q> const& y, vec<L, _Ty, Q> const& z);

	/// Return the maximum component-wise values of 4 inputs
	///
	/// @tparam L Integer between 1 and 4 included that qualify the dimension of the vector
	/// @tparam T Floating-point or integer scalar types
	/// @tparam Q Value from qualifier enum
	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<L, _Ty, Q> max( vec<L, _Ty, Q> const& x, vec<L, _Ty, Q> const& y, vec<L, _Ty, Q> const& z, vec<L, _Ty, Q> const& w);

	/// Returns y if y < x; otherwise, it returns x. If one of the two arguments is NaN, the value of the other argument is returned.
	///
	/// @tparam L Integer between 1 and 4 included that qualify the dimension of the vector
	/// @tparam T Floating-point scalar types
	/// @tparam Q Value from qualifier enum
	///
	/// @see <a href="http://en.cppreference.com/w/cpp/numeric/math/fmin">std::fmin documentation</a>
	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_DECL vec<L, _Ty, Q> fmin(vec<L, _Ty, Q> const& x, _Ty y);

	/// Returns y if y < x; otherwise, it returns x. If one of the two arguments is NaN, the value of the other argument is returned.
	///
	/// @tparam L Integer between 1 and 4 included that qualify the dimension of the vector
	/// @tparam T Floating-point scalar types
	/// @tparam Q Value from qualifier enum
	///
	/// @see <a href="http://en.cppreference.com/w/cpp/numeric/math/fmin">std::fmin documentation</a>
	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_DECL vec<L, _Ty, Q> fmin(vec<L, _Ty, Q> const& x, vec<L, _Ty, Q> const& y);

	/// Returns y if y < x; otherwise, it returns x. If one of the two arguments is NaN, the value of the other argument is returned.
	///
	/// @tparam L Integer between 1 and 4 included that qualify the dimension of the vector
	/// @tparam T Floating-point scalar types
	/// @tparam Q Value from qualifier enum
	///
	/// @see <a href="http://en.cppreference.com/w/cpp/numeric/math/fmin">std::fmin documentation</a>
	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_DECL vec<L, _Ty, Q> fmin(vec<L, _Ty, Q> const& a, vec<L, _Ty, Q> const& b, vec<L, _Ty, Q> const& c);

	/// Returns y if y < x; otherwise, it returns x. If one of the two arguments is NaN, the value of the other argument is returned.
	///
	/// @tparam L Integer between 1 and 4 included that qualify the dimension of the vector
	/// @tparam T Floating-point scalar types
	/// @tparam Q Value from qualifier enum
	///
	/// @see <a href="http://en.cppreference.com/w/cpp/numeric/math/fmin">std::fmin documentation</a>
	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_DECL vec<L, _Ty, Q> fmin(vec<L, _Ty, Q> const& a, vec<L, _Ty, Q> const& b, vec<L, _Ty, Q> const& c, vec<L, _Ty, Q> const& d);

	/// Returns y if x < y; otherwise, it returns x. If one of the two arguments is NaN, the value of the other argument is returned.
	///
	/// @tparam L Integer between 1 and 4 included that qualify the dimension of the vector
	/// @tparam T Floating-point scalar types
	/// @tparam Q Value from qualifier enum
	///
	/// @see <a href="http://en.cppreference.com/w/cpp/numeric/math/fmax">std::fmax documentation</a>
	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_DECL vec<L, _Ty, Q> fmax(vec<L, _Ty, Q> const& a, _Ty b);

	/// Returns y if x < y; otherwise, it returns x. If one of the two arguments is NaN, the value of the other argument is returned.
	///
	/// @tparam L Integer between 1 and 4 included that qualify the dimension of the vector
	/// @tparam T Floating-point scalar types
	/// @tparam Q Value from qualifier enum
	///
	/// @see <a href="http://en.cppreference.com/w/cpp/numeric/math/fmax">std::fmax documentation</a>
	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_DECL vec<L, _Ty, Q> fmax(vec<L, _Ty, Q> const& a, vec<L, _Ty, Q> const& b);

	/// Returns y if x < y; otherwise, it returns x. If one of the two arguments is NaN, the value of the other argument is returned.
	///
	/// @tparam L Integer between 1 and 4 included that qualify the dimension of the vector
	/// @tparam T Floating-point scalar types
	/// @tparam Q Value from qualifier enum
	///
	/// @see <a href="http://en.cppreference.com/w/cpp/numeric/math/fmax">std::fmax documentation</a>
	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_DECL vec<L, _Ty, Q> fmax(vec<L, _Ty, Q> const& a, vec<L, _Ty, Q> const& b, vec<L, _Ty, Q> const& c);

	/// Returns y if x < y; otherwise, it returns x. If one of the two arguments is NaN, the value of the other argument is returned.
	///
	/// @tparam L Integer between 1 and 4 included that qualify the dimension of the vector
	/// @tparam T Floating-point scalar types
	/// @tparam Q Value from qualifier enum
	///
	/// @see <a href="http://en.cppreference.com/w/cpp/numeric/math/fmax">std::fmax documentation</a>
	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_DECL vec<L, _Ty, Q> fmax(vec<L, _Ty, Q> const& a, vec<L, _Ty, Q> const& b, vec<L, _Ty, Q> const& c, vec<L, _Ty, Q> const& d);

	/// Returns min(max(x, minVal), maxVal) for each component in x. If one of the two arguments is NaN, the value of the other argument is returned.
	///
	/// @tparam L Integer between 1 and 4 included that qualify the dimension of the vector
	/// @tparam T Floating-point scalar types
	/// @tparam Q Value from qualifier enum
	///
	/// @see ext_vector_common
	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_DECL vec<L, _Ty, Q> fclamp(vec<L, _Ty, Q> const& x, _Ty minVal, _Ty maxVal);

	/// Returns min(max(x, minVal), maxVal) for each component in x. If one of the two arguments is NaN, the value of the other argument is returned.
	///
	/// @tparam L Integer between 1 and 4 included that qualify the dimension of the vector
	/// @tparam T Floating-point scalar types
	/// @tparam Q Value from qualifier enum
	///
	/// @see ext_vector_common
	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_DECL vec<L, _Ty, Q> fclamp(vec<L, _Ty, Q> const& x, vec<L, _Ty, Q> const& minVal, vec<L, _Ty, Q> const& maxVal);

	/// Simulate GL_CLAMP OpenGL wrap mode
	///
	/// @tparam L Integer between 1 and 4 included that qualify the dimension of the vector
	/// @tparam T Floating-point scalar types
	/// @tparam Q Value from qualifier enum
	///
	/// @see ext_vector_common extension.
	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_DECL vec<L, _Ty, Q> clamp(vec<L, _Ty, Q> const& Texcoord);

	/// Simulate GL_REPEAT OpenGL wrap mode
	///
	/// @tparam L Integer between 1 and 4 included that qualify the dimension of the vector
	/// @tparam T Floating-point scalar types
	/// @tparam Q Value from qualifier enum
	///
	/// @see ext_vector_common extension.
	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_DECL vec<L, _Ty, Q> repeat(vec<L, _Ty, Q> const& Texcoord);

	/// Simulate GL_MIRRORED_REPEAT OpenGL wrap mode
	///
	/// @tparam L Integer between 1 and 4 included that qualify the dimension of the vector
	/// @tparam T Floating-point scalar types
	/// @tparam Q Value from qualifier enum
	///
	/// @see ext_vector_common extension.
	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_DECL vec<L, _Ty, Q> mirrorClamp(vec<L, _Ty, Q> const& Texcoord);

	/// Simulate GL_MIRROR_REPEAT OpenGL wrap mode
	///
	/// @tparam L Integer between 1 and 4 included that qualify the dimension of the vector
	/// @tparam T Floating-point scalar types
	/// @tparam Q Value from qualifier enum
	///
	/// @see ext_vector_common extension.
	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_DECL vec<L, _Ty, Q> mirrorRepeat(vec<L, _Ty, Q> const& Texcoord);

	/// Returns a value equal to the nearest integer to x.
	/// The fraction 0.5 will round in a direction chosen by the
	/// implementation, presumably the direction that is fastest.
	///
	/// @param x The values of the argument must be greater or equal to zero.
	/// @tparam T floating point scalar types.
	///
	/// @see <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/round.xml">GLSL round man page</a>
	/// @see ext_vector_common extension.
	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_DECL vec<L, int, Q> iround(vec<L, _Ty, Q> const& x);

	/// Returns a value equal to the nearest integer to x.
	/// The fraction 0.5 will round in a direction chosen by the
	/// implementation, presumably the direction that is fastest.
	///
	/// @param x The values of the argument must be greater or equal to zero.
	/// @tparam T floating point scalar types.
	///
	/// @see <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/round.xml">GLSL round man page</a>
	/// @see ext_vector_common extension.
	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_DECL vec<L, uint, Q> uround(vec<L, _Ty, Q> const& x);

	/// @}
}//namespace glm

#include "vector_common.inl"
