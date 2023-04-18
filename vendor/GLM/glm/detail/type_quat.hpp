/// @ref core
/// @file glm/detail/type_quat.hpp

#pragma once

// Dependency:
#include "../detail/type_mat3x3.hpp"
#include "../detail/type_mat4x4.hpp"
#include "../detail/type_vec3.hpp"
#include "../detail/type_vec4.hpp"
#include "../ext/vector_relational.hpp"
#include "../ext/quaternion_relational.hpp"
#include "../gtc/constants.hpp"
#include "../gtc/matrix_transform.hpp"

namespace glm
{
	template<typename _Ty, qualifier Q>
	struct qua
	{
		// -- Implementation detail --

		typedef qua<_Ty, Q> type;
		typedef _Ty value_type;

		// -- Data --

#		if GLM_SILENT_WARNINGS == GLM_ENABLE
#			if GLM_COMPILER & GLM_COMPILER_GCC
#				pragma GCC diagnostic push
#				pragma GCC diagnostic ignored "-Wpedantic"
#			elif GLM_COMPILER & GLM_COMPILER_CLANG
#				pragma clang diagnostic push
#				pragma clang diagnostic ignored "-Wgnu-anonymous-struct"
#				pragma clang diagnostic ignored "-Wnested-anon-types"
#			elif GLM_COMPILER & GLM_COMPILER_VC
#				pragma warning(push)
#				pragma warning(disable: 4201)  // nonstandard extension used : nameless struct/union
#			endif
#		endif

#		if GLM_LANG & GLM_LANG_CXXMS_FLAG
			union
			{
#				ifdef GLM_FORCE_QUAT_DATA_XYZW
					struct { T x, y, z, w; };
#				else
					struct { _Ty w, x, y, z; };
#				endif

				typename detail::storage<4, _Ty, detail::is_aligned<Q>::value>::type data;
			};
#		else
#			ifdef GLM_FORCE_QUAT_DATA_XYZW
				T x, y, z, w;
#			else
				T w, x, y, z;
#			endif
#		endif

#		if GLM_SILENT_WARNINGS == GLM_ENABLE
#			if GLM_COMPILER & GLM_COMPILER_CLANG
#				pragma clang diagnostic pop
#			elif GLM_COMPILER & GLM_COMPILER_GCC
#				pragma GCC diagnostic pop
#			elif GLM_COMPILER & GLM_COMPILER_VC
#				pragma warning(pop)
#			endif
#		endif

		// -- Component accesses --

		typedef length_t length_type;

		/// Return the count of components of a quaternion
		GLM_FUNC_DECL static GLM_CONSTEXPR length_type length(){return 4;}

		GLM_FUNC_DECL GLM_CONSTEXPR _Ty & operator[](length_type i);
		GLM_FUNC_DECL GLM_CONSTEXPR _Ty const& operator[](length_type i) const;

		// -- Implicit basic constructors --

		GLM_FUNC_DECL GLM_CONSTEXPR qua() GLM_DEFAULT_CTOR;
		GLM_FUNC_DECL GLM_CONSTEXPR qua(qua<_Ty, Q> const& q) GLM_DEFAULT;
		template<qualifier P>
		GLM_FUNC_DECL GLM_CONSTEXPR qua(qua<_Ty, P> const& q);

		// -- Explicit basic constructors --

		GLM_FUNC_DECL GLM_CONSTEXPR qua(_Ty s, vec<3, _Ty, Q> const& v);

#		ifdef GLM_FORCE_QUAT_DATA_XYZW
		GLM_FUNC_DECL GLM_CONSTEXPR qua(T x, T y, T z, T w);
#		else
		GLM_FUNC_DECL GLM_CONSTEXPR qua(_Ty w, _Ty x, _Ty y, _Ty z);
#		endif

		// -- Conversion constructors --

		template<typename U, qualifier P>
		GLM_FUNC_DECL GLM_CONSTEXPR GLM_EXPLICIT qua(qua<U, P> const& q);

		/// Explicit conversion operators
#		if GLM_HAS_EXPLICIT_CONVERSION_OPERATORS
			GLM_FUNC_DECL explicit operator mat<3, 3, _Ty, Q>() const;
			GLM_FUNC_DECL explicit operator mat<4, 4, _Ty, Q>() const;
#		endif

		/// Create a quaternion from two normalized axis
		///
		/// @param u A first normalized axis
		/// @param v A second normalized axis
		/// @see gtc_quaternion
		/// @see http://lolengine.net/blog/2013/09/18/beautiful-maths-quaternion-from-vectors
		GLM_FUNC_DECL qua(vec<3, _Ty, Q> const& u, vec<3, _Ty, Q> const& v);

		/// Build a quaternion from euler angles (pitch, yaw, roll), in radians.
		GLM_FUNC_DECL GLM_CONSTEXPR GLM_EXPLICIT qua(vec<3, _Ty, Q> const& eulerAngles);
		GLM_FUNC_DECL GLM_EXPLICIT qua(mat<3, 3, _Ty, Q> const& q);
		GLM_FUNC_DECL GLM_EXPLICIT qua(mat<4, 4, _Ty, Q> const& q);

		// -- Unary arithmetic operators --

		GLM_FUNC_DECL GLM_CONSTEXPR qua<_Ty, Q>& operator=(qua<_Ty, Q> const& q) GLM_DEFAULT;

		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR qua<_Ty, Q>& operator=(qua<U, Q> const& q);
		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR qua<_Ty, Q>& operator+=(qua<U, Q> const& q);
		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR qua<_Ty, Q>& operator-=(qua<U, Q> const& q);
		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR qua<_Ty, Q>& operator*=(qua<U, Q> const& q);
		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR qua<_Ty, Q>& operator*=(U s);
		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR qua<_Ty, Q>& operator/=(U s);
	};

	// -- Unary bit operators --

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR qua<_Ty, Q> operator+(qua<_Ty, Q> const& q);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR qua<_Ty, Q> operator-(qua<_Ty, Q> const& q);

	// -- Binary operators --

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR qua<_Ty, Q> operator+(qua<_Ty, Q> const& q, qua<_Ty, Q> const& p);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR qua<_Ty, Q> operator-(qua<_Ty, Q> const& q, qua<_Ty, Q> const& p);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR qua<_Ty, Q> operator*(qua<_Ty, Q> const& q, qua<_Ty, Q> const& p);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<3, _Ty, Q> operator*(qua<_Ty, Q> const& q, vec<3, _Ty, Q> const& v);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<3, _Ty, Q> operator*(vec<3, _Ty, Q> const& v, qua<_Ty, Q> const& q);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> operator*(qua<_Ty, Q> const& q, vec<4, _Ty, Q> const& v);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<4, _Ty, Q> operator*(vec<4, _Ty, Q> const& v, qua<_Ty, Q> const& q);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR qua<_Ty, Q> operator*(qua<_Ty, Q> const& q, _Ty const& s);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR qua<_Ty, Q> operator*(_Ty const& s, qua<_Ty, Q> const& q);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR qua<_Ty, Q> operator/(qua<_Ty, Q> const& q, _Ty const& s);

	// -- Boolean operators --

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR bool operator==(qua<_Ty, Q> const& q1, qua<_Ty, Q> const& q2);

	template<typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR bool operator!=(qua<_Ty, Q> const& q1, qua<_Ty, Q> const& q2);
} //namespace glm

#ifndef GLM_EXTERNAL_TEMPLATE
#include "type_quat.inl"
#endif//GLM_EXTERNAL_TEMPLATE
