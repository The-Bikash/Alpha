/// @ref ext_vector_relational
/// @file glm/ext/vector_relational.inl

// Dependency:
#include "../ext/vector_relational.hpp"
#include "../common.hpp"

namespace glm
{
	template<length_t C, length_t R, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<C, bool, Q> equal(mat<C, R, _Ty, Q> const& a, mat<C, R, _Ty, Q> const& b)
	{
		vec<C, bool, Q> Result(true);
		for(length_t i = 0; i < C; ++i)
			Result[i] = all(equal(a[i], b[i]));
		return Result;
	}

	template<length_t C, length_t R, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<C, bool, Q> equal(mat<C, R, _Ty, Q> const& a, mat<C, R, _Ty, Q> const& b, _Ty Epsilon)
	{
		return equal(a, b, vec<C, _Ty, Q>(Epsilon));
	}

	template<length_t C, length_t R, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<C, bool, Q> equal(mat<C, R, _Ty, Q> const& a, mat<C, R, _Ty, Q> const& b, vec<C, _Ty, Q> const& Epsilon)
	{
		vec<C, bool, Q> Result(true);
		for(length_t i = 0; i < C; ++i)
			Result[i] = all(equal(a[i], b[i], Epsilon[i]));
		return Result;
	}

	template<length_t C, length_t R, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<C, bool, Q> notEqual(mat<C, R, _Ty, Q> const& a, mat<C, R, _Ty, Q> const& b)
	{
		vec<C, bool, Q> Result(true);
		for(length_t i = 0; i < C; ++i)
			Result[i] = any(notEqual(a[i], b[i]));
		return Result;
	}

	template<length_t C, length_t R, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<C, bool, Q> notEqual(mat<C, R, _Ty, Q> const& a, mat<C, R, _Ty, Q> const& b, _Ty Epsilon)
	{
		return notEqual(a, b, vec<C, _Ty, Q>(Epsilon));
	}

	template<length_t C, length_t R, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<C, bool, Q> notEqual(mat<C, R, _Ty, Q> const& a, mat<C, R, _Ty, Q> const& b, vec<C, _Ty, Q> const& Epsilon)
	{
		vec<C, bool, Q> Result(true);
		for(length_t i = 0; i < C; ++i)
			Result[i] = any(notEqual(a[i], b[i], Epsilon[i]));
		return Result;
	}

	template<length_t C, length_t R, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<C, bool, Q> equal(mat<C, R, _Ty, Q> const& a, mat<C, R, _Ty, Q> const& b, int MaxULPs)
	{
		return equal(a, b, vec<C, int, Q>(MaxULPs));
	}

	template<length_t C, length_t R, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<C, bool, Q> equal(mat<C, R, _Ty, Q> const& a, mat<C, R, _Ty, Q> const& b, vec<C, int, Q> const& MaxULPs)
	{
		vec<C, bool, Q> Result(true);
		for(length_t i = 0; i < C; ++i)
			Result[i] = all(equal(a[i], b[i], MaxULPs[i]));
		return Result;
	}

	template<length_t C, length_t R, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<C, bool, Q> notEqual(mat<C, R, _Ty, Q> const& a, mat<C, R, _Ty, Q> const& b, int MaxULPs)
	{
		return notEqual(a, b, vec<C, int, Q>(MaxULPs));
	}

	template<length_t C, length_t R, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<C, bool, Q> notEqual(mat<C, R, _Ty, Q> const& a, mat<C, R, _Ty, Q> const& b, vec<C, int, Q> const& MaxULPs)
	{
		vec<C, bool, Q> Result(true);
		for(length_t i = 0; i < C; ++i)
			Result[i] = any(notEqual(a[i], b[i], MaxULPs[i]));
		return Result;
	}

}//namespace glm
