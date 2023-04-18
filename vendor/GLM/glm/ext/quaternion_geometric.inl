namespace glm
{
	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER _Ty dot(qua<_Ty, Q> const& x, qua<_Ty, Q> const& y)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<_Ty>::is_iec559, "'dot' accepts only floating-point inputs");
		return detail::compute_dot<qua<_Ty, Q>, _Ty, detail::is_aligned<Q>::value>::call(x, y);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER _Ty length(qua<_Ty, Q> const& q)
	{
		return glm::sqrt(dot(q, q));
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER qua<_Ty, Q> normalize(qua<_Ty, Q> const& q)
	{
		_Ty len = length(q);
		if(len <= static_cast<_Ty>(0)) // Problem
			return qua<_Ty, Q>(static_cast<_Ty>(1), static_cast<_Ty>(0), static_cast<_Ty>(0), static_cast<_Ty>(0));
		_Ty oneOverLen = static_cast<_Ty>(1) / len;
		return qua<_Ty, Q>(q.w * oneOverLen, q.x * oneOverLen, q.y * oneOverLen, q.z * oneOverLen);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER qua<_Ty, Q> cross(qua<_Ty, Q> const& q1, qua<_Ty, Q> const& q2)
	{
		return qua<_Ty, Q>(
			q1.w * q2.w - q1.x * q2.x - q1.y * q2.y - q1.z * q2.z,
			q1.w * q2.x + q1.x * q2.w + q1.y * q2.z - q1.z * q2.y,
			q1.w * q2.y + q1.y * q2.w + q1.z * q2.x - q1.x * q2.z,
			q1.w * q2.z + q1.z * q2.w + q1.x * q2.y - q1.y * q2.x);
	}
}//namespace glm

