/// @ref gtx_functions

#include "../exponential.hpp"

namespace glm
{
	template<typename _Ty>
	GLM_FUNC_QUALIFIER _Ty gauss
	(
		_Ty x,
		_Ty ExpectedValue,
		_Ty StandardDeviation
	)
	{
		return exp(-((x - ExpectedValue) * (x - ExpectedValue)) / (static_cast<_Ty>(2) * StandardDeviation * StandardDeviation)) / (StandardDeviation * sqrt(static_cast<_Ty>(6.28318530717958647692528676655900576)));
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER _Ty gauss
	(
		vec<2, _Ty, Q> const& Coord,
		vec<2, _Ty, Q> const& ExpectedValue,
		vec<2, _Ty, Q> const& StandardDeviation
	)
	{
		vec<2, _Ty, Q> const Squared = ((Coord - ExpectedValue) * (Coord - ExpectedValue)) / (static_cast<_Ty>(2) * StandardDeviation * StandardDeviation);
		return exp(-(Squared.x + Squared.y));
	}
}//namespace glm

