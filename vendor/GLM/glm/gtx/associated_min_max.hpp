/// @ref gtx_associated_min_max
/// @file glm/gtx/associated_min_max.hpp
///
/// @see core (dependence)
/// @see gtx_extented_min_max (dependence)
///
/// @defgroup gtx_associated_min_max GLM_GTX_associated_min_max
/// @ingroup gtx
///
/// Include <glm/gtx/associated_min_max.hpp> to use the features of this extension.
///
/// @brief Min and max functions that return associated values not the compared ones.

#pragma once

// Dependency:
#include "../glm.hpp"

#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	ifndef GLM_ENABLE_EXPERIMENTAL
#		pragma message("GLM: GLM_GTX_associated_min_max is an experimental extension and may change in the future. Use #define GLM_ENABLE_EXPERIMENTAL before including it, if you really want to use it.")
#	else
#		pragma message("GLM: GLM_GTX_associated_min_max extension included")
#	endif
#endif

namespace glm
{
	/// @addtogroup gtx_associated_min_max
	/// @{

	/// Minimum comparison between 2 variables and returns 2 associated variable values
	/// @see gtx_associated_min_max
	template<typename _Ty, typename U>
	GLM_FUNC_DECL U associatedMin(_Ty x, U a, _Ty y, U b);

	/// Minimum comparison between 2 variables and returns 2 associated variable values
	/// @see gtx_associated_min_max
	template<length_t L, typename _Ty, typename U, qualifier Q>
	GLM_FUNC_DECL vec<L, U, Q> associatedMin(
		vec<L, _Ty, Q> const& x, vec<L, U, Q> const& a,
		vec<L, _Ty, Q> const& y, vec<L, U, Q> const& b);

	/// Minimum comparison between 2 variables and returns 2 associated variable values
	/// @see gtx_associated_min_max
	template<length_t L, typename _Ty, typename U, qualifier Q>
	GLM_FUNC_DECL vec<L, U, Q> associatedMin(
		_Ty x, const vec<L, U, Q>& a,
		_Ty y, const vec<L, U, Q>& b);

	/// Minimum comparison between 2 variables and returns 2 associated variable values
	/// @see gtx_associated_min_max
	template<length_t L, typename _Ty, typename U, qualifier Q>
	GLM_FUNC_DECL vec<L, U, Q> associatedMin(
		vec<L, _Ty, Q> const& x, U a,
		vec<L, _Ty, Q> const& y, U b);

	/// Minimum comparison between 3 variables and returns 3 associated variable values
	/// @see gtx_associated_min_max
	template<typename _Ty, typename U>
	GLM_FUNC_DECL U associatedMin(
		_Ty x, U a,
		_Ty y, U b,
		_Ty z, U c);

	/// Minimum comparison between 3 variables and returns 3 associated variable values
	/// @see gtx_associated_min_max
	template<length_t L, typename _Ty, typename U, qualifier Q>
	GLM_FUNC_DECL vec<L, U, Q> associatedMin(
		vec<L, _Ty, Q> const& x, vec<L, U, Q> const& a,
		vec<L, _Ty, Q> const& y, vec<L, U, Q> const& b,
		vec<L, _Ty, Q> const& z, vec<L, U, Q> const& c);

	/// Minimum comparison between 4 variables and returns 4 associated variable values
	/// @see gtx_associated_min_max
	template<typename _Ty, typename U>
	GLM_FUNC_DECL U associatedMin(
		_Ty x, U a,
		_Ty y, U b,
		_Ty z, U c,
		_Ty w, U d);

	/// Minimum comparison between 4 variables and returns 4 associated variable values
	/// @see gtx_associated_min_max
	template<length_t L, typename _Ty, typename U, qualifier Q>
	GLM_FUNC_DECL vec<L, U, Q> associatedMin(
		vec<L, _Ty, Q> const& x, vec<L, U, Q> const& a,
		vec<L, _Ty, Q> const& y, vec<L, U, Q> const& b,
		vec<L, _Ty, Q> const& z, vec<L, U, Q> const& c,
		vec<L, _Ty, Q> const& w, vec<L, U, Q> const& d);

	/// Minimum comparison between 4 variables and returns 4 associated variable values
	/// @see gtx_associated_min_max
	template<length_t L, typename _Ty, typename U, qualifier Q>
	GLM_FUNC_DECL vec<L, U, Q> associatedMin(
		_Ty x, vec<L, U, Q> const& a,
		_Ty y, vec<L, U, Q> const& b,
		_Ty z, vec<L, U, Q> const& c,
		_Ty w, vec<L, U, Q> const& d);

	/// Minimum comparison between 4 variables and returns 4 associated variable values
	/// @see gtx_associated_min_max
	template<length_t L, typename _Ty, typename U, qualifier Q>
	GLM_FUNC_DECL vec<L, U, Q> associatedMin(
		vec<L, _Ty, Q> const& x, U a,
		vec<L, _Ty, Q> const& y, U b,
		vec<L, _Ty, Q> const& z, U c,
		vec<L, _Ty, Q> const& w, U d);

	/// Maximum comparison between 2 variables and returns 2 associated variable values
	/// @see gtx_associated_min_max
	template<typename _Ty, typename U>
	GLM_FUNC_DECL U associatedMax(_Ty x, U a, _Ty y, U b);

	/// Maximum comparison between 2 variables and returns 2 associated variable values
	/// @see gtx_associated_min_max
	template<length_t L, typename _Ty, typename U, qualifier Q>
	GLM_FUNC_DECL vec<L, U, Q> associatedMax(
		vec<L, _Ty, Q> const& x, vec<L, U, Q> const& a,
		vec<L, _Ty, Q> const& y, vec<L, U, Q> const& b);

	/// Maximum comparison between 2 variables and returns 2 associated variable values
	/// @see gtx_associated_min_max
	template<length_t L, typename _Ty, typename U, qualifier Q>
	GLM_FUNC_DECL vec<L, _Ty, Q> associatedMax(
		_Ty x, vec<L, U, Q> const& a,
		_Ty y, vec<L, U, Q> const& b);

	/// Maximum comparison between 2 variables and returns 2 associated variable values
	/// @see gtx_associated_min_max
	template<length_t L, typename _Ty, typename U, qualifier Q>
	GLM_FUNC_DECL vec<L, U, Q> associatedMax(
		vec<L, _Ty, Q> const& x, U a,
		vec<L, _Ty, Q> const& y, U b);

	/// Maximum comparison between 3 variables and returns 3 associated variable values
	/// @see gtx_associated_min_max
	template<typename _Ty, typename U>
	GLM_FUNC_DECL U associatedMax(
		_Ty x, U a,
		_Ty y, U b,
		_Ty z, U c);

	/// Maximum comparison between 3 variables and returns 3 associated variable values
	/// @see gtx_associated_min_max
	template<length_t L, typename _Ty, typename U, qualifier Q>
	GLM_FUNC_DECL vec<L, U, Q> associatedMax(
		vec<L, _Ty, Q> const& x, vec<L, U, Q> const& a,
		vec<L, _Ty, Q> const& y, vec<L, U, Q> const& b,
		vec<L, _Ty, Q> const& z, vec<L, U, Q> const& c);

	/// Maximum comparison between 3 variables and returns 3 associated variable values
	/// @see gtx_associated_min_max
	template<length_t L, typename _Ty, typename U, qualifier Q>
	GLM_FUNC_DECL vec<L, _Ty, Q> associatedMax(
		_Ty x, vec<L, U, Q> const& a,
		_Ty y, vec<L, U, Q> const& b,
		_Ty z, vec<L, U, Q> const& c);

	/// Maximum comparison between 3 variables and returns 3 associated variable values
	/// @see gtx_associated_min_max
	template<length_t L, typename _Ty, typename U, qualifier Q>
	GLM_FUNC_DECL vec<L, U, Q> associatedMax(
		vec<L, _Ty, Q> const& x, U a,
		vec<L, _Ty, Q> const& y, U b,
		vec<L, _Ty, Q> const& z, U c);

	/// Maximum comparison between 4 variables and returns 4 associated variable values
	/// @see gtx_associated_min_max
	template<typename _Ty, typename U>
	GLM_FUNC_DECL U associatedMax(
		_Ty x, U a,
		_Ty y, U b,
		_Ty z, U c,
		_Ty w, U d);

	/// Maximum comparison between 4 variables and returns 4 associated variable values
	/// @see gtx_associated_min_max
	template<length_t L, typename _Ty, typename U, qualifier Q>
	GLM_FUNC_DECL vec<L, U, Q> associatedMax(
		vec<L, _Ty, Q> const& x, vec<L, U, Q> const& a,
		vec<L, _Ty, Q> const& y, vec<L, U, Q> const& b,
		vec<L, _Ty, Q> const& z, vec<L, U, Q> const& c,
		vec<L, _Ty, Q> const& w, vec<L, U, Q> const& d);

	/// Maximum comparison between 4 variables and returns 4 associated variable values
	/// @see gtx_associated_min_max
	template<length_t L, typename _Ty, typename U, qualifier Q>
	GLM_FUNC_DECL vec<L, U, Q> associatedMax(
		_Ty x, vec<L, U, Q> const& a,
		_Ty y, vec<L, U, Q> const& b,
		_Ty z, vec<L, U, Q> const& c,
		_Ty w, vec<L, U, Q> const& d);

	/// Maximum comparison between 4 variables and returns 4 associated variable values
	/// @see gtx_associated_min_max
	template<length_t L, typename _Ty, typename U, qualifier Q>
	GLM_FUNC_DECL vec<L, U, Q> associatedMax(
		vec<L, _Ty, Q> const& x, U a,
		vec<L, _Ty, Q> const& y, U b,
		vec<L, _Ty, Q> const& z, U c,
		vec<L, _Ty, Q> const& w, U d);

	/// @}
} //namespace glm

#include "associated_min_max.inl"
