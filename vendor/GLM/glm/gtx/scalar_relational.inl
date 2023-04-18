/// @ref gtx_scalar_relational

namespace glm
{
	template<typename _Ty>
	GLM_FUNC_QUALIFIER bool lessThan
	(
		_Ty const& x,
		_Ty const& y
	)
	{
		return x < y;
	}

	template<typename _Ty>
	GLM_FUNC_QUALIFIER bool lessThanEqual
	(
		_Ty const& x,
		_Ty const& y
	)
	{
		return x <= y;
	}

	template<typename _Ty>
	GLM_FUNC_QUALIFIER bool greaterThan
	(
		_Ty const& x,
		_Ty const& y
	)
	{
		return x > y;
	}

	template<typename _Ty>
	GLM_FUNC_QUALIFIER bool greaterThanEqual
	(
		_Ty const& x,
		_Ty const& y
	)
	{
		return x >= y;
	}

	template<typename _Ty>
	GLM_FUNC_QUALIFIER bool equal
	(
		_Ty const& x,
		_Ty const& y
	)
	{
		return detail::compute_equal<_Ty, std::numeric_limits<_Ty>::is_iec559>::call(x, y);
	}

	template<typename _Ty>
	GLM_FUNC_QUALIFIER bool notEqual
	(
		_Ty const& x,
		_Ty const& y
	)
	{
		return !detail::compute_equal<_Ty, std::numeric_limits<_Ty>::is_iec559>::call(x, y);
	}

	GLM_FUNC_QUALIFIER bool any
	(
		bool const& x
	)
	{
		return x;
	}

	GLM_FUNC_QUALIFIER bool all
	(
		bool const& x
	)
	{
		return x;
	}

	GLM_FUNC_QUALIFIER bool not_
	(
		bool const& x
	)
	{
		return !x;
	}
}//namespace glm
