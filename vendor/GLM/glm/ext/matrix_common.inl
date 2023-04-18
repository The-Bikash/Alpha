#include "../matrix.hpp"

#include "_matrix_vectorize.hpp"

namespace glm
{
	template<length_t C, length_t R, typename _Ty, typename U, qualifier Q>
	GLM_FUNC_QUALIFIER mat<C, R, _Ty, Q> mix(mat<C, R, _Ty, Q> const& x, mat<C, R, _Ty, Q> const& y, U a)
	{
		return mat<C, R, U, Q>(x) * (static_cast<U>(1) - a) + mat<C, R, U, Q>(y) * a;
	}

	template<length_t C, length_t R, typename _Ty, typename U, qualifier Q>
	GLM_FUNC_QUALIFIER mat<C, R, _Ty, Q> mix(mat<C, R, _Ty, Q> const& x, mat<C, R, _Ty, Q> const& y, mat<C, R, U, Q> const& a)
	{
		return matrixCompMult(mat<C, R, U, Q>(x), static_cast<U>(1) - a) + matrixCompMult(mat<C, R, U, Q>(y), a);
	}

	template<length_t C, length_t R, typename _Ty, qualifier Q, bool Aligned>
	struct compute_abs_matrix
	{
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR static mat<C, R, _Ty, Q> call(mat<C, R, _Ty, Q> const& x)
		{
			return detail::matrix_functor_1<mat, C, R, _Ty, _Ty, Q>::call(abs, x);
		}
	};

	template<length_t C, length_t R, typename _Ty, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR mat<C, R, _Ty, Q> abs(mat<C, R, _Ty, Q> const& x)
	{
		return compute_abs_matrix<C, R, _Ty, Q, detail::is_aligned<Q>::value>::call(x);
	}

}//namespace glm
