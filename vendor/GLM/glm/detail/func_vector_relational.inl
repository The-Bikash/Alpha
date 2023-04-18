namespace glm
{
	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, bool, Q> lessThan(vec<L, _Ty, Q> const& x, vec<L, _Ty, Q> const& y)
	{
		vec<L, bool, Q> Result(true);
		for(length_t i = 0; i < L; ++i)
			Result[i] = x[i] < y[i];
		return Result;
	}

	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, bool, Q> lessThanEqual(vec<L, _Ty, Q> const& x, vec<L, _Ty, Q> const& y)
	{
		vec<L, bool, Q> Result(true);
		for(length_t i = 0; i < L; ++i)
			Result[i] = x[i] <= y[i];
		return Result;
	}

	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, bool, Q> greaterThan(vec<L, _Ty, Q> const& x, vec<L, _Ty, Q> const& y)
	{
		vec<L, bool, Q> Result(true);
		for(length_t i = 0; i < L; ++i)
			Result[i] = x[i] > y[i];
		return Result;
	}

	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, bool, Q> greaterThanEqual(vec<L, _Ty, Q> const& x, vec<L, _Ty, Q> const& y)
	{
		vec<L, bool, Q> Result(true);
		for(length_t i = 0; i < L; ++i)
			Result[i] = x[i] >= y[i];
		return Result;
	}

	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, bool, Q> equal(vec<L, _Ty, Q> const& x, vec<L, _Ty, Q> const& y)
	{
		vec<L, bool, Q> Result(true);
		for(length_t i = 0; i < L; ++i)
			Result[i] = x[i] == y[i];
		return Result;
	}

	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, bool, Q> notEqual(vec<L, _Ty, Q> const& x, vec<L, _Ty, Q> const& y)
	{
		vec<L, bool, Q> Result(true);
		for(length_t i = 0; i < L; ++i)
			Result[i] = x[i] != y[i];
		return Result;
	}

	template<length_t L, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR bool any(vec<L, bool, Q> const& v)
	{
		bool Result = false;
		for(length_t i = 0; i < L; ++i)
			Result = Result || v[i];
		return Result;
	}

	template<length_t L, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR bool all(vec<L, bool, Q> const& v)
	{
		bool Result = true;
		for(length_t i = 0; i < L; ++i)
			Result = Result && v[i];
		return Result;
	}

	template<length_t L, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, bool, Q> not_(vec<L, bool, Q> const& v)
	{
		vec<L, bool, Q> Result(true);
		for(length_t i = 0; i < L; ++i)
			Result[i] = !v[i];
		return Result;
	}
}//namespace glm

#if GLM_CONFIG_SIMD == GLM_ENABLE
#	include "func_vector_relational_simd.inl"
#endif
