namespace glm{
namespace detail
{
	template<length_t C, length_t R, typename _Ty, qualifier Q, bool Aligned>
	struct compute_matrixCompMult_type<C, R, _Ty, Q, false, Aligned> {
		GLM_FUNC_QUALIFIER static mat<C, R, _Ty, Q> call(mat<C, R, _Ty, Q> const& x, mat<C, R, _Ty, Q> const& y)
		{
			return detail::compute_matrixCompMult<C, R, _Ty, Q, detail::is_aligned<Q>::value>::call(x, y);
		}
	};

	template<length_t DA, length_t DB, typename _Ty, qualifier Q>
	struct compute_outerProduct_type<DA, DB, _Ty, Q, false> {
		GLM_FUNC_QUALIFIER static typename detail::outerProduct_trait<DA, DB, _Ty, Q>::type call(vec<DA, _Ty, Q> const& c, vec<DB, _Ty, Q> const& r)
		{
			return detail::compute_outerProduct<DA, DB, _Ty, Q>::call(c, r);
		}
	};

	template<length_t C, length_t R, typename _Ty, qualifier Q, bool Aligned>
	struct compute_transpose_type<C, R, _Ty, Q, false, Aligned>
	{
		GLM_FUNC_QUALIFIER static mat<R, C, _Ty, Q> call(mat<C, R, _Ty, Q> const& m)
		{
			return detail::compute_transpose<C, R, _Ty, Q, detail::is_aligned<Q>::value>::call(m);
		}
	};

	template<length_t C, length_t R, typename _Ty, qualifier Q, bool Aligned>
	struct compute_determinant_type<C, R, _Ty, Q, false, Aligned>{
	
		GLM_FUNC_QUALIFIER static _Ty call(mat<C, R, _Ty, Q> const& m)
		{
			return detail::compute_determinant<C, R, _Ty, Q, detail::is_aligned<Q>::value>::call(m);
		}
	};
}//namespace detail
}//namespace glm
