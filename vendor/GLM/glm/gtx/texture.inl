/// @ref gtx_texture

namespace glm
{
	template <length_t L, typename _Ty, qualifier Q>
	inline _Ty levels(vec<L, _Ty, Q> const& Extent)
	{
		return glm::log2(compMax(Extent)) + static_cast<_Ty>(1);
	}

	template <typename _Ty>
	inline _Ty levels(_Ty Extent)
	{
		return vec<1, _Ty, defaultp>(Extent).x;
	}
}//namespace glm

