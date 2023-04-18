namespace glm
{
	// -- Constructors --

#	if GLM_CONFIG_DEFAULTED_DEFAULT_CTOR == GLM_DISABLE
		template<typename T, qualifier Q>
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<4, 3, T, Q>::mat()
#			if GLM_CONFIG_CTOR_INIT == GLM_CTOR_INITIALIZER_LIST
				: value{col_type(1, 0, 0), col_type(0, 1, 0), col_type(0, 0, 1), col_type(0, 0, 0)}
#			endif
		{
#			if GLM_CONFIG_CTOR_INIT == GLM_CTOR_INITIALISATION
				this->value[0] = col_type(1, 0, 0);
				this->value[1] = col_type(0, 1, 0);
				this->value[2] = col_type(0, 0, 1);
				this->value[3] = col_type(0, 0, 0);
#			endif
		}
#	endif

	template<typename _Ty, qualifier Q>
	template<qualifier P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<4, 3, _Ty, Q>::mat(mat<4, 3, _Ty, P> const& m)
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
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<4, 3, _Ty, Q>::mat(_Ty const& s)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(s, 0, 0), col_type(0, s, 0), col_type(0, 0, s), col_type(0, 0, 0)}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(s, 0, 0);
			this->value[1] = col_type(0, s, 0);
			this->value[2] = col_type(0, 0, s);
			this->value[3] = col_type(0, 0, 0);
#		endif
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<4, 3, _Ty, Q>::mat
	(
		_Ty const& x0, _Ty const& y0, _Ty const& z0,
		_Ty const& x1, _Ty const& y1, _Ty const& z1,
		_Ty const& x2, _Ty const& y2, _Ty const& z2,
		_Ty const& x3, _Ty const& y3, _Ty const& z3
	)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(x0, y0, z0), col_type(x1, y1, z1), col_type(x2, y2, z2), col_type(x3, y3, z3)}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(x0, y0, z0);
			this->value[1] = col_type(x1, y1, z1);
			this->value[2] = col_type(x2, y2, z2);
			this->value[3] = col_type(x3, y3, z3);
#		endif
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<4, 3, _Ty, Q>::mat(col_type const& v0, col_type const& v1, col_type const& v2, col_type const& v3)
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
		typename X0, typename Y0, typename Z0,
		typename X1, typename Y1, typename Z1,
		typename X2, typename Y2, typename Z2,
		typename X3, typename Y3, typename Z3>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<4, 3, _Ty, Q>::mat
	(
		X0 const& x0, Y0 const& y0, Z0 const& z0,
		X1 const& x1, Y1 const& y1, Z1 const& z1,
		X2 const& x2, Y2 const& y2, Z2 const& z2,
		X3 const& x3, Y3 const& y3, Z3 const& z3
	)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(x0, y0, z0), col_type(x1, y1, z1), col_type(x2, y2, z2), col_type(x3, y3, z3)}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(x0, y0, z0);
			this->value[1] = col_type(x1, y1, z1);
			this->value[2] = col_type(x2, y2, z2);
			this->value[3] = col_type(x3, y3, z3);
#		endif
	}

	template<typename _Ty, qualifier Q>
	template<typename V1, typename V2, typename V3, typename V4>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<4, 3, _Ty, Q>::mat(vec<3, V1, Q> const& v1, vec<3, V2, Q> const& v2, vec<3, V3, Q> const& v3, vec<3, V4, Q> const& v4)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(v1), col_type(v2), col_type(v3), col_type(v4)}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(v1);
			this->value[1] = col_type(v2);
			this->value[2] = col_type(v3);
			this->value[3] = col_type(v4);
#		endif
	}

	// -- Matrix conversions --

	template<typename _Ty, qualifier Q>
	template<typename U, qualifier P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<4, 3, _Ty, Q>::mat(mat<4, 3, U, P> const& m)
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
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<4, 3, _Ty, Q>::mat(mat<2, 2, _Ty, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0], 0), col_type(m[1], 0), col_type(0, 0, 1), col_type(0)}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0], 0);
			this->value[1] = col_type(m[1], 0);
			this->value[2] = col_type(0, 0, 1);
			this->value[3] = col_type(0);
#		endif
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<4, 3, _Ty, Q>::mat(mat<3, 3, _Ty, Q> const& m)
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
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<4, 3, _Ty, Q>::mat(mat<4, 4, _Ty, Q> const& m)
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
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<4, 3, _Ty, Q>::mat(mat<2, 3, _Ty, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0]), col_type(m[1]), col_type(0, 0, 1), col_type(0)}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0]);
			this->value[1] = col_type(m[1]);
			this->value[2] = col_type(0, 0, 1);
			this->value[3] = col_type(0);
#		endif
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<4, 3, _Ty, Q>::mat(mat<3, 2, _Ty, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0], 0), col_type(m[1], 0), col_type(m[2], 1), col_type(0)}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0], 0);
			this->value[1] = col_type(m[1], 0);
			this->value[2] = col_type(m[2], 1);
			this->value[3] = col_type(0);
#		endif
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<4, 3, _Ty, Q>::mat(mat<2, 4, _Ty, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0]), col_type(m[1]), col_type(0, 0, 1), col_type(0)}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0]);
			this->value[1] = col_type(m[1]);
			this->value[2] = col_type(0, 0, 1);
			this->value[3] = col_type(0);
#		endif
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<4, 3, _Ty, Q>::mat(mat<4, 2, _Ty, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0], 0), col_type(m[1], 0), col_type(m[2], 1), col_type(m[3], 0)}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0], 0);
			this->value[1] = col_type(m[1], 0);
			this->value[2] = col_type(m[2], 1);
			this->value[3] = col_type(m[3], 0);
#		endif
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<4, 3, _Ty, Q>::mat(mat<3, 4, _Ty, Q> const& m)
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
	GLM_FUNC_QUALIFIER typename mat<4, 3, _Ty, Q>::col_type & mat<4, 3, _Ty, Q>::operator[](typename mat<4, 3, _Ty, Q>::length_type i) GLM_NOEXCEPT
	{
		assert(i < this->length());
		return this->value[i];
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR typename mat<4, 3, _Ty, Q>::col_type const& mat<4, 3, _Ty, Q>::operator[](typename mat<4, 3, _Ty, Q>::length_type i) const GLM_NOEXCEPT
	{
		assert(i < this->length());
		return this->value[i];
	}

	// -- Unary updatable operators --

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER mat<4, 3, _Ty, Q>& mat<4, 3, _Ty, Q>::operator=(mat<4, 3, U, Q> const& m)
	{
		this->value[0] = m[0];
		this->value[1] = m[1];
		this->value[2] = m[2];
		this->value[3] = m[3];
		return *this;
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER mat<4, 3, _Ty, Q> & mat<4, 3, _Ty, Q>::operator+=(U s)
	{
		this->value[0] += s;
		this->value[1] += s;
		this->value[2] += s;
		this->value[3] += s;
		return *this;
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER mat<4, 3, _Ty, Q> & mat<4, 3, _Ty, Q>::operator+=(mat<4, 3, U, Q> const& m)
	{
		this->value[0] += m[0];
		this->value[1] += m[1];
		this->value[2] += m[2];
		this->value[3] += m[3];
		return *this;
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER mat<4, 3, _Ty, Q> & mat<4, 3, _Ty, Q>::operator-=(U s)
	{
		this->value[0] -= s;
		this->value[1] -= s;
		this->value[2] -= s;
		this->value[3] -= s;
		return *this;
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER mat<4, 3, _Ty, Q> & mat<4, 3, _Ty, Q>::operator-=(mat<4, 3, U, Q> const& m)
	{
		this->value[0] -= m[0];
		this->value[1] -= m[1];
		this->value[2] -= m[2];
		this->value[3] -= m[3];
		return *this;
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER mat<4, 3, _Ty, Q> & mat<4, 3, _Ty, Q>::operator*=(U s)
	{
		this->value[0] *= s;
		this->value[1] *= s;
		this->value[2] *= s;
		this->value[3] *= s;
		return *this;
	}

	template<typename _Ty, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER mat<4, 3, _Ty, Q> & mat<4, 3, _Ty, Q>::operator/=(U s)
	{
		this->value[0] /= s;
		this->value[1] /= s;
		this->value[2] /= s;
		this->value[3] /= s;
		return *this;
	}

	// -- Increment and decrement operators --

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER mat<4, 3, _Ty, Q> & mat<4, 3, _Ty, Q>::operator++()
	{
		++this->value[0];
		++this->value[1];
		++this->value[2];
		++this->value[3];
		return *this;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER mat<4, 3, _Ty, Q> & mat<4, 3, _Ty, Q>::operator--()
	{
		--this->value[0];
		--this->value[1];
		--this->value[2];
		--this->value[3];
		return *this;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER mat<4, 3, _Ty, Q> mat<4, 3, _Ty, Q>::operator++(int)
	{
		mat<4, 3, _Ty, Q> Result(*this);
		++*this;
		return Result;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER mat<4, 3, _Ty, Q> mat<4, 3, _Ty, Q>::operator--(int)
	{
		mat<4, 3, _Ty, Q> Result(*this);
		--*this;
		return Result;
	}

	// -- Unary arithmetic operators --

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER mat<4, 3, _Ty, Q> operator+(mat<4, 3, _Ty, Q> const& m)
	{
		return m;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER mat<4, 3, _Ty, Q> operator-(mat<4, 3, _Ty, Q> const& m)
	{
		return mat<4, 3, _Ty, Q>(
			-m[0],
			-m[1],
			-m[2],
			-m[3]);
	}

	// -- Binary arithmetic operators --

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER mat<4, 3, _Ty, Q> operator+(mat<4, 3, _Ty, Q> const& m, _Ty const& s)
	{
		return mat<4, 3, _Ty, Q>(
			m[0] + s,
			m[1] + s,
			m[2] + s,
			m[3] + s);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER mat<4, 3, _Ty, Q> operator+(mat<4, 3, _Ty, Q> const& m1, mat<4, 3, _Ty, Q> const& m2)
	{
		return mat<4, 3, _Ty, Q>(
			m1[0] + m2[0],
			m1[1] + m2[1],
			m1[2] + m2[2],
			m1[3] + m2[3]);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER mat<4, 3, _Ty, Q> operator-(mat<4, 3, _Ty, Q> const& m, _Ty const& s)
	{
		return mat<4, 3, _Ty, Q>(
			m[0] - s,
			m[1] - s,
			m[2] - s,
			m[3] - s);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER mat<4, 3, _Ty, Q> operator-(mat<4, 3, _Ty, Q> const& m1, mat<4, 3, _Ty, Q> const& m2)
	{
		return mat<4, 3, _Ty, Q>(
			m1[0] - m2[0],
			m1[1] - m2[1],
			m1[2] - m2[2],
			m1[3] - m2[3]);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER mat<4, 3, _Ty, Q> operator*(mat<4, 3, _Ty, Q> const& m, _Ty const& s)
	{
		return mat<4, 3, _Ty, Q>(
			m[0] * s,
			m[1] * s,
			m[2] * s,
			m[3] * s);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER mat<4, 3, _Ty, Q> operator*(_Ty const& s, mat<4, 3, _Ty, Q> const& m)
	{
		return mat<4, 3, _Ty, Q>(
			m[0] * s,
			m[1] * s,
			m[2] * s,
			m[3] * s);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER typename mat<4, 3, _Ty, Q>::col_type operator*
	(
		mat<4, 3, _Ty, Q> const& m,
		typename mat<4, 3, _Ty, Q>::row_type const& v)
	{
		return typename mat<4, 3, _Ty, Q>::col_type(
			m[0][0] * v.x + m[1][0] * v.y + m[2][0] * v.z + m[3][0] * v.w,
			m[0][1] * v.x + m[1][1] * v.y + m[2][1] * v.z + m[3][1] * v.w,
			m[0][2] * v.x + m[1][2] * v.y + m[2][2] * v.z + m[3][2] * v.w);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER typename mat<4, 3, _Ty, Q>::row_type operator*
	(
		typename mat<4, 3, _Ty, Q>::col_type const& v,
		mat<4, 3, _Ty, Q> const& m)
	{
		return typename mat<4, 3, _Ty, Q>::row_type(
			v.x * m[0][0] + v.y * m[0][1] + v.z * m[0][2],
			v.x * m[1][0] + v.y * m[1][1] + v.z * m[1][2],
			v.x * m[2][0] + v.y * m[2][1] + v.z * m[2][2],
			v.x * m[3][0] + v.y * m[3][1] + v.z * m[3][2]);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER mat<2, 3, _Ty, Q> operator*(mat<4, 3, _Ty, Q> const& m1, mat<2, 4, _Ty, Q> const& m2)
	{
		return mat<2, 3, _Ty, Q>(
			m1[0][0] * m2[0][0] + m1[1][0] * m2[0][1] + m1[2][0] * m2[0][2] + m1[3][0] * m2[0][3],
			m1[0][1] * m2[0][0] + m1[1][1] * m2[0][1] + m1[2][1] * m2[0][2] + m1[3][1] * m2[0][3],
			m1[0][2] * m2[0][0] + m1[1][2] * m2[0][1] + m1[2][2] * m2[0][2] + m1[3][2] * m2[0][3],
			m1[0][0] * m2[1][0] + m1[1][0] * m2[1][1] + m1[2][0] * m2[1][2] + m1[3][0] * m2[1][3],
			m1[0][1] * m2[1][0] + m1[1][1] * m2[1][1] + m1[2][1] * m2[1][2] + m1[3][1] * m2[1][3],
			m1[0][2] * m2[1][0] + m1[1][2] * m2[1][1] + m1[2][2] * m2[1][2] + m1[3][2] * m2[1][3]);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER mat<3, 3, _Ty, Q> operator*(mat<4, 3, _Ty, Q> const& m1, mat<3, 4, _Ty, Q> const& m2)
	{
		_Ty const SrcA00 = m1[0][0];
		_Ty const SrcA01 = m1[0][1];
		_Ty const SrcA02 = m1[0][2];
		_Ty const SrcA10 = m1[1][0];
		_Ty const SrcA11 = m1[1][1];
		_Ty const SrcA12 = m1[1][2];
		_Ty const SrcA20 = m1[2][0];
		_Ty const SrcA21 = m1[2][1];
		_Ty const SrcA22 = m1[2][2];
		_Ty const SrcA30 = m1[3][0];
		_Ty const SrcA31 = m1[3][1];
		_Ty const SrcA32 = m1[3][2];

		_Ty const SrcB00 = m2[0][0];
		_Ty const SrcB01 = m2[0][1];
		_Ty const SrcB02 = m2[0][2];
		_Ty const SrcB03 = m2[0][3];
		_Ty const SrcB10 = m2[1][0];
		_Ty const SrcB11 = m2[1][1];
		_Ty const SrcB12 = m2[1][2];
		_Ty const SrcB13 = m2[1][3];
		_Ty const SrcB20 = m2[2][0];
		_Ty const SrcB21 = m2[2][1];
		_Ty const SrcB22 = m2[2][2];
		_Ty const SrcB23 = m2[2][3];

		mat<3, 3, _Ty, Q> Result;
		Result[0][0] = SrcA00 * SrcB00 + SrcA10 * SrcB01 + SrcA20 * SrcB02 + SrcA30 * SrcB03;
		Result[0][1] = SrcA01 * SrcB00 + SrcA11 * SrcB01 + SrcA21 * SrcB02 + SrcA31 * SrcB03;
		Result[0][2] = SrcA02 * SrcB00 + SrcA12 * SrcB01 + SrcA22 * SrcB02 + SrcA32 * SrcB03;
		Result[1][0] = SrcA00 * SrcB10 + SrcA10 * SrcB11 + SrcA20 * SrcB12 + SrcA30 * SrcB13;
		Result[1][1] = SrcA01 * SrcB10 + SrcA11 * SrcB11 + SrcA21 * SrcB12 + SrcA31 * SrcB13;
		Result[1][2] = SrcA02 * SrcB10 + SrcA12 * SrcB11 + SrcA22 * SrcB12 + SrcA32 * SrcB13;
		Result[2][0] = SrcA00 * SrcB20 + SrcA10 * SrcB21 + SrcA20 * SrcB22 + SrcA30 * SrcB23;
		Result[2][1] = SrcA01 * SrcB20 + SrcA11 * SrcB21 + SrcA21 * SrcB22 + SrcA31 * SrcB23;
		Result[2][2] = SrcA02 * SrcB20 + SrcA12 * SrcB21 + SrcA22 * SrcB22 + SrcA32 * SrcB23;
		return Result;
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER mat<4, 3, _Ty, Q> operator*(mat<4, 3, _Ty, Q> const& m1, mat<4, 4, _Ty, Q> const& m2)
	{
		return mat<4, 3, _Ty, Q>(
			m1[0][0] * m2[0][0] + m1[1][0] * m2[0][1] + m1[2][0] * m2[0][2] + m1[3][0] * m2[0][3],
			m1[0][1] * m2[0][0] + m1[1][1] * m2[0][1] + m1[2][1] * m2[0][2] + m1[3][1] * m2[0][3],
			m1[0][2] * m2[0][0] + m1[1][2] * m2[0][1] + m1[2][2] * m2[0][2] + m1[3][2] * m2[0][3],
			m1[0][0] * m2[1][0] + m1[1][0] * m2[1][1] + m1[2][0] * m2[1][2] + m1[3][0] * m2[1][3],
			m1[0][1] * m2[1][0] + m1[1][1] * m2[1][1] + m1[2][1] * m2[1][2] + m1[3][1] * m2[1][3],
			m1[0][2] * m2[1][0] + m1[1][2] * m2[1][1] + m1[2][2] * m2[1][2] + m1[3][2] * m2[1][3],
			m1[0][0] * m2[2][0] + m1[1][0] * m2[2][1] + m1[2][0] * m2[2][2] + m1[3][0] * m2[2][3],
			m1[0][1] * m2[2][0] + m1[1][1] * m2[2][1] + m1[2][1] * m2[2][2] + m1[3][1] * m2[2][3],
			m1[0][2] * m2[2][0] + m1[1][2] * m2[2][1] + m1[2][2] * m2[2][2] + m1[3][2] * m2[2][3],
			m1[0][0] * m2[3][0] + m1[1][0] * m2[3][1] + m1[2][0] * m2[3][2] + m1[3][0] * m2[3][3],
			m1[0][1] * m2[3][0] + m1[1][1] * m2[3][1] + m1[2][1] * m2[3][2] + m1[3][1] * m2[3][3],
			m1[0][2] * m2[3][0] + m1[1][2] * m2[3][1] + m1[2][2] * m2[3][2] + m1[3][2] * m2[3][3]);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER mat<4, 3, _Ty, Q> operator/(mat<4, 3, _Ty, Q> const& m, _Ty const& s)
	{
		return mat<4, 3, _Ty, Q>(
			m[0] / s,
			m[1] / s,
			m[2] / s,
			m[3] / s);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER mat<4, 3, _Ty, Q> operator/(_Ty const& s, mat<4, 3, _Ty, Q> const& m)
	{
		return mat<4, 3, _Ty, Q>(
			s / m[0],
			s / m[1],
			s / m[2],
			s / m[3]);
	}

	// -- Boolean operators --

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER bool operator==(mat<4, 3, _Ty, Q> const& m1, mat<4, 3, _Ty, Q> const& m2)
	{
		return (m1[0] == m2[0]) && (m1[1] == m2[1]) && (m1[2] == m2[2]) && (m1[3] == m2[3]);
	}

	template<typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER bool operator!=(mat<4, 3, _Ty, Q> const& m1, mat<4, 3, _Ty, Q> const& m2)
	{
		return (m1[0] != m2[0]) || (m1[1] != m2[1]) || (m1[2] != m2[2]) || (m1[3] != m2[3]);
	}
} //namespace glm
