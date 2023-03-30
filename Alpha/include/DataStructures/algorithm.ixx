module;
export module algorithm;

import core;
import utility;
import typeinfo;
import typetraits;
import LinearContainer;
namespace alpha {
	

	export template<class _InIt, class _Ty>
	[[nodiscard]] inline constexpr _Ty accumulate(_InIt _First, _InIt _Last, _Ty _Val) {
		auto _UFirst = _Get_unwrapped(_First);
		const auto _ULast = _Get_unwrapped(_Last);

		for (; _UFirst != _ULast; ++_UFirst)
			_Val += *_UFirst;

		return _Val;
	}

	export template<class _InIt, class _Ty, class _Fn>
	[[nodiscard]] inline constexpr _Ty accumulate(_InIt _First, _InIt _Last, _Ty _Val, _Fn _Func)noexcept {
		auto _UFirst = _Get_unwrapped(_First);
		const auto _ULast = _Get_unwrapped(_Last);
	
		for (; _UFirst != _ULast; ++_UFirst)
			_Func(_Val, *_UFirst);

		return _Val;
	}

	export template<class _Ty>
	[[nodiscard]] inline constexpr _Ty pow(_Ty _Val, size_t _Count)noexcept {
		if (_Count == 0) return 1;
		_Ty _Result = _Val; --_Count;
		while (_Count) {
			if (_Count & 1) _Result *= _Val;
			_Val *= _Val;
			_Count >>= 1;
		}
		return _Result;
	}

	export template<class _Ty, class _Fn>
	[[nodiscard]] inline constexpr _Ty const_accumulate(_Ty _Val, size_t _Count, _Fn _Func)noexcept {
		if constexpr (_debug) if (_Count == 0) __debugbreak();
		_Ty _Ans = _Val; --_Count;
		while (_Count) {
			if (_Count & 1) _Func(_Ans, _Val);
			_Func(_Val, _Val);
			_Count >>= 1;
		}
		return _Ans;
	}

	export template<class _InIt, class _Ty>
	[[nodiscard]] inline constexpr _InIt find(_InIt _First, _InIt _Last, const _Ty& _Val)noexcept {
		auto _UFirst = _Get_unwrapped(_First);
		const auto _ULast = _Get_unwrapped(_Last);

		for (; _UFirst != _ULast; ++_UFirst) if (*_UFirst == _Val) return _InIt(_UFirst);
		return _InIt(_ULast);
	}

	export template <class _FwdIt, class _Ty>
	inline constexpr void iota(_FwdIt _First, _FwdIt _Last, _Ty _Val) {
		auto _UFirst = _Get_unwrapped(_First);
		const auto _ULast = _Get_unwrapped(_Last);
		for (; _UFirst != _ULast; ++_UFirst, (void) ++_Val) {
			*_UFirst = _Val;
		}
	}

	export template<typename _Ty, typename _Fn>
	constexpr void for_each_permutation(Array<_Ty>& _Container, size_t K, _Fn _Func)noexcept {
		unsigned int _Size = static_cast<unsigned int>(_Container.size());
		if constexpr (_debug) if (K > _Size) __debugbreak();
		Array<_Ty> _Permutation(K);
		_Ty* _Ptr = _Container.data();
		_Ty* _PPtr = _Permutation.data();

		if constexpr (is_trivially_move_constructible_v<_Ty>) {
			static const auto _NpK = [_Func, _Size, K, _Ptr, _PPtr, &_Permutation]
			(const auto& _NpK, unsigned int _idx)->void {
				if (K - _idx == 1) {
					for (unsigned int i = _idx; i < _Size; ++i) {
						_PPtr[_idx] = _Ptr[i];
						_Func(_Permutation);
					} return;
				}
				for (unsigned int i = _idx; i < _Size; ++i) {
					swap(_Ptr[_idx], _Ptr[i]);
					_PPtr[_idx] = _Ptr[_idx];
					_NpK(_NpK, _idx + 1);
					swap(_Ptr[_idx], _Ptr[i]);
				}
			}; _NpK(_NpK, 0);
		} else {
			static const auto _NpK = [_Func, _Size, K, _Ptr, _PPtr, &_Permutation]
			(const auto& _NpK, unsigned int _idx)->void {
				if (K - _idx == 1) {
					for (unsigned int i = _idx; i < _Size; ++i) {
						_PPtr[_idx] = move(_Ptr[i]);
						_Func(_Permutation);
						_Ptr[i] = move(_PPtr[_idx]);
					} return;
				}
				for (unsigned int i = _idx; i < _Size; ++i) {
					swap(_Ptr[_idx], _Ptr[i]);
					_PPtr[_idx] = move(_Ptr[_idx]);
					_NpK(_NpK, _idx + 1);
					_Ptr[_idx] = move(_PPtr[_idx]);
					swap(_Ptr[_idx], _Ptr[i]);
				}
			}; _NpK(_NpK, 0);
		} return;
	}

	export template<class _Ty, class _Fn>
	constexpr void for_each_combination(Array<_Ty>& _Container, const unsigned int K, _Fn _Func) {
		const unsigned int _Size = static_cast<unsigned int>(_Container.size());
		if constexpr (_debug) if (K > _Size) __debugbreak();
		Array<_Ty> _Combination(K);
		_Ty* _Ptr = _Container.data();
		_Ty* _CPtr = _Combination.data();

		if constexpr (is_trivially_move_constructible_v<_Ty>) {
			static const auto _NcK = [_Size, K, _Ptr, _CPtr, &_Combination, _Func]
			(const auto& _NcK, unsigned int _Offset, unsigned int _idx)->void {
				unsigned int _NSize = _Size - (K - _idx);
				if ((K - _idx) == 1) {
					for (unsigned int i = _Offset; i <= _NSize; ++i) {
						_CPtr[_idx] = _Ptr[i];
						_Func(_Combination);
					} return;
				}
				for (unsigned int i = _Offset; i <= _NSize; ++i) {
					_CPtr[_idx] = _Ptr[i];
					_NcK(_NcK, i + 1, _idx + 1);
				}
			};
			_NcK(_NcK, 0, 0);
		} else {
			static const auto _NcK = [_Size, K, _Ptr, _CPtr, &_Combination, _Func]
			(const auto& _NcK, unsigned int _Offset, unsigned int _idx)->void {
				unsigned int _NSize = _Size - (K - _idx);
				if ((K - _idx) == 1) {
					for (unsigned int i = _Offset; i <= _NSize; ++i) {
						_CPtr[_idx] = move(_Ptr[i]);
						_Func(_Combination);
						_Ptr[i] = move(_CPtr[_idx]);
					} return;
				}
				for (unsigned int i = _Offset; i <= _NSize; ++i) {
					_CPtr[_idx] = move(_Ptr[i]);
					_NcK(_NcK, i + 1, _idx + 1);
					_Ptr[i] = move(_CPtr[_idx]);
				}
			}; _NcK(_NcK, 0, 0);
		} return;
	}


	//template<class Matrix>
	//bool inverseMatrix(Matrix& A, Matrix& A_inv, size_t n) {
	//	const double eps = 1e-9;
	//	vector<int> piv(n);
	//	double det = 1;

	//	// LU decomposition with partial pivoting
	//	for (int i = 0; i < n; i++) {
	//		piv[i] = i;
	//		int k = i;
	//		for (int j = i + 1; j < n; j++) {
	//			if (abs(A[j][i]) > abs(A[k][i]))
	//				k = j;
	//		}
	//		if (abs(A[k][i]) < eps)
	//			return false; // matrix is not invertible
	//		if (k != i) {
	//			swap(A[i], A[k]);
	//			swap(piv[i], piv[k]);
	//			det = -det;
	//		}
	//		det *= A[i][i];
	//		for (int j = i + 1; j < n; j++) {
	//			double f = A[j][i] / A[i][i];
	//			A[j][i] = f;
	//			for (int l = i + 1; l < n; l++)
	//				A[j][l] -= f * A[i][l];
	//		}
	//	}

	//	// Back-substitution to find the inverse
	//	A_inv.assign(n, vector<double>(n, 0));
	//	for (int i = 0; i < n; i++) {
	//		A_inv[i][i] = 1;
	//		for (int j = 0; j < i; j++) {
	//			for (int k = 0; k < n; k++) {
	//				A_inv[i][k] -= A[i][j] * A_inv[j][k];
	//			}
	//		}
	//		for (int j = i + 1; j < n; j++) {
	//			for (int k = 0; k < n; k++) {
	//				A_inv[i][k] -= A[i][j] * A_inv[j][k];
	//			}
	//		}
	//		for (int j = 0; j < n; j++) {
	//			A_inv[i][j] /= A[i][i];
	//		}
	//	}

	//	return true;
	//}

}

