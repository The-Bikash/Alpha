/// @ref gtx_hash

namespace glm {
namespace detail
{
	GLM_INLINE void hash_combine(size_t &seed, size_t hash)
	{
		hash += 0x9e3779b9 + (seed << 6) + (seed >> 2);
		seed ^= hash;
	}
}}

namespace std
{
	template<typename _Ty, glm::qualifier Q>
	GLM_FUNC_QUALIFIER size_t hash<glm::vec<1, _Ty, Q>>::operator()(glm::vec<1, _Ty, Q> const& v) const GLM_NOEXCEPT
	{
		hash<_Ty> hasher;
		return hasher(v.x);
	}

	template<typename _Ty, glm::qualifier Q>
	GLM_FUNC_QUALIFIER size_t hash<glm::vec<2, _Ty, Q>>::operator()(glm::vec<2, _Ty, Q> const& v) const GLM_NOEXCEPT
	{
		size_t seed = 0;
		hash<_Ty> hasher;
		glm::detail::hash_combine(seed, hasher(v.x));
		glm::detail::hash_combine(seed, hasher(v.y));
		return seed;
	}

	template<typename _Ty, glm::qualifier Q>
	GLM_FUNC_QUALIFIER size_t hash<glm::vec<3, _Ty, Q>>::operator()(glm::vec<3, _Ty, Q> const& v) const GLM_NOEXCEPT
	{
		size_t seed = 0;
		hash<_Ty> hasher;
		glm::detail::hash_combine(seed, hasher(v.x));
		glm::detail::hash_combine(seed, hasher(v.y));
		glm::detail::hash_combine(seed, hasher(v.z));
		return seed;
	}

	template<typename _Ty, glm::qualifier Q>
	GLM_FUNC_QUALIFIER size_t hash<glm::vec<4, _Ty, Q>>::operator()(glm::vec<4, _Ty, Q> const& v) const GLM_NOEXCEPT
	{
		size_t seed = 0;
		hash<_Ty> hasher;
		glm::detail::hash_combine(seed, hasher(v.x));
		glm::detail::hash_combine(seed, hasher(v.y));
		glm::detail::hash_combine(seed, hasher(v.z));
		glm::detail::hash_combine(seed, hasher(v.w));
		return seed;
	}

	template<typename _Ty, glm::qualifier Q>
	GLM_FUNC_QUALIFIER size_t hash<glm::qua<_Ty, Q>>::operator()(glm::qua<_Ty,Q> const& q) const GLM_NOEXCEPT
	{
		size_t seed = 0;
		hash<_Ty> hasher;
		glm::detail::hash_combine(seed, hasher(q.x));
		glm::detail::hash_combine(seed, hasher(q.y));
		glm::detail::hash_combine(seed, hasher(q.z));
		glm::detail::hash_combine(seed, hasher(q.w));
		return seed;
	}

	template<typename _Ty, glm::qualifier Q>
	GLM_FUNC_QUALIFIER size_t hash<glm::tdualquat<_Ty, Q>>::operator()(glm::tdualquat<_Ty, Q> const& q) const GLM_NOEXCEPT
	{
		size_t seed = 0;
		hash<glm::qua<_Ty, Q>> hasher;
		glm::detail::hash_combine(seed, hasher(q.real));
		glm::detail::hash_combine(seed, hasher(q.dual));
		return seed;
	}

	template<typename _Ty, glm::qualifier Q>
	GLM_FUNC_QUALIFIER size_t hash<glm::mat<2, 2, _Ty, Q>>::operator()(glm::mat<2, 2, _Ty, Q> const& m) const GLM_NOEXCEPT
	{
		size_t seed = 0;
		hash<glm::vec<2, _Ty, Q>> hasher;
		glm::detail::hash_combine(seed, hasher(m[0]));
		glm::detail::hash_combine(seed, hasher(m[1]));
		return seed;
	}

	template<typename _Ty, glm::qualifier Q>
	GLM_FUNC_QUALIFIER size_t hash<glm::mat<2, 3, _Ty, Q>>::operator()(glm::mat<2, 3, _Ty, Q> const& m) const GLM_NOEXCEPT
	{
		size_t seed = 0;
		hash<glm::vec<3, _Ty, Q>> hasher;
		glm::detail::hash_combine(seed, hasher(m[0]));
		glm::detail::hash_combine(seed, hasher(m[1]));
		return seed;
	}

	template<typename _Ty, glm::qualifier Q>
	GLM_FUNC_QUALIFIER size_t hash<glm::mat<2, 4, _Ty, Q>>::operator()(glm::mat<2, 4, _Ty, Q> const& m) const GLM_NOEXCEPT
	{
		size_t seed = 0;
		hash<glm::vec<4, _Ty, Q>> hasher;
		glm::detail::hash_combine(seed, hasher(m[0]));
		glm::detail::hash_combine(seed, hasher(m[1]));
		return seed;
	}

	template<typename _Ty, glm::qualifier Q>
	GLM_FUNC_QUALIFIER size_t hash<glm::mat<3, 2, _Ty, Q>>::operator()(glm::mat<3, 2, _Ty, Q> const& m) const GLM_NOEXCEPT
	{
		size_t seed = 0;
		hash<glm::vec<2, _Ty, Q>> hasher;
		glm::detail::hash_combine(seed, hasher(m[0]));
		glm::detail::hash_combine(seed, hasher(m[1]));
		glm::detail::hash_combine(seed, hasher(m[2]));
		return seed;
	}

	template<typename _Ty, glm::qualifier Q>
	GLM_FUNC_QUALIFIER size_t hash<glm::mat<3, 3, _Ty, Q>>::operator()(glm::mat<3, 3, _Ty, Q> const& m) const GLM_NOEXCEPT
	{
		size_t seed = 0;
		hash<glm::vec<3, _Ty, Q>> hasher;
		glm::detail::hash_combine(seed, hasher(m[0]));
		glm::detail::hash_combine(seed, hasher(m[1]));
		glm::detail::hash_combine(seed, hasher(m[2]));
		return seed;
	}

	template<typename _Ty, glm::qualifier Q>
	GLM_FUNC_QUALIFIER size_t hash<glm::mat<3, 4, _Ty, Q>>::operator()(glm::mat<3, 4, _Ty, Q> const& m) const GLM_NOEXCEPT
	{
		size_t seed = 0;
		hash<glm::vec<4, _Ty, Q>> hasher;
		glm::detail::hash_combine(seed, hasher(m[0]));
		glm::detail::hash_combine(seed, hasher(m[1]));
		glm::detail::hash_combine(seed, hasher(m[2]));
		return seed;
	}

	template<typename _Ty, glm::qualifier Q>
	GLM_FUNC_QUALIFIER size_t hash<glm::mat<4, 2, _Ty,Q>>::operator()(glm::mat<4, 2, _Ty,Q> const& m) const GLM_NOEXCEPT
	{
		size_t seed = 0;
		hash<glm::vec<2, _Ty, Q>> hasher;
		glm::detail::hash_combine(seed, hasher(m[0]));
		glm::detail::hash_combine(seed, hasher(m[1]));
		glm::detail::hash_combine(seed, hasher(m[2]));
		glm::detail::hash_combine(seed, hasher(m[3]));
		return seed;
	}

	template<typename _Ty, glm::qualifier Q>
	GLM_FUNC_QUALIFIER size_t hash<glm::mat<4, 3, _Ty,Q>>::operator()(glm::mat<4, 3, _Ty,Q> const& m) const GLM_NOEXCEPT
	{
		size_t seed = 0;
		hash<glm::vec<3, _Ty, Q>> hasher;
		glm::detail::hash_combine(seed, hasher(m[0]));
		glm::detail::hash_combine(seed, hasher(m[1]));
		glm::detail::hash_combine(seed, hasher(m[2]));
		glm::detail::hash_combine(seed, hasher(m[3]));
		return seed;
	}

	template<typename _Ty, glm::qualifier Q>
	GLM_FUNC_QUALIFIER size_t hash<glm::mat<4, 4, _Ty,Q>>::operator()(glm::mat<4, 4, _Ty, Q> const& m) const GLM_NOEXCEPT
	{
		size_t seed = 0;
		hash<glm::vec<4, _Ty, Q>> hasher;
		glm::detail::hash_combine(seed, hasher(m[0]));
		glm::detail::hash_combine(seed, hasher(m[1]));
		glm::detail::hash_combine(seed, hasher(m[2]));
		glm::detail::hash_combine(seed, hasher(m[3]));
		return seed;
	}
}
