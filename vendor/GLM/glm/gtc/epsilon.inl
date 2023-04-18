/// @ref gtc_epsilon

// Dependency:
#include "../vector_relational.hpp"
#include "../common.hpp"

namespace glm
{
	template<>
	GLM_FUNC_QUALIFIER bool epsilonEqual
	(
		float const& x,
		float const& y,
		float const& epsilon
	)
	{
		return abs(x - y) < epsilon;
	}

	template<>
	GLM_FUNC_QUALIFIER bool epsilonEqual
	(
		double const& x,
		double const& y,
		double const& epsilon
	)
	{
		return abs(x - y) < epsilon;
	}

	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, bool, Q> epsilonEqual(vec<L, _Ty, Q> const& x, vec<L, _Ty, Q> const& y, _Ty const& epsilon)
	{
		return lessThan(abs(x - y), vec<L, _Ty, Q>(epsilon));
	}

	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, bool, Q> epsilonEqual(vec<L, _Ty, Q> const& x, vec<L, _Ty, Q> const& y, vec<L, _Ty, Q> const& epsilon)
	{
		return lessThan(abs(x - y), vec<L, _Ty, Q>(epsilon));
	}

	template<>
	GLM_FUNC_QUALIFIER bool epsilonNotEqual(float const& x, float const& y, float const& epsilon)
	{
		return abs(x - y) >= epsilon;
	}

	template<>
	GLM_FUNC_QUALIFIER bool epsilonNotEqual(double const& x, double const& y, double const& epsilon)
	{
		return abs(x - y) >= epsilon;
	}

	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, bool, Q> epsilonNotEqual(vec<L, _Ty, Q> const& x, vec<L, _Ty, Q> const& y, _Ty const& epsilon)
	{
		return greaterThanEqual(abs(x - y), vec<L, _Ty, Q>(epsilon));
	}

	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, bool, Q> epsilonNotEqual(vec<L, _Ty, Q> const& x, vec<L, _Ty, Q> const& y, vec<L, _Ty, Q> const& epsilon)
	{
		return greaterThanEqual(abs(x - y), vec<L, _Ty, Q>(epsilon));
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<4, bool, Q> epsilonEqual(qua<_Ty, Q> const& x, qua<_Ty, Q> const& y, _Ty const& epsilon)
	{
		vec<4, _Ty, Q> v(x.x - y.x, x.y - y.y, x.z - y.z, x.w - y.w);
		return lessThan(abs(v), vec<4, _Ty, Q>(epsilon));
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<4, bool, Q> epsilonNotEqual(qua<_Ty, Q> const& x, qua<_Ty, Q> const& y, _Ty const& epsilon)
	{
		vec<4, _Ty, Q> v(x.x - y.x, x.y - y.y, x.z - y.z, x.w - y.w);
		return greaterThanEqual(abs(v), vec<4, _Ty, Q>(epsilon));
	}
}//namespace glm
