/// @ref gtx_type_trait

namespace glm
{
	template<typename _Ty>
	bool const type<_Ty>::is_vec;
	template<typename _Ty>
	bool const type<_Ty>::is_mat;
	template<typename _Ty>
	bool const type<_Ty>::is_quat;
	template<typename _Ty>
	length_t const type<_Ty>::components;
	template<typename _Ty>
	length_t const type<_Ty>::cols;
	template<typename _Ty>
	length_t const type<_Ty>::rows;

	// vec
	template<length_t L, typename _Ty, qualifier Q>
	bool const type<vec<L, _Ty, Q> >::is_vec;
	template<length_t L, typename _Ty, qualifier Q>
	bool const type<vec<L, _Ty, Q> >::is_mat;
	template<length_t L, typename _Ty, qualifier Q>
	bool const type<vec<L, _Ty, Q> >::is_quat;
	template<length_t L, typename _Ty, qualifier Q>
	length_t const type<vec<L, _Ty, Q> >::components;

	// mat
	template<length_t C, length_t R, typename _Ty, qualifier Q>
	bool const type<mat<C, R, _Ty, Q> >::is_vec;
	template<length_t C, length_t R, typename _Ty, qualifier Q>
	bool const type<mat<C, R, _Ty, Q> >::is_mat;
	template<length_t C, length_t R, typename _Ty, qualifier Q>
	bool const type<mat<C, R, _Ty, Q> >::is_quat;
	template<length_t C, length_t R, typename _Ty, qualifier Q>
	length_t const type<mat<C, R, _Ty, Q> >::components;
	template<length_t C, length_t R, typename _Ty, qualifier Q>
	length_t const type<mat<C, R, _Ty, Q> >::cols;
	template<length_t C, length_t R, typename _Ty, qualifier Q>
	length_t const type<mat<C, R, _Ty, Q> >::rows;

	// tquat
	template<typename _Ty, qualifier Q>
	bool const type<qua<_Ty, Q> >::is_vec;
	template<typename _Ty, qualifier Q>
	bool const type<qua<_Ty, Q> >::is_mat;
	template<typename _Ty, qualifier Q>
	bool const type<qua<_Ty, Q> >::is_quat;
	template<typename _Ty, qualifier Q>
	length_t const type<qua<_Ty, Q> >::components;

	// tdualquat
	template<typename _Ty, qualifier Q>
	bool const type<tdualquat<_Ty, Q> >::is_vec;
	template<typename _Ty, qualifier Q>
	bool const type<tdualquat<_Ty, Q> >::is_mat;
	template<typename _Ty, qualifier Q>
	bool const type<tdualquat<_Ty, Q> >::is_quat;
	template<typename _Ty, qualifier Q>
	length_t const type<tdualquat<_Ty, Q> >::components;
}//namespace glm
