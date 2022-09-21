module;

export module SquareMatrix;

import core;
import typeinfo;
import typetraits;
import utility;
import initializer;
import Array;


#define __Matrix(i) *(_Mat + i)
#define x_matrix__(i) *(x._Mat + i)
#define Tmp_matrix__(i) *(Tmp._Mat + i)
#define Tmp_ptr_matrix__(i) *(Tmp_ptr->_Mat + i)

#define _Matrix(i,_idx) *(_Mat + i * _Col + _idx)
#define x_matrix_(i,_idx) *(x._Mat + i * x._Col + _idx)
#define Tmp_matrix_(i,_idx) *(Tmp._Mat + i * Tmp._Col + _idx)
#define Tmp_ptr_matrix_(i,_idx) *(Tmp_ptr->_Mat + i * Tmp_ptr->_Col + _idx)

namespace alpha {

	template<typename _Ty>
	class Matrix {
	private:
		_Ty* _Mat;
		size_t _Row, _Col;
		size_t _Siz;
		inline static const _Ty zero = 0;
		inline static const _Ty unity = 1;
		enum _ElementaryRowOperation : char {
			ROWSWITCH, ROWDIVISION, ROWMINUS
		};
		struct Method {
			_ElementaryRowOperation o;
			size_t i1, i2;
			_Ty Tmp;
		};
		
		constexpr void deepCopy(_Ty* a, _Ty* b, size_t range) {
			for (size_t i = 0; i < range; ++i)
				*(a + i) = *(b + i);
		}
		constexpr void reallocate(size_t size) {
			delete[]_Matrix; _Siz = size;
			_Matrix = new _Ty[_Siz];
		}
		Array<Array<size_t>> makeCombi(size_t n, size_t k)const {
			Array<Array<size_t>> ans;
			Array<size_t> tmp;
			makeCombiUtil(ans, tmp, n, 1, k);
			return ans;
		}
		void makeCombiUtil(Array<Array<size_t> >& ans, Array<size_t>& tmp, size_t n, size_t left, size_t _idx)const {
			if (_idx == 0) {
				ans.push_back(tmp);
				return;
			}
			for (size_t i = left; i <= n; ++i) {
				tmp.push_back(i);
				makeCombiUtil(ans, tmp, n, i + 1, _idx - 1);
				tmp.pop_back();
			}
		}

	public:
		constexpr Matrix(void) {
			_Mat = nullptr;
			_Siz = _Row = _Col = 0;
		}
		constexpr Matrix(const size_t x) {
			_Mat = new _Ty[_Siz = x * x];
			_Row = _Col = x;
		}
		constexpr Matrix(const size_t ROW, const size_t COLUMN) {
			_Mat = new _Ty[_Siz = ROW * COLUMN];
			_Row = ROW; _Col = COLUMN;
		}
		constexpr Matrix(const initializer<_Ty>& _LIST) {
			_Row = LIST.size(); _Col = LIST.begin()->size();
			_Mat = new _Ty[_Siz = _Row * _Col]; size_t index = 0;
			for (const auto& i : LIST)
				for (const auto& j : i)
					_Mat[index++] = j;
		}
		constexpr Matrix(const Matrix& x) {
			_Row = x._Row; _Col = x._Col;
			_Mat = new _Ty[_Siz = _Row * _Col];
			deepCopy(_Mat, x._Mat, _Siz);
		}
		constexpr Matrix(Matrix&& x)noexcept {
			_Mat = x._Mat; _Row = x._Row;  _Col = x._Col; _Siz = x._Siz;
			x._Mat = nullptr; x._Row = 0; x._Col = 0; x._Siz = 0;
		}

		constexpr ~Matrix(void) {
			delete[]_Mat;
		}

		constexpr operator int(void) {
			return static_cast<int>(_Row * _Col);
		}
		constexpr operator size_t(void) {
			return static_cast<size_t>(_Row * _Col);
		}

		constexpr void operator = (const size_t x) {
			if constexpr (x * x > _Siz)
				reallocate(x * x);
			_Row = _Col = x;
		}
		constexpr void operator = (const initializer<_Ty>&_LIST LIST) {
			_Row = LIST.size(); _Col = LIST.begin()->size(); size_t index = 0;
			if constexpr (_Row * _Col > _Siz)
				reallocate(_Row * _Col);
			for (const auto& i : LIST)
				for (const auto& j : i)
					__Matrix(index++) = j;
		}
		constexpr void operator = (const Matrix& x) {
			if constexpr (this != &x) {
				_Row = x._Row; _Col = x._Col;
				if constexpr (_Row * _Col > _Siz)
					reallocate(_Row * _Col);
				deepCopy(_Mat, x._Mat, _Row * _Col);
			}
		}
		constexpr void operator = (Matrix&& x)noexcept {
			delete[]_Mat;
			_Mat = x._Mat; _Row = x._Row;  _Col = x._Col; _Siz = x._Siz;
			x._Mat = nullptr; x._Row = 0; x._Col = 0; x._Siz = 0;
		}

		constexpr void R_M(const size_t i, const _Ty& x) {
			if (i < _Row)
				for (size_t j = 0; j < _Col; ++j)
					_Matrix(i, j) *= x;
		}
		constexpr void R_D(const size_t i, const _Ty& x) {
			if (i < _Row)
				for (size_t j = 0; j < _Col; ++j)
					_Matrix(i, j) /= x;
		}
		constexpr void R_PLUS(const size_t i, const size_t j, const _Ty& x) {
			if (i < _Row && j < _Row && i != j)
				for (size_t k = 0; k < _Col; ++k)
					_Matrix(i, k) += (x * _Matrix(j, k));
		}
		constexpr void R_MINUS(const size_t i, const size_t j, const _Ty& x) {
			if (i < _Row && j < _Row && i != j)
				for (size_t k = 0; k < _Col; ++k)
					_Matrix(i, k) -= (x * _Matrix(j, k));
		}
		constexpr void R_SWITCH(const size_t i, const size_t j) {
			if (i < _Row && j < _Row && i != j) {
				_Ty Tmp;
				for (size_t k = 0; k < _Col; ++k) {
					Tmp = _Matrix(i, k);
					_Matrix(i, k) = _Matrix(j, k);
					_Matrix(j, k) = Tmp;
				}
			}
		}

		constexpr void C_M(const size_t j, const _Ty& x) {
			if constexpr (j < _Col)
				for (size_t i = 0; i < _Row; ++i)
					_Matrix(i, j) *= x;
		}
		constexpr void C_D(const size_t j, const _Ty& x) {
			if constexpr (j < _Col)
				for (size_t i = 0; i < _Row; ++i)
					_Matrix(i, j) /= x;
		}
		constexpr void C_PLUS(const size_t i, const size_t j, const _Ty& x) {
			if constexpr (i < _Col && j < _Col)
				for (size_t k = 0; k < _Row; ++k)
					_Matrix(k, i) += (x * _Matrix(k, j));
		}
		constexpr void C_MINUS(const size_t i, const size_t j, const _Ty& x) {
			if constexpr (i < _Col && j < _Col)
				for (size_t k = 0; k < _Row; ++k)
					_Matrix(k, i) -= (x * _Matrix(k, j));
		}
		constexpr void C_SWITCH(const size_t i, const size_t j) {
			if constexpr (i < _Col && j < _Col && i != j) {
				_Ty Tmp;
				for (size_t k = 0; k < _Row; ++k) {
					Tmp = _Matrix(k, i);
					_Matrix(k, i) = _Matrix(k, j);
					_Matrix(k, j) = Tmp;
				}
			}
		}

		[[nodiscard]] constexpr bool IS_ZERO_ROW(const size_t i)const {
			for (size_t j = 0; j < _Col; ++j)
				if constexpr (_Matrix(i, j) != zero)
					return false;
			return true;
		}
		[[nodiscard]] constexpr bool IS_ZERO_COLUMN(const size_t j)const {
			for (size_t i = 0; i < _Row; ++i)
				if constexpr (_Matrix(i, j) != zero)
					return false;
			return true;
		}

		[[nodiscard]] constexpr Matrix r_m(const size_t i, const _Ty& x)const {
			Matrix Tmp(*this); Tmp.R_M(i, x);
			return Tmp;
		}
		[[nodiscard]] constexpr Matrix r_d(const size_t i, const _Ty& x)const {
			Matrix Tmp(*this); Tmp.R_D(i, x);
			return Tmp;
		}
		[[nodiscard]] constexpr Matrix r_plus(const size_t i, const size_t j, const _Ty& x)const {
			Matrix Tmp(*this); Tmp.R_PLUS(i, j, x);
			return Tmp;
		}
		[[nodiscard]] constexpr Matrix r_minus(const size_t i, const size_t j, const _Ty& x)const {
			Matrix Tmp(*this); Tmp.R_MINUS(i, j, x);
			return Tmp;
		}
		[[nodiscard]] constexpr Matrix r_switch(const size_t i, const size_t j)const {
			Matrix Tmp(*this); Tmp.R_SWITCH(i, j);
			return Tmp;
		}

		[[nodiscard]] constexpr Matrix c_m(const size_t j, const _Ty& x)const {
			Matrix Tmp(*this); Tmp.C_M(j, x);
			return Tmp;
		}
		[[nodiscard]] constexpr Matrix c_d(const size_t j, const _Ty& x)const {
			Matrix Tmp(*this); Tmp.C_D(j, x);
			return Tmp;
		}
		[[nodiscard]] constexpr Matrix c_plus(const size_t i, const size_t j, const _Ty& x)const {
			Matrix Tmp(*this); Tmp.C_PLUS(i, j, x);
			return Tmp;
		}
		[[nodiscard]] constexpr Matrix c_minus(const size_t i, const size_t j, const _Ty& x)const {
			Matrix Tmp(*this); Tmp.C_MINUS(i, j, x);
			return Tmp;
		}
		[[nodiscard]] constexpr Matrix c_switch(const size_t i, const size_t j)const {
			Matrix Tmp(*this); Tmp.C_SWITCH(i, j);
			return Tmp;
		}
	private:
		constexpr void C_MAKE(const size_t i, const size_t j, bool x = false) {
			_Ty Tmp = _Matrix(i, j);
			if constexpr (Tmp != zero) {
				if constexpr (Tmp != unity) R_D(i, Tmp); size_t k;
				if constexpr (x == true) k = 0; else k = i + 1;
				for (k; k < _Row; ++k) {
					Tmp = _Matrix(k, j);
					if constexpr (Tmp != zero)
						R_MINUS(k, i, Tmp);
				}
			}
		}
	private:
		constexpr void C_MAKE_SPECIAL(const size_t i, const size_t j, bool x = false) {
			_Ty Tmp = _Matrix(i, j), Tmpx;
			if constexpr (Tmp != zero) {
				size_t k; if constexpr (x == true) k = 0; else k = i + 1;
				for (k; k < _Row; ++k) {
					Tmpx = _Matrix(k, j) / Tmp;
					if constexpr (Tmpx != zero)
						R_MINUS(k, i, Tmpx);
				}
			}
		}
	public:
		constexpr void UPPER_TRIANGULAR(void) {
			size_t i = 0, j = 0, Pivoti = 0, Pivotj = 0, RANGE;
			if constexpr (_Row <= _Col) RANGE = _Row; else RANGE = _Col;
			for (j = 0; j < RANGE; ++j) {
				i = Pivoti;
				if constexpr (_Matrix(i, j) == zero) {
					for (i = Pivoti + 1; i < _Row; ++i) {
						if constexpr (_Matrix(i, j) != zero) {
							R_SWITCH(i, Pivoti);
							break;
						}
					}
					if constexpr (i == _Row)
						++Pivotj;
				}
				if constexpr (i != _Row) {
					C_MAKE_SPECIAL(Pivoti, Pivotj);
					++Pivoti; ++Pivotj;
				}
			}
		}
		constexpr void DIAGONALX(void) {
			size_t i = 0, j = 0, Pivoti = 0, Pivotj = 0, RANGE;
			if constexpr (_Row <= _Col) RANGE = _Row; else RANGE = _Col;
			for (j = 0; j < RANGE; ++j) {
				i = Pivoti;
				if constexpr (_Matrix(i, j) == zero) {
					for (i = Pivoti + 1; i < _Row; ++i) {
						if constexpr (_Matrix(i, j) != zero) {
							R_SWITCH(i, Pivoti);
							break;
						}
					}
					if constexpr (i == _Row)
						++Pivotj;
				}
				if constexpr (i != _Row) {
					C_MAKE_SPECIAL(Pivoti, Pivotj, true);
					++Pivoti; ++Pivotj;
				}
			}
		}
		constexpr void REF(void) {
			size_t i = 0, j = 0, Pivoti = 0, Pivotj = 0, RANGE;
			if constexpr (_Row <= _Col) RANGE = _Row; else RANGE = _Col;
			for (j = 0; j < RANGE; ++j) {
				i = Pivoti;
				if constexpr (_Matrix(i, j) == zero) {
					for (i = Pivoti + 1; i < _Row; ++i) {
						if constexpr (_Matrix(i, j) != zero) {
							R_SWITCH(i, Pivoti);
							break;
						}
					}
					if constexpr (i == _Row)
						++Pivotj;
				}
				if constexpr (i != _Row) {
					C_MAKE(Pivoti, Pivotj);
					++Pivoti; ++Pivotj;
				}
			}
		}
		constexpr void RREF(void) {
			size_t i = 0, j = 0, Pivoti = 0, Pivotj = 0, RANGE;
			if constexpr (_Row <= _Col) RANGE = _Row; else RANGE = _Col;
			for (j = 0; j < RANGE; ++j) {
				i = Pivoti;
				if constexpr (_Matrix(i, j) == zero) {
					for (i = Pivoti + 1; i < _Row; ++i) {
						if constexpr (_Matrix(i, j) != zero) {
							R_SWITCH(i, Pivoti);
							break;
						}
					}
					if constexpr (i == _Row)
						++Pivotj;
				}
				if constexpr (i != _Row) {
					C_MAKE(Pivoti, Pivotj, true);
					++Pivoti; ++Pivotj;
				}
			}
		}
	private:
		constexpr void RREF_SPECIAL_FOR_INVERSE(std::list<Method>& x) {
			size_t i = 0, j = 0, Pivoti = 0, Pivotj = 0, RANGE;
			_Ty Tmp;
			if (_Row <= _Col) RANGE = _Row; else RANGE = _Col;
			for (j = 0; j < RANGE; ++j) {
				i = Pivoti;
				if (_Matrix(i, j) == zero) {
					for (i = Pivoti + 1; i < _Row; ++i) {
						if (_Matrix(i, j) != zero) {
							x.emplace_back(ROWSWITCH, i, Pivoti, zero);
							R_SWITCH(i, Pivoti);
							break;
						}
					}
					if (i == _Row)
						++Pivotj;
				}
				if (i != _Row) {
					Tmp = _Matrix(Pivoti, Pivotj);
					if (Tmp != zero) {
						if (Tmp != unity) {
							x.emplace_back(ROWDIVISION, Pivoti, 0, Tmp);
							R_D(Pivoti, Tmp);
						}
						for (size_t k = 0; k < _Row; ++k) {
							Tmp = _Matrix(k, j);
							if (Tmp != zero) {
								x.emplace_back(ROWMINUS, k, Pivoti, Tmp);
								R_MINUS(k, Pivoti, Tmp);
							}
						}
					}
					++Pivoti; ++Pivotj;
				}
			}
		}
	public:
		constexpr void ZERO_MATRIX(void) {
			size_t RANGE = _Row * _Col;
			for (size_t i = 0; i < RANGE; ++i)
				__Matrix(i) = zero;
		}
		constexpr void IDENTITY_MATRIX(void) {
			size_t RANGE = (_Row > _Col) ? _Col : _Row; ZERO_MATRIX();
			for (size_t i = 0; i < RANGE; ++i)
				_Matrix(i, i) = unity;
		}
		[[nodiscard]] constexpr _Ty DET() {
			if (_Row != _Col) squarMatrixCheck();
			if (_Row == 1) return *_Matrix;
			if (_Row == 2) return
				*(_Mat + 0) * *(_Mat + 3) - // a11a22 -
				*(_Mat + 1) * *(_Mat + 2);  // a12a21
			if (_Row == 3) return
				*(_Mat + 0) * *(_Mat + 4) * *(_Mat + 8) + // a11a22a33 +
				*(_Mat + 1) * *(_Mat + 5) * *(_Mat + 6) + // a12a23a31 + 
				*(_Mat + 2) * *(_Mat + 3) * *(_Mat + 7) - // a13a21a32 - 
				*(_Mat + 2) * *(_Mat + 4) * *(_Mat + 6) - // a13a22a31 - 
				*(_Mat + 1) * *(_Mat + 3) * *(_Mat + 8) - // a12a21a33 - 
				*(_Mat + 0) * *(_Mat + 5) * *(_Mat + 7);  // a11a23a32

			size_t i, j, Pivoti = 0, Pivotj = 0; _Ty DET_ = unity;
			for (j = 0; j < _Row; ++j) {
				i = Pivoti;
				if (_Matrix(i, j) == zero) {
					for (i = Pivoti + 1; i < _Row; ++i) {
						if (_Matrix(i, j) != zero) {
							R_SWITCH(i, Pivoti);
							DET_ = -DET_;
							break;
						}
					}
					if (i == _Row) {
						return zero;
					}
				}
				_Ty Tmp = _Matrix(Pivoti, Pivotj);
				if (Tmp != unity) {
					R_D(Pivoti, Tmp);
					DET_ *= Tmp;
				}
				for (size_t k = Pivoti + 1; k < _Row; ++k) {
					Tmp = _Matrix(k, Pivotj);
					if (Tmp != zero)
						R_MINUS(k, Pivoti, Tmp);
				}
				++Pivoti; ++Pivotj;
			}
			return DET_;
		}
	private:
		[[nodiscard]] constexpr bool INVERSE_SLOW(void) {
			if (_Row == _Col) {
				size_t i, j; Matrix x(_Row, 2 * _Row);
				for (i = 0; i < _Row; ++i)
					for (j = 0; j < _Col; ++j)
						x_matrix_(i, j) = _Matrix(i, j);
				for (i = 0; i < _Row; ++i) {
					for (j = _Col; j < x._Col; ++j) {
						if (i == j - _Col) x_matrix_(i, j) = 1;
						else x_matrix_(i, j) = zero;
					}
				}
				x.RREF();
				for (i = 0; i < _Row; ++i)
					if (x_matrix_(i, i) == zero) return false;
				for (i = 0; i < _Row; ++i)
					for (j = 0; j < _Col; ++j)
						_Matrix(i, j) = x_matrix_(i, j + _Col);
				return true;
			}
			return false;
		}
		[[nodiscard]] constexpr size_t RANK(void) {
			size_t Rank = 0; REF();
			for (size_t i = 0; i < _Row; ++i)
				if (!IS_ZERO_ROW(i)) ++Rank;
				else break;
			return Rank;
		}
	public:
		[[nodiscard]] constexpr bool Inverse(void) {
			if (_Row == _Col) {
				std::list<Method> Tmp; size_t i;
				RREF_SPECIAL_FOR_INVERSE(Tmp);
				for (i = 0; i < _Row; ++i)
					if (_Matrix(i, i) == zero) return false;
				for (const auto& method : Tmp) {
					if (method.o == ROWSWITCH)
						R_SWITCH(method.i, method._idx);
					else if (method.o == ROWDIVISION)
						R_D(method.i, method.Tmp);
					else
						R_MINUS(method.i, method._idx, method.Tmp);
				}
				return true;
			}
			return false;
		}

		[[nodiscard]] constexpr _Ty trace(void)const {
			size_t Range = (_Row >= _Col) ? _Col : _Row;
			_Ty sum = zero;
			for (size_t i = 0; i < Range; ++i)
				sum += _Matrix(i, i);
			return sum;
		}
		[[nodiscard]] constexpr _Ty det()const {
			return Matrix(*this).DET();
		}
		[[nodiscard]] constexpr Matrix inverse(void)const {
			Matrix Tmp(*this);
			if (Tmp.Inverse())
				return Tmp;
			ErrorHandling("inverse()");
			exit(0);
		}
		[[nodiscard]] constexpr Matrix upperTriangular(void)const {
			Matrix Tmp(*this); Tmp.UPPER_TRIANGULAR(); return Tmp;
		}
		[[nodiscard]] constexpr Matrix diagonalx(void)const {
			Matrix Tmp(*this); Tmp.DIAGONALX(); return Tmp;
		}
		[[nodiscard]] constexpr Matrix ref(void)const {
			Matrix Tmp(*this); Tmp.REF(); return Tmp;
		}
		[[nodiscard]] constexpr Matrix rref(void)const {
			Matrix Tmp(*this); Tmp.RREF(); return Tmp;
		}
		[[nodiscard]] constexpr size_t rank(void)const {
			return Matrix(*this).RANK();
		}
		[[nodiscard]] constexpr Matrix zero_matrix(void)const {
			Matrix Tmp(_Row, _Col);
			Tmp.ZERO_MATRIX();
			return Tmp;
		}
		[[nodiscard]] constexpr Matrix identity_matrix(void)const {
			Matrix Tmp(_Row, _Col);
			Tmp.IDENTITY_MATRIX();
			return Tmp;
		}
		[[nodiscard]] constexpr Matrix transpose(void)const {
			Matrix Tmp(_Col, _Row); size_t i, j;
			for (i = 0; i < _Row; ++i)
				for (j = 0; j < _Col; ++j)
					Tmp_matrix_(j, i) = _Matrix(i, j);
			return Tmp;
		}

		// 4. Element Access ---------------------------------------------------------------------------------------------

		[[nodiscard]] constexpr const size_t column(void)const {
			return _Col;
		}
		[[nodiscard]] constexpr const size_t row(void)const {
			return _Row;
		}
		[[nodiscard]] constexpr _Ty& operator[] (const size_t x) {
			if (x < _Row * _Col)
				return *(_Matrix + x);
			__debugbreak();
		}
		[[nodiscard]] constexpr _Ty& at(const size_t x) {
			if (x < _Row * _Col)
				return *(_Matrix + x);
			__debugbreak();
		}
		[[nodiscard]] constexpr _Ty& at(const size_t i, const size_t j) {
			if (i < _Row && j < _Col)
				return _Matrix(i, j);
			__debugbreak();
		}
		[[nodiscard]] constexpr _Ty& operator () (const size_t x, const size_t y) {
			if (x <= _Row && y <= _Col && x > 0 && y > 0)
				return _Matrix((x - 1), (y - 1));
			__debugbreak();
		}
		[[nodiscard]] constexpr const _Ty& at(const size_t x)const {
			if (x < _Row * _Col)
				return *(_Matrix + x);
			__debugbreak();
		}
		[[nodiscard]] constexpr const _Ty& at(const size_t i, const size_t j)const {
			if (i < _Row && j < _Col)
				return _Matrix(i, j);
			__debugbreak();
		}
		[[nodiscard]] constexpr const _Ty& operator () (const size_t x, const size_t y)const {
			if (x <= _Row && y <= _Col && x > 0 && y > 0)
				return _Matrix((x - 1), (y - 1));
			__debugbreak();
		}

		// 5. Operator Overloading ----------------------------------------------------------------------------------------

		[[nodiscard]] constexpr Matrix operator + (const Matrix& x)const {
			if (_Row == x._Row && _Col == x._Col) {
				size_t range = _Row * _Col;
				Matrix Tmp(_Row, _Col);
				for (size_t i = 0; i < range; ++i)
					Tmp_matrix__(i) = x_matrix__(i) + __Matrix(i);
				return Tmp;
			}
			__debugbreak();
		}
		[[nodiscard]] constexpr Matrix operator - (const Matrix& x)const {
			if (_Row == x._Row && _Col == x._Col) {
				Matrix Tmp(_Row, _Col); size_t range = _Row * _Col;
				for (size_t i = 0; i < range; ++i)
					Tmp_matrix__(i) = __Matrix(i) - x_matrix__(i);
				return Tmp;
			}
			__debugbreak();
		}
		[[nodiscard]] constexpr Matrix operator * (const Matrix& x)const {
			if (_Col == x._Row) {
				Matrix Tmp(_Row, x._Col); size_t i, j, k; _Ty sum;
				for (i = 0; i < _Row; ++i) {
					for (j = 0; j < x._Col; ++j) {
						sum = zero;
						for (k = 0; k < _Col; ++k)
							sum += _Matrix(i, k) * x_matrix_(k, j);
						Tmp_matrix_(i, j) = sum;
					}
				}
				return Tmp;
			}
			__debugbreak();
		}
		[[nodiscard]] constexpr Matrix operator * (const _Ty& x)const {
			Matrix Tmp(_Row, _Col); size_t RANGE = _Row * _Col;
			for (size_t i = 0; i < RANGE; ++i)
				Tmp_matrix__(i) = x * __Matrix(i);
			return Tmp;
		}

		template<size_t  _SIZE_> [[nodiscard]] constexpr Array<_Ty> operator * (const Array<_Ty>& x)const {
			if (_Col == x.size()) {
				Array<_Ty> Tmp(_Row); _Ty* ptr = Tmp.data(); const _Ty* xptr = x.data();
				size_t i, j; _Ty sum;
				for (i = 0; i < _Row; ++i) {
					sum = zero;
					for (j = 0; j < _Col; ++j)
						sum += _Matrix(i, j) * *(xptr + j);
					*(ptr + i) = sum;
				}
				return Tmp;
			}
			__debugbreak();
		}

		// 6. Sub matrices, Minors, Principal Minors ------------------------------------------------------------------------

		[[nodiscard]] constexpr Matrix subMatrix(const Array<size_t>& I, const Array<size_t>& J)const {
			size_t Tmp_row = I.size();
			if (Tmp_row > 0 && Tmp_row <= _Row && Tmp_row == J.size() && *(--I.end()) <= _Row && *(--J.end()) <= _Col) {
				Matrix Tmp(Tmp_row); size_t i1 = 0, j1 = 0;
				for (const auto& i : I) {
					j1 = 0;
					for (const auto& j : J) {
						Tmp_matrix_(i1, j1) = _Matrix((i - 1), (j - 1));
						++j1;
					}
					++i1;
				}
				//Tmp.print();
				return Tmp;
			}
			std::cout << "Error in sub matrix computation"; exit(0);
		}
		[[nodiscard]] constexpr _Ty minor(const Array<size_t>& I, const Array<size_t>& J)const {
			return subMatrix(I, J).DET();
		}
		[[nodiscard]] constexpr _Ty signedMinor(const Array<size_t>& I, const Array<size_t>& J)const {
			size_t Tmp = 0;
			for (const auto& i : I)
				Tmp += i;
			for (const auto& i : J)
				Tmp += i;
			return (Tmp & 1) ? -subMatrix(I, J).DET() : subMatrix(I, J).DET();
		}
		[[nodiscard]] constexpr _Ty complementaryMinor(const Array<size_t>& I, const Array<size_t>& J)const {
			Array<size_t> Tmpi, Tmpj;
			size_t indexI = 0, indexJ = 0, sizei = I.size(), sizej = J.size();
			Tmpi.reserve(_Row - sizei);	Tmpj.reserve(_Row - sizej); --sizei; --sizej;
			for (size_t i = 1; i <= _Row; ++i) {
				if (i != I[indexI]) Tmpi.push_back(i); else if (indexI < sizei) ++indexI;
				if (i != J[indexJ]) Tmpj.push_back(i); else if (indexJ < sizej) ++indexJ;
			}
			return subMatrix(Tmpi, Tmpj).DET();
		}
		[[nodiscard]] constexpr _Ty signedComplementaryMinor(const Array<size_t>& I, const Array<size_t>& J)const {
			Array<size_t> Tmpi, Tmpj;
			size_t indexI = 0, indexJ = 0, Tmp = 0, sizei = I.size(), sizej = J.size();
			Tmpi.reserve(_Row - sizei);	Tmpj.reserve(_Row - sizej); --sizei; --sizej;
			for (size_t i = 1; i <= _Row; ++i) {
				if (i != I[indexI]) { Tmpi.push_back(i); Tmp += i; }
				else if (indexI < sizei) ++indexI;
				if (i != J[indexJ]) { Tmpj.push_back(i); Tmp += i; }
				else if (indexJ < sizej) ++indexJ;
			}
			return (Tmp & 1) ? -subMatrix(Tmpi, Tmpj).DET() : subMatrix(Tmpi, Tmpj).DET();
		}
		[[nodiscard]] constexpr _Ty cofactor(const size_t I, const size_t J)const {
			Array<size_t> Tmpi, Tmpj;
			Tmpi.reserve(_Row - 1); Tmpj.reserve(_Row - 1);
			for (size_t i = 1; i <= _Row; ++i) {
				if (i != I) Tmpi.push_back(i);
				if (i != J) Tmpj.push_back(i);
			}
			return ((I + J) & 1) ? -subMatrix(Tmpi, Tmpj).DET() : subMatrix(Tmpi, Tmpj).DET();
		}
		[[nodiscard]] constexpr _Ty sum_ofPrincipleMinor(const size_t Order)const {
			Array<Array<size_t>> Tmp = makeCombi(_Row, Order);
			_Ty sum = zero;
			for (const auto& i : Tmp)
				sum += subMatrix(i, i).DET();
			return sum;
		}
		[[nodiscard]] constexpr Matrix adj()const {
			Matrix Tmp(_Row); size_t i, j;
			for (i = 0; i < _Row; ++i)
				for (j = 0; j < _Row; ++j)
					Tmp_matrix_(j, i) = cofactor(i + 1, j + 1);
			return Tmp;
		}

		// 7. Diagonalization EigenValues, EigenVectors, Characteristic Polynomial -------------------------------------------

		//[[nodiscard]] constexpr Polynomial<field> characteristicPolynomial()const {
		//	Array<field> Tmp; field k = -identity;
		//	Tmp.push_back(identity);
		//	for (size_t i = 1; i <= ROW_; ++i)
		//		(i & 1) ? Tmp.push_back(-sum_ofPrincipleMinor(i)) : Tmp.push_back(sum_ofPrincipleMinor(i));
		//	return Polynomial(Tmp);
		//}

		// 8. Method---------------------------------------------------------------------------------------------------------

		[[nodiscard]] constexpr _Ty DETERMINATE_DO_NOT_RECOMENDED(void) {
			if (_Row == _Col) {
				if (_Row == 2) return *_Matrix * *(_Matrix + 3) - *(_Matrix + 2) * *(_Matrix + 1);
				Matrix Tmp(_Row - 1, _Col - 1);
				_Ty result(0); size_t i, j, k, m;
				for (i = 0; i < _Col; ++i) {
					k = 0;
					for (j = 0; j < _Col; ++j)
						if (i != j) {
							for (m = 0; m < Tmp._Row; ++m)
								Tmp_matrix_(m, k) = _Matrix((m + 1), j);
							++k;
						}
					if (i % 2 == 0)
						result += __Matrix(i) * DETERMINATE(Tmp);
					else
						result -= __Matrix(i) * DETERMINATE(Tmp);
				}
				return result;
			}
			else {
				__debugbreak();
			}
		} // NOT RECOMMENDED
		/*constexpr void print(void)const {
			size_t  i, j = 0;
			for (i = 0; i < _Row; ++i) {
				std::cout << "\n( ";
				for (j = 0; j < _Col; ++j)
					std::cout << _Matrix(i, j) << " ";
				std::cout << ')';
			}
		}*/
		/*constexpr void scan(void) {
			size_t i, j;
			for (i = 0; i < _Row; ++i)
				for (j = 0; j < _Col; ++j)
					std::cin >> _Matrix(i, j);
		}*/
	private:
		_Ty DETERMINATE(const Matrix& x) {
			if (x._Row == 2) return *x._Mat * *(x._Mat + 3) - *(x._Mat + 2) * *(x._Mat + 1);
			Matrix Tmp(x._Row - 1, x._Col - 1);
			_Ty result(0); size_t i, j, k, m;
			for (i = 0; i < x._Col; ++i) {
				k = 0;
				for (j = 0; j < x._Col; ++j)
					if (i != j) {
						for (m = 0; m < Tmp._Row; ++m)
							Tmp_matrix_(m, k) = x_matrix_((m + 1), j);
						++k;
					}
				if (i % 2 == 0)
					result += x_matrix__(i) * DETERMINATE(Tmp);
				else
					result -= x_matrix__(i) * DETERMINATE(Tmp);
			}
			return result;
		}
	};

}



export namespace alpha{

	enum MatrixType : unsigned char {
		RowMatrix, ColumnMatrix, SquareMatrix, DiagonalMatrix,
		ScalarMatrix, UnitMatrix, TriangularMatrix, NullMatrix,
		SymmetricMatrix, SkewSymmetricMatrix, HermitianMatrix, SingularMatrix, 
		UnitaryMatrix, OrthogonalMatrix, ProjectionMatrix,
		ReflectionMatrix, NilpotantMatrix, BiDiagonalMatrix, BlockMatrix,
		BlockDiagonalMatrix, BooleanMatrix, PermutationMatrix,
		VandermondeMatrix,
		CompanionMatrix
	};
	
	template<class _Ty>
	class SquareMatrix {
	public:
		constexpr void print()const noexcept {
			for (auto i = _Zero; i < _Row; ++i) {
				fputs("\n(", stdout);
				for (auto j = _Zero; j < _Row; ++j)
					Print(_Mat[i][j], ' ');
				fputc(')', stdout);
			}
		}
		constexpr MatrixType type()const noexcept {
			return MatrixType::SquareMatrix;
		}
		constexpr const char* type_name()const noexcept {
			return "SquareMatrix";
		}
	public:
		explicit constexpr SquareMatrix(const size_t _Row)noexcept {
			_AllocateExactly(_Row);
		}
	public:
		constexpr SquareMatrix(const size_t _Row, const _Ty& _Arg)noexcept {
			_AllocateExactly(_Row);
			_Memset(_Arg);
		}
		constexpr SquareMatrix(const initializer<initializer<_Ty>>& _That)noexcept {
			if constexpr (_debug) {
				for (const auto& row : _That) {
					if (_That.size() != row.size()) {
						__debugbreak();
					}
				}
			}
			_Row = _That.size();
			_AllocateExactly(_Row);
			auto i = _Zero;
			auto j = _Zero;

			for (const auto& _row : _That) {
				j = _Zero;
				for (const auto& _Arg : _row) {
					_Mat[i][j] = _Arg; ++j;
				} ++i;
			}
		}
		constexpr SquareMatrix(const SquareMatrix& _Mat)noexcept {
			_AllocateExactly(_Mat._Row);
			_Copy(_Mat);
		}
		constexpr SquareMatrix(SquareMatrix&& _That)noexcept {
			_Mat = _That._Mat;
			_Arr = _That._Arr;
			_Row = _That._Row;

			_That._Mat = 0;
			_That._Arr = 0;
			_That._Row = 0;
		}
		constexpr~SquareMatrix()noexcept {
			if(_Arr != nullptr)
				_Free();
		}
	public:
		[[nodiscard]] constexpr _Ty* operator[](const size_t ith)noexcept {
			if constexpr (_debug) {
				if (ith >= _Row)
					__debugbreak();
			}
			return _Mat[ith];
		}
		[[nodiscard]] constexpr const _Ty* operator[](const size_t ith)const noexcept {
			if constexpr (_debug) {
				if (ith >= _Row)
					__debugbreak();
			}
			return _Mat[ith];
		}
		[[nodiscard]] constexpr _Ty& operator()(const size_t ith, const size_t jth)noexcept {
			if constexpr (_debug) {
				if (ith >= _Row || jth >= _Row)
					__debugbreak();
			}
			return _Mat[ith][jth];
		}
		[[nodiscard]] constexpr const _Ty& operator()(const size_t ith, const size_t jth)const noexcept {
			if constexpr (_debug) {
				if (ith >= _Row || jth >= _Row)
					__debugbreak();
			}
			return _Mat[ith][jth];
		}
	public:
		inline constexpr void ElementaryRowOperationType1(const size_t i1th, const size_t i2th)noexcept {
			if constexpr (_debug) {
				if (i1th >= _Row || i2th = _Row) {
					__debugbreak();
				}
			}
			auto _Tmp  = _Mat[i1th];
			_Mat[i1th] = _Mat[i2th];
			_Mat[i2th] = _Tmp;
		}
		inline constexpr void ElementaryRowOperationType2(const size_t ith,  const _Ty& _ScalarVal)noexcept {
			if constexpr (_debug) {
				if (ith >= _Row) {
					__debugbreak();
				}
			}
			auto _Arr = _Mat[ith];
			for (size_t i = 0; i < _Row; ++i) {
				_Arr[i] *= _ScalarVal;
			}
		}
		inline constexpr void ElementaryRowOperationType3(const size_t i1th, const size_t i2th, const _Ty& _ScalarVal)noexcept {
			if constexpr (_debug) {
				if (i1th >= _Row || i2th = _Row || i1th == i2th) {
					__debugbreak();
				}
			}
			auto _Ptr1 = _Mat[i1th];
			auto _Ptr2 = _Mat[i2th];
			auto _Val = _ScalarVal;
			for (size_t i = 0; i < _Row; ++i) {
				_Ptr1[i] += _ScalarVal * _Ptr2[i];
			}
		}
		inline constexpr void ElementaryColOperationType1(const size_t j1th, const size_t j2th)noexcept {
			if constexpr (_debug) {
				if (i1th >= _Row || i2th = _Row) {
					__debugbreak();
				}
			}
			for (size_t i = 0; i < _Row; ++i)
				swap(_Mat[i][j1th], _Mat[i][j2th]);
		}
		inline constexpr void ElementaryColOperationType2(const size_t jth,  const _Ty& _ScalarVal)noexcept {
			if constexpr (_debug) {
				if (jth >= _Row) {
					__debugbreak();
				}
			}
			for (size_t i = 0; i < _Row; ++i)
				_Mat[i][jth] *= _ScalarVal;
		}
		inline constexpr void ElementaryColOperationType3(const size_t j1th, const size_t j2th, const _Ty& _ScalarVal)noexcept {
			if constexpr (_debug) {
				if (j1th >= _Row || j2th = _Row || j1th == j2th) {
					__debugbreak();
				}
			}
			for (size_t i = 0; i < _Row; ++i)
				_Mat[i][j1th] += _ScalarVal * _Mat[i][j2th];
		}
	private:
		inline constexpr auto _RowEchelonFormHelper(const size_t i, const size_t j)noexcept {
			ElementaryRowOperationType2(i, _Unity / _Mat[i][j]);
			for (size_t _idx = i + 1; _idx < _Row; ++_idx) {
				if (_Mat[_idx][j] != _Zero)
					ElementaryRowOperationType3(_idx, i, -_Mat[_idx][j]);
			}
		}
		inline constexpr auto _RowReducedEchelonFormHelper(const size_t i, const size_t j)noexcept {
			ElementaryRowOperationType2(i, _Unity / _Mat[i][j]);

			for (size_t _idx = 0; _idx < i; ++_idx) {
				if (_Mat[_idx][j] != _Zero)
					ElementaryRowOperationType3(_idx, i, -_Mat[_idx][j]);
			}

			for (size_t _idx = i + 1; _idx < _Row; ++_idx) {
				if (_Mat[_idx][j] != _Zero)
					ElementaryRowOperationType3(_idx, i, -_Mat[_idx][j]);
			}
		}
		inline constexpr auto _InverseHelper(const ElementaryRowOperationData& _Data)noexcept {
			return true;
		}
	private:
		enum ElementaryRowOperation : unsigned char {
			_ElementaryRowOperationType1,
			_ElementaryRowOperationType2,
			_ElementaryRowOperationType3
		};
		struct ElementaryRowOperationData {
			ElementaryRowOperation _Operation;
			_Ty _Arg;
			unsigned int i1;
			unsigned int i2;
		};
	public:
		constexpr void RowEchelonForm()noexcept {
			size_t _idx = 0,  _RowPivot = 0, _ColPivot = 0;
			for (_idx = 0; _idx < _Row; ++_idx) {
				if (_Mat[_RowPivot][_idx] == _Zero) {
					auto i = _RowPivot + 1;
					for (; i < _Row; ++i)
						if (_Mat[i][_idx] != _Zero) {
							ElementaryRowOperationType1(i, _RowPivot); break;
						}
					if (i == _Row) { ++_ColPivot;
					} else {
						_RowEchelonFormHelper(_RowPivot, _ColPivot);
						++_RowPivot; ++_ColPivot;
					}
				} else {
					_RowEchelonFormHelper(_RowPivot, _ColPivot);
					++_RowPivot; ++_ColPivot;
				}
			}
		}
		constexpr void RowReducedEchelonForm()noexcept {
			size_t _idx = 0, _RowPivot = 0, _ColPivot = 0;
			for (_idx = 0; _idx < _Row; ++_idx) {
				if (_Mat[_RowPivot][_idx] == _Zero) {
					auto i = _RowPivot + 1;
					for (; i < _Row; ++i)
						if (_Mat[i][_idx] != _Zero) {
							ElementaryRowOperationType1(i, _RowPivot); break;
						}
					if (i == _Row) { ++_ColPivot;
					} else {
						_RowReducedEchelonFormHelper(_RowPivot, _ColPivot);
						++_RowPivot; ++_ColPivot;
					}
				} else {
					_RowReducedEchelonFormHelper(_RowPivot, _ColPivot);
					++_RowPivot; ++_ColPivot;
				}
			}
		}
		constexpr bool Inverse()noexcept {
			Array<ElementaryRowOperationData> ElementaryRowOperationDataList(_Row);
			if (_InverseHelper(ElementaryRowOperationDataList)) {
				auto _Size = ElementaryRowOperationDataList.size();
				for (size_t i = 0; i < _Size; ++i) {
					auto _Tmp = ElementaryRowOperationDataList[i];
					switch (_Tmp._Operation) {
					case ElementaryRowOperation::_ElementaryRowOperationType1:
						ElementaryRowOperationType1(_Tmp.i1, _Tmp.i2);
						break;
					case ElementaryRowOperation::_ElementaryRowOperationType2:
						ElementaryRowOperationType2(_Tmp.i1, _Tmp._Arg);
						break;
					case ElementaryRowOperation::_ElementaryRowOperationType3:
						ElementaryRowOperationType3(_Tmp.i1, _Tmp.i2, _Tmp._Arg);
						break;
					default: break;
					}
				}return true;
			} else return false;
		}

















	private:
		inline constexpr void _AllocateExactly(const size_t _Siz)noexcept {
			_Row = _Siz;
			_Arr = static_cast<_Ty*> (malloc(((size_t)_Siz) * _Siz * sizeof(_Ty)));
			_Mat = static_cast<_Ty**>(malloc(_Siz * sizeof(_Ty*)));
			if constexpr (_debug) {
				if (_Mat == 0 || _Arr == 0)
					__debugbreak();
			}
			for (auto i = _Zero; i < _Siz; ++i)
				_Mat[i] = _Arr + i * _Siz;
		}
		inline constexpr void _Free()noexcept {
			if constexpr (!is_trivially_destructible_v<_Ty>)
				for (size_t _idx = 0; _idx < _Cap; ++_idx)
					_Arr[_idx].~_Ty();
			free(_Arr);
			free(_Matrix);

			_Mat = nullptr;
			_Arr = nullptr;
			_Row = 0;
		}
		inline constexpr void _Copy(const SquareMatrix& _That)noexcept {
			_Row = _That._Row;
			memcpy(_Mat, _That._Mat, _That._Row * sizeof(_Ty));

			if constexpr (is_fundamental_v<_Ty> || is_pointer_v<_Ty>) {
				memcpy(_Arr, _That._Arr, _That._Row * _That._Row * sizeof(_Ty));
			}
			else {
				for (size_t _idx = 0; _idx < _Row; ++_idx)
					_Arr[_idx] = _That._Arr[_idx];
			}
		}
		inline constexpr void _Memset(const _Ty& _Val)noexcept {
			size_t _Siz = _Row * _Row;
			if constexpr (is_fundamental_v<_Ty>) {
				if constexpr (is_same_v<_Ty, char>) {
					memset(_Arr, _Val, _Siz);
				}
				else {
					if (_Val != 0) {
						for (size_t _idx = 0; _idx < _Siz; ++_idx)
							_Arr[_idx] = _Val;
					}
					else {
						memset(_Arr, 0, _Siz * sizeof(_Ty));
					}
				}
			}
			else {
				for (size_t _idx = 0; _idx < _Siz; ++_idx)
					_Arr[_idx] = _Val;
			}
		}
	private:
		inline static constexpr const _Ty _Zero = 0;
		inline static constexpr const _Ty _Unity = 1;

		_Ty** _Mat;
		_Ty* _Arr;
		size_t _Row;
	};
	
	template<class _Ty> class DiagonalMatrix {
	private:

	public:
		constexpr DiagonalMatrix(size_t _Siz)noexcept {
			_Arr = static_cast<_Ty*>(malloc(_Siz * sizeof(_Ty)));
			_Row = _Siz;
		}
	private:
		using size_t = size_t;
		_Ty* _Arr;
		size_t _Row;

	};

	template<class _Ty> class ScalarMatrix : DiagonalMatrix {

	};

	template<class _Ty> class UnitMatrix : public ScalarMatrix {

	};

	template<class _Ty> class TriangularMatrix : public SquareMatrix {

	};

	template<class _Ty> class UpperTriangularMatrix : public TriangularMatrix {

	};

	template<class _Ty> class SymmetricMatrix : public SquareMatrix {

	};

	template<class _Ty> class SkewSymmetricMatrix : public SquareMatrix {

	};

	template<class _Ty> class SingularMatrix : public SquareMatrix {

	};

	template<class _Ty> class UnitaryMatrix : public SquareMatrix {

	};

	template<class _Ty> class NilpotantMatrix : public SquareMatrix {

	};

	template<class _Ty> class HermitianMatrix : public SquareMatrix {

	};

	template<class _Ty> class OrthogonalMatrix : public SquareMatrix {

	};

	template<class _Ty> class ProjectionMatrix : public SquareMatrix {

	};

	template<class _Ty> class ReflectionMatrix : public SquareMatrix {

	};

	template<class _Ty> class BiDiagonalMatrix : public SquareMatrix {

	};

	template<class _Ty> class BlockMatrix : public SquareMatrix {

	};

	template<class _Ty> class BlockDiagonalMatrix : public SquareMatrix {

	};

	template<class _Ty> class BooleanMatrix : public SquareMatrix {

	};

	template<class _Ty> class PermutationMatrix : public SquareMatrix {

	};

	template<class _Ty> class VandermondeMatrix : public SquareMatrix {

	};

	template<class _Ty> class CompanionMatrix : public SquareMatrix {

	};

	template<class _Ty> class NullMatrix {

	};
}