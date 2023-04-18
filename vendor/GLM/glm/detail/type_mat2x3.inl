namespace glm
{
	// -- Constructors --

#	if GLM_CONFIG_DEFAULTED_DEFAULT_CTOR == GLM_DISABLE
		template<typename T, qualifier Q>
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, 3, T, Q>::mat()
#			if GLM_CONFIG_CTOR_INIT == GLM_CTOR_INITIALIZER_LIST
				: value{col_type(1, 0, 0), col_type(0, 1, 0)}
#			endif
		{
#			if GLM_CONFIG_CTOR_INIT == GLM_CTOR_INITIALISATION
				this->value[0] = col_type(1, 0, 0);
				this->value[1] = col_type(0, 1, 0);
#			endif
		}
#	endif

	template<typename _Ty, qualifier Q>
	template<qualifier P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, 3, _Ty, Q>::mat(mat<2, 3, _Ty, P> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0]), col_type(m[1])}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = m.value[0];
			this->value[1] = m.value[1];
#		endif
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, 3, _Ty, Q>::mat(_Ty scalar)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(scalar, 0, 0), col_type(0, scalar, 0)}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(scalar, 0, 0);
			this->value[1] = col_type(0, scalar, 0);
#		endif
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, 3, _Ty, Q>::mat
	(
		_Ty x0, _Ty y0, _Ty z0,
		_Ty x1, _Ty y1, _Ty z1
	)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(x0, y0, z0), col_type(x1, y1, z1)}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(x0, y0, z0);
			this->value[1] = col_type(x1, y1, z1);
#		endif
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, 3, _Ty, Q>::mat(col_type const& v0, col_type const& v1)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(v0), col_type(v1)}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(v0);
			this->value[1] = col_type(v1);
#		endif
	}

	// -- Conversion constructors --

	template<typename _Ty, qualifier Q>
	template<
		typename X1, typename Y1, typename Z1,
		typename X2, typename Y2, typename Z2>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, 3, _Ty, Q>::mat
	(
		X1 x1, Y1 y1, Z1 z1,
		X2 x2, Y2 y2, Z2 z2
	)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(x1, y1, z1), col_type(x2, y2, z2)}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(x1, y1, z1);
			this->value[1] = col_type(x2, y2, z2);
#		endif
	}

	template<typename _Ty, qualifier Q>
	template<typename V1, typename V2>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, 3, _Ty, Q>::mat(vec<3, V1, Q> const& v1, vec<3, V2, Q> const& v2)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(v1), col_type(v2)}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(v1);
			this->value[1] = col_type(v2);
#		endif
	}

	// -- Matrix conversions --

	template<typename _Ty, qualifier Q>
	template<typename U, qualifier P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, 3, _Ty, Q>::mat(mat<2, 3, U, P> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0]), col_type(m[1])}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0]);
			this->value[1] = col_type(m[1]);
#		endif
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, 3, _Ty, Q>::mat(mat<2, 2, _Ty, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0], 0), col_type(m[1], 0)}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0], 0);
			this->value[1] = col_type(m[1], 0);
#		endif
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR  mat<2, 3, _Ty, Q>::mat(mat<3, 3, _Ty, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0]), col_type(m[1])}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0]);
			this->value[1] = col_type(m[1]);
#		endif
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, 3, _Ty, Q>::mat(mat<4, 4, _Ty, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
		: value{col_type(m[0]), col_type(m[1])}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0]);
			this->value[1] = col_type(m[1]);
#		endif
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, 3, _Ty, Q>::mat(mat<2, 4, _Ty, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0]), col_type(m[1])}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0]);
			this->value[1] = col_type(m[1]);
#		endif
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, 3, _Ty, Q>::mat(mat<3, 2, _Ty, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0], 0), col_type(m[1], 0)}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0], 0);
			this->value[1] = col_type(m[1], 0);
#		endif
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, 3, _Ty, Q>::mat(mat<3, 4, _Ty, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0]), col_type(m[1])}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0]);
			this->value[1] = col_type(m[1]);
#		endif
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, 3, _Ty, Q>::mat(mat<4, 2, _Ty, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0], 0), col_type(m[1], 0)}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0], 0);
			this->value[1] = col_type(m[1], 0);
#		endif
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, 3, _Ty, Q>::mat(mat<4, 3, _Ty, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0]), col_type(m[1])}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0]);
			this->value[1] = col_type(m[1]);
#		endif
	}

	// -- Accesses --

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER typename mat<2, 3, _Ty, Q>::col_type & mat<2, 3, _Ty, Q>::operator[](typename mat<2, 3, _Ty, Q>::length_type i) GLM_NOEXCEPT
	{
		assert(i < this->length());
		return this->value[i];
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR typename mat<2, 3, _Ty, Q>::col_type const& mat<2, 3, _Ty, Q>::operator[](typename mat<2, 3, _Ty, Q>::length_type i) const GLM_NOEXCEPT
	{
		assert(i < this->length());
		return this->value[i];
	}

	// -- Unary updatable operators --

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER mat<2, 3, _Ty, Q>& mat<2, 3, _Ty, Q>::operator=(mat<2, 3, U, Q> const& m)
	{
		this->value[0] = m[0];
		this->value[1] = m[1];
		return *this;
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER mat<2, 3, _Ty, Q> & mat<2, 3, _Ty, Q>::operator+=(U s)
	{
		this->value[0] += s;
		this->value[1] += s;
		return *this;
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER mat<2, 3, _Ty, Q>& mat<2, 3, _Ty, Q>::operator+=(mat<2, 3, U, Q> const& m)
	{
		this->value[0] += m[0];
		this->value[1] += m[1];
		return *this;
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER mat<2, 3, _Ty, Q>& mat<2, 3, _Ty, Q>::operator-=(U s)
	{
		this->value[0] -= s;
		this->value[1] -= s;
		return *this;
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER mat<2, 3, _Ty, Q>& mat<2, 3, _Ty, Q>::operator-=(mat<2, 3, U, Q> const& m)
	{
		this->value[0] -= m[0];
		this->value[1] -= m[1];
		return *this;
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER mat<2, 3, _Ty, Q>& mat<2, 3, _Ty, Q>::operator*=(U s)
	{
		this->value[0] *= s;
		this->value[1] *= s;
		return *this;
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER mat<2, 3, _Ty, Q> & mat<2, 3, _Ty, Q>::operator/=(U s)
	{
		this->value[0] /= s;
		this->value[1] /= s;
		return *this;
	}

	// -- Increment and decrement operators --

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER mat<2, 3, _Ty, Q> & mat<2, 3, _Ty, Q>::operator++()
	{
		++this->value[0];
		++this->value[1];
		return *this;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER mat<2, 3, _Ty, Q> & mat<2, 3, _Ty, Q>::operator--()
	{
		--this->value[0];
		--this->value[1];
		return *this;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER mat<2, 3, _Ty, Q> mat<2, 3, _Ty, Q>::operator++(int)
	{
		mat<2, 3, _Ty, Q> Result(*this);
		++*this;
		return Result;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER mat<2, 3, _Ty, Q> mat<2, 3, _Ty, Q>::operator--(int)
	{
		mat<2, 3, _Ty, Q> Result(*this);
		--*this;
		return Result;
	}

	// -- Unary arithmetic operators --

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER mat<2, 3, _Ty, Q> operator+(mat<2, 3, _Ty, Q> const& m)
	{
		return m;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER mat<2, 3, _Ty, Q> operator-(mat<2, 3, _Ty, Q> const& m)
	{
		return mat<2, 3, _Ty, Q>(
			-m[0],
			-m[1]);
	}

	// -- Binary arithmetic operators --

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER mat<2, 3, _Ty, Q> operator+(mat<2, 3, _Ty, Q> const& m, _Ty scalar)
	{
		return mat<2, 3, _Ty, Q>(
			m[0] + scalar,
			m[1] + scalar);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER mat<2, 3, _Ty, Q> operator+(mat<2, 3, _Ty, Q> const& m1, mat<2, 3, _Ty, Q> const& m2)
	{
		return mat<2, 3, _Ty, Q>(
			m1[0] + m2[0],
			m1[1] + m2[1]);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER mat<2, 3, _Ty, Q> operator-(mat<2, 3, _Ty, Q> const& m, _Ty scalar)
	{
		return mat<2, 3, _Ty, Q>(
			m[0] - scalar,
			m[1] - scalar);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER mat<2, 3, _Ty, Q> operator-(mat<2, 3, _Ty, Q> const& m1, mat<2, 3, _Ty, Q> const& m2)
	{
		return mat<2, 3, _Ty, Q>(
			m1[0] - m2[0],
			m1[1] - m2[1]);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER mat<2, 3, _Ty, Q> operator*(mat<2, 3, _Ty, Q> const& m, _Ty scalar)
	{
		return mat<2, 3, _Ty, Q>(
			m[0] * scalar,
			m[1] * scalar);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER mat<2, 3, _Ty, Q> operator*(_Ty scalar, mat<2, 3, _Ty, Q> const& m)
	{
		return mat<2, 3, _Ty, Q>(
			m[0] * scalar,
			m[1] * scalar);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER typename mat<2, 3, _Ty, Q>::col_type operator*
	(
		mat<2, 3, _Ty, Q> const& m,
		typename mat<2, 3, _Ty, Q>::row_type const& v)
	{
		return typename mat<2, 3, _Ty, Q>::col_type(
			m[0][0] * v.x + m[1][0] * v.y,
			m[0][1] * v.x + m[1][1] * v.y,
			m[0][2] * v.x + m[1][2] * v.y);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER typename mat<2, 3, _Ty, Q>::row_type operator*
	(
		typename mat<2, 3, _Ty, Q>::col_type const& v,
		mat<2, 3, _Ty, Q> const& m)
	{
		return typename mat<2, 3, _Ty, Q>::row_type(
			v.x * m[0][0] + v.y * m[0][1] + v.z * m[0][2],
			v.x * m[1][0] + v.y * m[1][1] + v.z * m[1][2]);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER mat<2, 3, _Ty, Q> operator*(mat<2, 3, _Ty, Q> const& m1, mat<2, 2, _Ty, Q> const& m2)
	{
		return mat<2, 3, _Ty, Q>(
			m1[0][0] * m2[0][0] + m1[1][0] * m2[0][1],
			m1[0][1] * m2[0][0] + m1[1][1] * m2[0][1],
			m1[0][2] * m2[0][0] + m1[1][2] * m2[0][1],
			m1[0][0] * m2[1][0] + m1[1][0] * m2[1][1],
			m1[0][1] * m2[1][0] + m1[1][1] * m2[1][1],
			m1[0][2] * m2[1][0] + m1[1][2] * m2[1][1]);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER mat<3, 3, _Ty, Q> operator*(mat<2, 3, _Ty, Q> const& m1, mat<3, 2, _Ty, Q> const& m2)
	{
		_Ty SrcA00 = m1[0][0];
		_Ty SrcA01 = m1[0][1];
		_Ty SrcA02 = m1[0][2];
		_Ty SrcA10 = m1[1][0];
		_Ty SrcA11 = m1[1][1];
		_Ty SrcA12 = m1[1][2];

		_Ty SrcB00 = m2[0][0];
		_Ty SrcB01 = m2[0][1];
		_Ty SrcB10 = m2[1][0];
		_Ty SrcB11 = m2[1][1];
		_Ty SrcB20 = m2[2][0];
		_Ty SrcB21 = m2[2][1];

		mat<3, 3, _Ty, Q> Result;
		Result[0][0] = SrcA00 * SrcB00 + SrcA10 * SrcB01;
		Result[0][1] = SrcA01 * SrcB00 + SrcA11 * SrcB01;
		Result[0][2] = SrcA02 * SrcB00 + SrcA12 * SrcB01;
		Result[1][0] = SrcA00 * SrcB10 + SrcA10 * SrcB11;
		Result[1][1] = SrcA01 * SrcB10 + SrcA11 * SrcB11;
		Result[1][2] = SrcA02 * SrcB10 + SrcA12 * SrcB11;
		Result[2][0] = SrcA00 * SrcB20 + SrcA10 * SrcB21;
		Result[2][1] = SrcA01 * SrcB20 + SrcA11 * SrcB21;
		Result[2][2] = SrcA02 * SrcB20 + SrcA12 * SrcB21;
		return Result;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER mat<4, 3, _Ty, Q> operator*(mat<2, 3, _Ty, Q> const& m1, mat<4, 2, _Ty, Q> const& m2)
	{
		return mat<4, 3, _Ty, Q>(
			m1[0][0] * m2[0][0] + m1[1][0] * m2[0][1],
			m1[0][1] * m2[0][0] + m1[1][1] * m2[0][1],
			m1[0][2] * m2[0][0] + m1[1][2] * m2[0][1],
			m1[0][0] * m2[1][0] + m1[1][0] * m2[1][1],
			m1[0][1] * m2[1][0] + m1[1][1] * m2[1][1],
			m1[0][2] * m2[1][0] + m1[1][2] * m2[1][1],
			m1[0][0] * m2[2][0] + m1[1][0] * m2[2][1],
			m1[0][1] * m2[2][0] + m1[1][1] * m2[2][1],
			m1[0][2] * m2[2][0] + m1[1][2] * m2[2][1],
			m1[0][0] * m2[3][0] + m1[1][0] * m2[3][1],
			m1[0][1] * m2[3][0] + m1[1][1] * m2[3][1],
			m1[0][2] * m2[3][0] + m1[1][2] * m2[3][1]);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER mat<2, 3, _Ty, Q> operator/(mat<2, 3, _Ty, Q> const& m, _Ty scalar)
	{
		return mat<2, 3, _Ty, Q>(
			m[0] / scalar,
			m[1] / scalar);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER mat<2, 3, _Ty, Q> operator/(_Ty scalar, mat<2, 3, _Ty, Q> const& m)
	{
		return mat<2, 3, _Ty, Q>(
			scalar / m[0],
			scalar / m[1]);
	}

	// -- Boolean operators --

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER bool operator==(mat<2, 3, _Ty, Q> const& m1, mat<2, 3, _Ty, Q> const& m2)
	{
		return (m1[0] == m2[0]) && (m1[1] == m2[1]);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER bool operator!=(mat<2, 3, _Ty, Q> const& m1, mat<2, 3, _Ty, Q> const& m2)
	{
		return (m1[0] != m2[0]) || (m1[1] != m2[1]);
	}
} //namespace glm
