/// @ref gtx_exterior_product

#include <limits>

namespace glm {
namespace detail
{
	template<typename _Ty, qualifier Q, bool Aligned>
	struct compute_cross_vec2
	{
		GLM_FUNC_QUALIFIER static _Ty call(vec<2, _Ty, Q> const& v, vec<2, _Ty, Q> const& u)
		{
			GLM_STATIC_ASSERT(std::numeric_limits<_Ty>::is_iec559, "'cross' accepts only floating-point inputs");

			return v.x * u.y - u.x * v.y;
		}
	};
}//namespace detail

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER _Ty cross(vec<2, _Ty, Q> const& x, vec<2, _Ty, Q> const& y)
	{
		return detail::compute_cross_vec2<_Ty, Q, detail::is_aligned<Q>::value>::call(x, y);
	}
}//namespace glm

