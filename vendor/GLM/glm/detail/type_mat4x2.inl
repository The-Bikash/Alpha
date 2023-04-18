namespace glm
{
	// -- Constructors --

#	if GLM_CONFIG_DEFAULTED_DEFAULT_CTOR == GLM_DISABLE
		template<typename T, qualifier Q>
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<4, 2, T, Q>::mat()
#			if GLM_CONFIG_CTOR_INIT == GLM_CTOR_INITIALIZER_LIST
				: value{col_type(1, 0), col_type(0, 1), col_type(0, 0), col_type(0, 0)}
#			endif
		{
#			if GLM_CONFIG_CTOR_INIT == GLM_CTOR_INITIALISATION
				this->value[0] = col_type(1, 0);
				this->value[1] = col_type(0, 1);
				this->value[2] = col_type(0, 0);
				this->value[3] = col_type(0, 0);
#			endif
		}
#	endif

	template<typename _Ty, qualifier Q>
	template<qualifier P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<4, 2, _Ty, Q>::mat(mat<4, 2, _Ty, P> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0]), col_type(m[1]), col_type(m[2]), col_type(m[3])}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = m[0];
			this->value[1] = m[1];
			this->value[2] = m[2];
			this->value[3] = m[3];
#		endif
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<4, 2, _Ty, Q>::mat(_Ty s)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(s, 0), col_type(0, s), col_type(0, 0), col_type(0, 0)}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(s, 0);
			this->value[1] = col_type(0, s);
			this->value[2] = col_type(0, 0);
			this->value[3] = col_type(0, 0);
#		endif
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<4, 2, _Ty, Q>::mat
	(
		_Ty x0, _Ty y0,
		_Ty x1, _Ty y1,
		_Ty x2, _Ty y2,
		_Ty x3, _Ty y3
	)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(x0, y0), col_type(x1, y1), col_type(x2, y2), col_type(x3, y3)}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(x0, y0);
			this->value[1] = col_type(x1, y1);
			this->value[2] = col_type(x2, y2);
			this->value[3] = col_type(x3, y3);
#		endif
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<4, 2, _Ty, Q>::mat(col_type const& v0, col_type const& v1, col_type const& v2, col_type const& v3)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(v0), col_type(v1), col_type(v2), col_type(v3)}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = v0;
			this->value[1] = v1;
			this->value[2] = v2;
			this->value[3] = v3;
#		endif
	}

	// -- Conversion constructors --

	template<typename _Ty, qualifier Q>
	template<
		typename X0, typename Y0,
		typename X1, typename Y1,
		typename X2, typename Y2,
		typename X3, typename Y3>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<4, 2, _Ty, Q>::mat
	(
		X0 x0, Y0 y0,
		X1 x1, Y1 y1,
		X2 x2, Y2 y2,
		X3 x3, Y3 y3
	)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(x0, y0), col_type(x1, y1), col_type(x2, y2), col_type(x3, y3)}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(x0, y0);
			this->value[1] = col_type(x1, y1);
			this->value[2] = col_type(x2, y2);
			this->value[3] = col_type(x3, y3);
#		endif
	}

	template<typename _Ty, qualifier Q>
	template<typename V0, typename V1, typename V2, typename V3>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<4, 2, _Ty, Q>::mat(vec<2, V0, Q> const& v0, vec<2, V1, Q> const& v1, vec<2, V2, Q> const& v2, vec<2, V3, Q> const& v3)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(v0), col_type(v1), col_type(v2), col_type(v3)}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(v0);
			this->value[1] = col_type(v1);
			this->value[2] = col_type(v2);
			this->value[3] = col_type(v3);
#		endif
	}

	// -- Conversion --

	template<typename _Ty, qualifier Q>
	template<typename U, qualifier P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<4, 2, _Ty, Q>::mat(mat<4, 2, U, P> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0]), col_type(m[1]), col_type(m[2]), col_type(m[3])}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0]);
			this->value[1] = col_type(m[1]);
			this->value[2] = col_type(m[2]);
			this->value[3] = col_type(m[3]);
#		endif
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<4, 2, _Ty, Q>::mat(mat<2, 2, _Ty, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0]), col_type(m[1]), col_type(0), col_type(0)}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0]);
			this->value[1] = col_type(m[1]);
			this->value[2] = col_type(0);
			this->value[3] = col_type(0);
#		endif
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<4, 2, _Ty, Q>::mat(mat<3, 3, _Ty, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0]), col_type(m[1]), col_type(m[2]), col_type(0)}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0]);
			this->value[1] = col_type(m[1]);
			this->value[2] = col_type(m[2]);
			this->value[3] = col_type(0);
#		endif
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<4, 2, _Ty, Q>::mat(mat<4, 4, _Ty, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0]), col_type(m[1]), col_type(m[2]), col_type(m[3])}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0]);
			this->value[1] = col_type(m[1]);
			this->value[2] = col_type(m[2]);
			this->value[3] = col_type(m[3]);
#		endif
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<4, 2, _Ty, Q>::mat(mat<2, 3, _Ty, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0]), col_type(m[1]), col_type(0), col_type(0)}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0]);
			this->value[1] = col_type(m[1]);
			this->value[2] = col_type(0);
			this->value[3] = col_type(0);
#		endif
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<4, 2, _Ty, Q>::mat(mat<3, 2, _Ty, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0]), col_type(m[1]), col_type(m[2]), col_type(0)}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0]);
			this->value[1] = col_type(m[1]);
			this->value[2] = col_type(m[2]);
			this->value[3] = col_type(0);
#		endif
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<4, 2, _Ty, Q>::mat(mat<2, 4, _Ty, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0]), col_type(m[1]), col_type(0), col_type(0)}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0]);
			this->value[1] = col_type(m[1]);
			this->value[2] = col_type(0);
			this->value[3] = col_type(0);
#		endif
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<4, 2, _Ty, Q>::mat(mat<4, 3, _Ty, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0]), col_type(m[1]), col_type(m[2]), col_type(m[3])}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
				this->value[0] = col_type(m[0]);
				this->value[1] = col_type(m[1]);
				this->value[2] = col_type(m[2]);
				this->value[3] = col_type(m[3]);
#		endif
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<4, 2, _Ty, Q>::mat(mat<3, 4, _Ty, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0]), col_type(m[1]), col_type(m[2]), col_type(0)}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0]);
			this->value[1] = col_type(m[1]);
			this->value[2] = col_type(m[2]);
			this->value[3] = col_type(0);
#		endif
	}

	// -- Accesses --

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER typename mat<4, 2, _Ty, Q>::col_type & mat<4, 2, _Ty, Q>::operator[](typename mat<4, 2, _Ty, Q>::length_type i) GLM_NOEXCEPT
	{
		assert(i < this->length());
		return this->value[i];
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR typename mat<4, 2, _Ty, Q>::col_type const& mat<4, 2, _Ty, Q>::operator[](typename mat<4, 2, _Ty, Q>::length_type i) const GLM_NOEXCEPT
	{
		assert(i < this->length());
		return this->value[i];
	}

	// -- Unary updatable operators --

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER mat<4, 2, _Ty, Q>& mat<4, 2, _Ty, Q>::operator=(mat<4, 2, U, Q> const& m)
	{
		this->value[0] = m[0];
		this->value[1] = m[1];
		this->value[2] = m[2];
		this->value[3] = m[3];
		return *this;
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER mat<4, 2, _Ty, Q> & mat<4, 2, _Ty, Q>::operator+=(U s)
	{
		this->value[0] += s;
		this->value[1] += s;
		this->value[2] += s;
		this->value[3] += s;
		return *this;
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER mat<4, 2, _Ty, Q> & mat<4, 2, _Ty, Q>::operator+=(mat<4, 2, U, Q> const& m)
	{
		this->value[0] += m[0];
		this->value[1] += m[1];
		this->value[2] += m[2];
		this->value[3] += m[3];
		return *this;
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER mat<4, 2, _Ty, Q> & mat<4, 2, _Ty, Q>::operator-=(U s)
	{
		this->value[0] -= s;
		this->value[1] -= s;
		this->value[2] -= s;
		this->value[3] -= s;
		return *this;
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER mat<4, 2, _Ty, Q> & mat<4, 2, _Ty, Q>::operator-=(mat<4, 2, U, Q> const& m)
	{
		this->value[0] -= m[0];
		this->value[1] -= m[1];
		this->value[2] -= m[2];
		this->value[3] -= m[3];
		return *this;
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER mat<4, 2, _Ty, Q> & mat<4, 2, _Ty, Q>::operator*=(U s)
	{
		this->value[0] *= s;
		this->value[1] *= s;
		this->value[2] *= s;
		this->value[3] *= s;
		return *this;
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER mat<4, 2, _Ty, Q> & mat<4, 2, _Ty, Q>::operator/=(U s)
	{
		this->value[0] /= s;
		this->value[1] /= s;
		this->value[2] /= s;
		this->value[3] /= s;
		return *this;
	}

	// -- Increment and decrement operators --

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER mat<4, 2, _Ty, Q> & mat<4, 2, _Ty, Q>::operator++()
	{
		++this->value[0];
		++this->value[1];
		++this->value[2];
		++this->value[3];
		return *this;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER mat<4, 2, _Ty, Q> & mat<4, 2, _Ty, Q>::operator--()
	{
		--this->value[0];
		--this->value[1];
		--this->value[2];
		--this->value[3];
		return *this;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER mat<4, 2, _Ty, Q> mat<4, 2, _Ty, Q>::operator++(int)
	{
		mat<4, 2, _Ty, Q> Result(*this);
		++*this;
		return Result;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER mat<4, 2, _Ty, Q> mat<4, 2, _Ty, Q>::operator--(int)
	{
		mat<4, 2, _Ty, Q> Result(*this);
		--*this;
		return Result;
	}

	// -- Unary arithmetic operators --

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER mat<4, 2, _Ty, Q> operator+(mat<4, 2, _Ty, Q> const& m)
	{
		return m;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER mat<4, 2, _Ty, Q> operator-(mat<4, 2, _Ty, Q> const& m)
	{
		return mat<4, 2, _Ty, Q>(
			-m[0],
			-m[1],
			-m[2],
			-m[3]);
	}

	// -- Binary arithmetic operators --

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER mat<4, 2, _Ty, Q> operator+(mat<4, 2, _Ty, Q> const& m, _Ty scalar)
	{
		return mat<4, 2, _Ty, Q>(
			m[0] + scalar,
			m[1] + scalar,
			m[2] + scalar,
			m[3] + scalar);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER mat<4, 2, _Ty, Q> operator+(mat<4, 2, _Ty, Q> const& m1, mat<4, 2, _Ty, Q> const& m2)
	{
		return mat<4, 2, _Ty, Q>(
			m1[0] + m2[0],
			m1[1] + m2[1],
			m1[2] + m2[2],
			m1[3] + m2[3]);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER mat<4, 2, _Ty, Q> operator-(mat<4, 2, _Ty, Q> const& m, _Ty scalar)
	{
		return mat<4, 2, _Ty, Q>(
			m[0] - scalar,
			m[1] - scalar,
			m[2] - scalar,
			m[3] - scalar);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER mat<4, 2, _Ty, Q> operator-(mat<4, 2, _Ty, Q> const& m1, mat<4, 2, _Ty, Q> const& m2)
	{
		return mat<4, 2, _Ty, Q>(
			m1[0] - m2[0],
			m1[1] - m2[1],
			m1[2] - m2[2],
			m1[3] - m2[3]);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER mat<4, 2, _Ty, Q> operator*(mat<4, 2, _Ty, Q> const& m, _Ty scalar)
	{
		return mat<4, 2, _Ty, Q>(
			m[0] * scalar,
			m[1] * scalar,
			m[2] * scalar,
			m[3] * scalar);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER mat<4, 2, _Ty, Q> operator*(_Ty scalar, mat<4, 2, _Ty, Q> const& m)
	{
		return mat<4, 2, _Ty, Q>(
			m[0] * scalar,
			m[1] * scalar,
			m[2] * scalar,
			m[3] * scalar);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER typename mat<4, 2, _Ty, Q>::col_type operator*(mat<4, 2, _Ty, Q> const& m, typename mat<4, 2, _Ty, Q>::row_type const& v)
	{
		return typename mat<4, 2, _Ty, Q>::col_type(
			m[0][0] * v.x + m[1][0] * v.y + m[2][0] * v.z + m[3][0] * v.w,
			m[0][1] * v.x + m[1][1] * v.y + m[2][1] * v.z + m[3][1] * v.w);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER typename mat<4, 2, _Ty, Q>::row_type operator*(typename mat<4, 2, _Ty, Q>::col_type const& v, mat<4, 2, _Ty, Q> const& m)
	{
		return typename mat<4, 2, _Ty, Q>::row_type(
			v.x * m[0][0] + v.y * m[0][1],
			v.x * m[1][0] + v.y * m[1][1],
			v.x * m[2][0] + v.y * m[2][1],
			v.x * m[3][0] + v.y * m[3][1]);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER mat<2, 2, _Ty, Q> operator*(mat<4, 2, _Ty, Q> const& m1, mat<2, 4, _Ty, Q> const& m2)
	{
		_Ty const SrcA00 = m1[0][0];
		_Ty const SrcA01 = m1[0][1];
		_Ty const SrcA10 = m1[1][0];
		_Ty const SrcA11 = m1[1][1];
		_Ty const SrcA20 = m1[2][0];
		_Ty const SrcA21 = m1[2][1];
		_Ty const SrcA30 = m1[3][0];
		_Ty const SrcA31 = m1[3][1];

		_Ty const SrcB00 = m2[0][0];
		_Ty const SrcB01 = m2[0][1];
		_Ty const SrcB02 = m2[0][2];
		_Ty const SrcB03 = m2[0][3];
		_Ty const SrcB10 = m2[1][0];
		_Ty const SrcB11 = m2[1][1];
		_Ty const SrcB12 = m2[1][2];
		_Ty const SrcB13 = m2[1][3];

		mat<2, 2, _Ty, Q> Result;
		Result[0][0] = SrcA00 * SrcB00 + SrcA10 * SrcB01 + SrcA20 * SrcB02 + SrcA30 * SrcB03;
		Result[0][1] = SrcA01 * SrcB00 + SrcA11 * SrcB01 + SrcA21 * SrcB02 + SrcA31 * SrcB03;
		Result[1][0] = SrcA00 * SrcB10 + SrcA10 * SrcB11 + SrcA20 * SrcB12 + SrcA30 * SrcB13;
		Result[1][1] = SrcA01 * SrcB10 + SrcA11 * SrcB11 + SrcA21 * SrcB12 + SrcA31 * SrcB13;
		return Result;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER mat<3, 2, _Ty, Q> operator*(mat<4, 2, _Ty, Q> const& m1, mat<3, 4, _Ty, Q> const& m2)
	{
		return mat<3, 2, _Ty, Q>(
			m1[0][0] * m2[0][0] + m1[1][0] * m2[0][1] + m1[2][0] * m2[0][2] + m1[3][0] * m2[0][3],
			m1[0][1] * m2[0][0] + m1[1][1] * m2[0][1] + m1[2][1] * m2[0][2] + m1[3][1] * m2[0][3],
			m1[0][0] * m2[1][0] + m1[1][0] * m2[1][1] + m1[2][0] * m2[1][2] + m1[3][0] * m2[1][3],
			m1[0][1] * m2[1][0] + m1[1][1] * m2[1][1] + m1[2][1] * m2[1][2] + m1[3][1] * m2[1][3],
			m1[0][0] * m2[2][0] + m1[1][0] * m2[2][1] + m1[2][0] * m2[2][2] + m1[3][0] * m2[2][3],
			m1[0][1] * m2[2][0] + m1[1][1] * m2[2][1] + m1[2][1] * m2[2][2] + m1[3][1] * m2[2][3]);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER mat<4, 2, _Ty, Q> operator*(mat<4, 2, _Ty, Q> const& m1, mat<4, 4, _Ty, Q> const& m2)
	{
		return mat<4, 2, _Ty, Q>(
			m1[0][0] * m2[0][0] + m1[1][0] * m2[0][1] + m1[2][0] * m2[0][2] + m1[3][0] * m2[0][3],
			m1[0][1] * m2[0][0] + m1[1][1] * m2[0][1] + m1[2][1] * m2[0][2] + m1[3][1] * m2[0][3],
			m1[0][0] * m2[1][0] + m1[1][0] * m2[1][1] + m1[2][0] * m2[1][2] + m1[3][0] * m2[1][3],
			m1[0][1] * m2[1][0] + m1[1][1] * m2[1][1] + m1[2][1] * m2[1][2] + m1[3][1] * m2[1][3],
			m1[0][0] * m2[2][0] + m1[1][0] * m2[2][1] + m1[2][0] * m2[2][2] + m1[3][0] * m2[2][3],
			m1[0][1] * m2[2][0] + m1[1][1] * m2[2][1] + m1[2][1] * m2[2][2] + m1[3][1] * m2[2][3],
			m1[0][0] * m2[3][0] + m1[1][0] * m2[3][1] + m1[2][0] * m2[3][2] + m1[3][0] * m2[3][3],
			m1[0][1] * m2[3][0] + m1[1][1] * m2[3][1] + m1[2][1] * m2[3][2] + m1[3][1] * m2[3][3]);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER mat<4, 2, _Ty, Q> operator/(mat<4, 2, _Ty, Q> const& m, _Ty scalar)
	{
		return mat<4, 2, _Ty, Q>(
			m[0] / scalar,
			m[1] / scalar,
			m[2] / scalar,
			m[3] / scalar);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER mat<4, 2, _Ty, Q> operator/(_Ty scalar, mat<4, 2, _Ty, Q> const& m)
	{
		return mat<4, 2, _Ty, Q>(
			scalar / m[0],
			scalar / m[1],
			scalar / m[2],
			scalar / m[3]);
	}

	// -- Boolean operators --

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER bool operator==(mat<4, 2, _Ty, Q> const& m1, mat<4, 2, _Ty, Q> const& m2)
	{
		return (m1[0] == m2[0]) && (m1[1] == m2[1]) && (m1[2] == m2[2]) && (m1[3] == m2[3]);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER bool operator!=(mat<4, 2, _Ty, Q> const& m1, mat<4, 2, _Ty, Q> const& m2)
	{
		return (m1[0] != m2[0]) || (m1[1] != m2[1]) || (m1[2] != m2[2]) || (m1[3] != m2[3]);
	}
} //namespace glm
