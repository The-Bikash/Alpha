/// @ref gtc_type_ptr
/// @file glm/gtc/type_ptr.hpp
///
/// @see core (dependence)
/// @see gtc_quaternion (dependence)
///
/// @defgroup gtc_type_ptr GLM_GTC_type_ptr
/// @ingroup gtc
///
/// Include <glm/gtc/type_ptr.hpp> to use the features of this extension.
///
/// Handles the interaction between pointers and vector, matrix types.
///
/// This extension defines an overloaded function, glm::value_ptr. It returns
/// a pointer to the memory layout of the object. Matrix types store their values
/// in column-major order.
///
/// This is useful for uploading data to matrices or copying data to buffer objects.
///
/// Example:
/// @code
/// #include <glm/glm.hpp>
/// #include <glm/gtc/type_ptr.hpp>
///
/// glm::vec3 aVector(3);
/// glm::mat4 someMatrix(1.0);
///
/// glUniform3fv(uniformLoc, 1, glm::value_ptr(aVector));
/// glUniformMatrix4fv(uniformMatrixLoc, 1, GL_FALSE, glm::value_ptr(someMatrix));
/// @endcode
///
/// <glm/gtc/type_ptr.hpp> need to be included to use the features of this extension.

#pragma once

// Dependency:
#include "../gtc/quaternion.hpp"
#include "../gtc/vec1.hpp"
#include "../vec2.hpp"
#include "../vec3.hpp"
#include "../vec4.hpp"
#include "../mat2x2.hpp"
#include "../mat2x3.hpp"
#include "../mat2x4.hpp"
#include "../mat3x2.hpp"
#include "../mat3x3.hpp"
#include "../mat3x4.hpp"
#include "../mat4x2.hpp"
#include "../mat4x3.hpp"
#include "../mat4x4.hpp"
#include <cstring>

#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	pragma message("GLM: GLM_GTC_type_ptr extension included")
#endif

namespace glm
{
	/// @addtogroup gtc_type_ptr
	/// @{

	/// Return the constant address to the data of the input parameter.
	/// @see gtc_type_ptr
	template<typename genType>
	GLM_FUNC_DECL typename genType::value_type const * value_ptr(genType const& v);

	/// Build a vector from a pointer.
	/// @see gtc_type_ptr
	template <typename _Ty, qualifier Q>
	GLM_FUNC_DECL vec<1, _Ty, Q> make_vec1(vec<1, _Ty, Q> const& v);

	/// Build a vector from a pointer.
	/// @see gtc_type_ptr
	template <typename _Ty, qualifier Q>
	GLM_FUNC_DECL vec<1, _Ty, Q> make_vec1(vec<2, _Ty, Q> const& v);

	/// Build a vector from a pointer.
	/// @see gtc_type_ptr
	template <typename _Ty, qualifier Q>
	GLM_FUNC_DECL vec<1, _Ty, Q> make_vec1(vec<3, _Ty, Q> const& v);

	/// Build a vector from a pointer.
	/// @see gtc_type_ptr
	template <typename _Ty, qualifier Q>
	GLM_FUNC_DECL vec<1, _Ty, Q> make_vec1(vec<4, _Ty, Q> const& v);

	/// Build a vector from a pointer.
	/// @see gtc_type_ptr
	template <typename _Ty, qualifier Q>
	GLM_FUNC_DECL vec<2, _Ty, Q> make_vec2(vec<1, _Ty, Q> const& v);

	/// Build a vector from a pointer.
	/// @see gtc_type_ptr
	template <typename _Ty, qualifier Q>
	GLM_FUNC_DECL vec<2, _Ty, Q> make_vec2(vec<2, _Ty, Q> const& v);

	/// Build a vector from a pointer.
	/// @see gtc_type_ptr
	template <typename _Ty, qualifier Q>
	GLM_FUNC_DECL vec<2, _Ty, Q> make_vec2(vec<3, _Ty, Q> const& v);

	/// Build a vector from a pointer.
	/// @see gtc_type_ptr
	template <typename _Ty, qualifier Q>
	GLM_FUNC_DECL vec<2, _Ty, Q> make_vec2(vec<4, _Ty, Q> const& v);

	/// Build a vector from a pointer.
	/// @see gtc_type_ptr
	template <typename _Ty, qualifier Q>
	GLM_FUNC_DECL vec<3, _Ty, Q> make_vec3(vec<1, _Ty, Q> const& v);

	/// Build a vector from a pointer.
	/// @see gtc_type_ptr
	template <typename _Ty, qualifier Q>
	GLM_FUNC_DECL vec<3, _Ty, Q> make_vec3(vec<2, _Ty, Q> const& v);

	/// Build a vector from a pointer.
	/// @see gtc_type_ptr
	template <typename _Ty, qualifier Q>
	GLM_FUNC_DECL vec<3, _Ty, Q> make_vec3(vec<3, _Ty, Q> const& v);

	/// Build a vector from a pointer.
	/// @see gtc_type_ptr
	template <typename _Ty, qualifier Q>
	GLM_FUNC_DECL vec<3, _Ty, Q> make_vec3(vec<4, _Ty, Q> const& v);

	/// Build a vector from a pointer.
	/// @see gtc_type_ptr
	template <typename _Ty, qualifier Q>
	GLM_FUNC_DECL vec<4, _Ty, Q> make_vec4(vec<1, _Ty, Q> const& v);

	/// Build a vector from a pointer.
	/// @see gtc_type_ptr
	template <typename _Ty, qualifier Q>
	GLM_FUNC_DECL vec<4, _Ty, Q> make_vec4(vec<2, _Ty, Q> const& v);

	/// Build a vector from a pointer.
	/// @see gtc_type_ptr
	template <typename _Ty, qualifier Q>
	GLM_FUNC_DECL vec<4, _Ty, Q> make_vec4(vec<3, _Ty, Q> const& v);

	/// Build a vector from a pointer.
	/// @see gtc_type_ptr
	template <typename _Ty, qualifier Q>
	GLM_FUNC_DECL vec<4, _Ty, Q> make_vec4(vec<4, _Ty, Q> const& v);

	/// Build a vector from a pointer.
	/// @see gtc_type_ptr
	template<typename _Ty>
	GLM_FUNC_DECL vec<2, _Ty, defaultp> make_vec2(_Ty const * const ptr);

	/// Build a vector from a pointer.
	/// @see gtc_type_ptr
	template<typename _Ty>
	GLM_FUNC_DECL vec<3, _Ty, defaultp> make_vec3(_Ty const * const ptr);

	/// Build a vector from a pointer.
	/// @see gtc_type_ptr
	template<typename _Ty>
	GLM_FUNC_DECL vec<4, _Ty, defaultp> make_vec4(_Ty const * const ptr);

	/// Build a matrix from a pointer.
	/// @see gtc_type_ptr
	template<typename _Ty>
	GLM_FUNC_DECL mat<2, 2, _Ty, defaultp> make_mat2x2(_Ty const * const ptr);

	/// Build a matrix from a pointer.
	/// @see gtc_type_ptr
	template<typename _Ty>
	GLM_FUNC_DECL mat<2, 3, _Ty, defaultp> make_mat2x3(_Ty const * const ptr);

	/// Build a matrix from a pointer.
	/// @see gtc_type_ptr
	template<typename _Ty>
	GLM_FUNC_DECL mat<2, 4, _Ty, defaultp> make_mat2x4(_Ty const * const ptr);

	/// Build a matrix from a pointer.
	/// @see gtc_type_ptr
	template<typename _Ty>
	GLM_FUNC_DECL mat<3, 2, _Ty, defaultp> make_mat3x2(_Ty const * const ptr);

	/// Build a matrix from a pointer.
	/// @see gtc_type_ptr
	template<typename _Ty>
	GLM_FUNC_DECL mat<3, 3, _Ty, defaultp> make_mat3x3(_Ty const * const ptr);

	/// Build a matrix from a pointer.
	/// @see gtc_type_ptr
	template<typename _Ty>
	GLM_FUNC_DECL mat<3, 4, _Ty, defaultp> make_mat3x4(_Ty const * const ptr);

	/// Build a matrix from a pointer.
	/// @see gtc_type_ptr
	template<typename _Ty>
	GLM_FUNC_DECL mat<4, 2, _Ty, defaultp> make_mat4x2(_Ty const * const ptr);

	/// Build a matrix from a pointer.
	/// @see gtc_type_ptr
	template<typename _Ty>
	GLM_FUNC_DECL mat<4, 3, _Ty, defaultp> make_mat4x3(_Ty const * const ptr);

	/// Build a matrix from a pointer.
	/// @see gtc_type_ptr
	template<typename _Ty>
	GLM_FUNC_DECL mat<4, 4, _Ty, defaultp> make_mat4x4(_Ty const * const ptr);

	/// Build a matrix from a pointer.
	/// @see gtc_type_ptr
	template<typename _Ty>
	GLM_FUNC_DECL mat<2, 2, _Ty, defaultp> make_mat2(_Ty const * const ptr);

	/// Build a matrix from a pointer.
	/// @see gtc_type_ptr
	template<typename _Ty>
	GLM_FUNC_DECL mat<3, 3, _Ty, defaultp> make_mat3(_Ty const * const ptr);

	/// Build a matrix from a pointer.
	/// @see gtc_type_ptr
	template<typename _Ty>
	GLM_FUNC_DECL mat<4, 4, _Ty, defaultp> make_mat4(_Ty const * const ptr);

	/// Build a quaternion from a pointer.
	/// @see gtc_type_ptr
	template<typename _Ty>
	GLM_FUNC_DECL qua<_Ty, defaultp> make_quat(_Ty const * const ptr);

	/// @}
}//namespace glm

#include "type_ptr.inl"
