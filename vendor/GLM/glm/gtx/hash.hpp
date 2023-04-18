/// @ref gtx_hash
/// @file glm/gtx/hash.hpp
///
/// @see core (dependence)
///
/// @defgroup gtx_hash GLM_GTX_hash
/// @ingroup gtx
///
/// Include <glm/gtx/hash.hpp> to use the features of this extension.
///
/// Add std::hash support for glm types

#pragma once

#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	ifndef GLM_ENABLE_EXPERIMENTAL
#		pragma message("GLM: GLM_GTX_hash is an experimental extension and may change in the future. Use #define GLM_ENABLE_EXPERIMENTAL before including it, if you really want to use it.")
#	else
#		pragma message("GLM: GLM_GTX_hash extension included")
#	endif
#endif

#include <functional>

#include "../vec2.hpp"
#include "../vec3.hpp"
#include "../vec4.hpp"
#include "../gtc/vec1.hpp"

#include "../gtc/quaternion.hpp"
#include "../gtx/dual_quaternion.hpp"

#include "../mat2x2.hpp"
#include "../mat2x3.hpp"
#include "../mat2x4.hpp"

#include "../mat3x2.hpp"
#include "../mat3x3.hpp"
#include "../mat3x4.hpp"

#include "../mat4x2.hpp"
#include "../mat4x3.hpp"
#include "../mat4x4.hpp"

#if !GLM_HAS_CXX11_STL
#	error "GLM_GTX_hash requires C++11 standard library support"
#endif

namespace std
{
	template<typename _Ty, glm::qualifier Q>
	struct hash<glm::vec<1, _Ty,Q> >
	{
		GLM_FUNC_DECL size_t operator()(glm::vec<1, _Ty, Q> const& v) const GLM_NOEXCEPT;
	};

	template<typename _Ty, glm::qualifier Q>
	struct hash<glm::vec<2, _Ty,Q> >
	{
		GLM_FUNC_DECL size_t operator()(glm::vec<2, _Ty, Q> const& v) const GLM_NOEXCEPT;
	};

	template<typename _Ty, glm::qualifier Q>
	struct hash<glm::vec<3, _Ty,Q> >
	{
		GLM_FUNC_DECL size_t operator()(glm::vec<3, _Ty, Q> const& v) const GLM_NOEXCEPT;
	};

	template<typename _Ty, glm::qualifier Q>
	struct hash<glm::vec<4, _Ty,Q> >
	{
		GLM_FUNC_DECL size_t operator()(glm::vec<4, _Ty, Q> const& v) const GLM_NOEXCEPT;
	};

	template<typename _Ty, glm::qualifier Q>
	struct hash<glm::qua<_Ty,Q>>
	{
		GLM_FUNC_DECL size_t operator()(glm::qua<_Ty, Q> const& q) const GLM_NOEXCEPT;
	};

	template<typename _Ty, glm::qualifier Q>
	struct hash<glm::tdualquat<_Ty,Q> >
	{
		GLM_FUNC_DECL size_t operator()(glm::tdualquat<_Ty,Q> const& q) const GLM_NOEXCEPT;
	};

	template<typename _Ty, glm::qualifier Q>
	struct hash<glm::mat<2, 2, _Ty,Q> >
	{
		GLM_FUNC_DECL size_t operator()(glm::mat<2, 2, _Ty,Q> const& m) const GLM_NOEXCEPT;
	};

	template<typename _Ty, glm::qualifier Q>
	struct hash<glm::mat<2, 3, _Ty,Q> >
	{
		GLM_FUNC_DECL size_t operator()(glm::mat<2, 3, _Ty,Q> const& m) const GLM_NOEXCEPT;
	};

	template<typename _Ty, glm::qualifier Q>
	struct hash<glm::mat<2, 4, _Ty,Q> >
	{
		GLM_FUNC_DECL size_t operator()(glm::mat<2, 4, _Ty,Q> const& m) const GLM_NOEXCEPT;
	};

	template<typename _Ty, glm::qualifier Q>
	struct hash<glm::mat<3, 2, _Ty,Q> >
	{
		GLM_FUNC_DECL size_t operator()(glm::mat<3, 2, _Ty,Q> const& m) const GLM_NOEXCEPT;
	};

	template<typename _Ty, glm::qualifier Q>
	struct hash<glm::mat<3, 3, _Ty,Q> >
	{
		GLM_FUNC_DECL size_t operator()(glm::mat<3, 3, _Ty,Q> const& m) const GLM_NOEXCEPT;
	};

	template<typename _Ty, glm::qualifier Q>
	struct hash<glm::mat<3, 4, _Ty,Q> >
	{
		GLM_FUNC_DECL size_t operator()(glm::mat<3, 4, _Ty,Q> const& m) const GLM_NOEXCEPT;
	};

	template<typename _Ty, glm::qualifier Q>
	struct hash<glm::mat<4, 2, _Ty,Q> >
	{
		GLM_FUNC_DECL size_t operator()(glm::mat<4, 2, _Ty,Q> const& m) const GLM_NOEXCEPT;
	};

	template<typename _Ty, glm::qualifier Q>
	struct hash<glm::mat<4, 3, _Ty,Q> >
	{
		GLM_FUNC_DECL size_t operator()(glm::mat<4, 3, _Ty,Q> const& m) const GLM_NOEXCEPT;
	};

	template<typename _Ty, glm::qualifier Q>
	struct hash<glm::mat<4, 4, _Ty,Q> >
	{
		GLM_FUNC_DECL size_t operator()(glm::mat<4, 4, _Ty,Q> const& m) const GLM_NOEXCEPT;
	};
} // namespace std

#include "hash.inl"
