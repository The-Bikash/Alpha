/// @ref gtx_normal

namespace glm
{
	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<3, _Ty, Q> triangleNormal
	(
		vec<3, T, Q> const& p1,
		vec<3, T, Q> const& p2,
		vec<3, T, Q> const& p3
	)
	{
		return normalize(cross(p1 - p2, p1 - p3));
	}
}//namespace glm
