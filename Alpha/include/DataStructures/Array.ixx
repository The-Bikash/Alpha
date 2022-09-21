module;
export module Array;

import core;
import initializer;
import typetraits;


export namespace alpha {
	template<class Array>
	class ConstArrayIterator {
	public:
		using _Ty = class Array::ArrayTy;
	public:
		constexpr ConstArrayIterator(const _Ty* _Arr) noexcept : _Arr(_Arr) {}
		constexpr ConstArrayIterator& operator++() noexcept {
			++_Arr;
			return *this;
		}
		constexpr ConstArrayIterator& operator--() noexcept {
			--_Arr;
			return *this;
		}
		constexpr ConstArrayIterator operator++(int) noexcept {
			ConstArrayIterator iterator = *this;
			++(*this);
			return iterator;
		}
		constexpr ConstArrayIterator operator--(int) noexcept {
			ConstArrayIterator iterator = *this;
			--(*this);
			return iterator;
		}
		constexpr _Ty& operator[] (size_t index)const noexcept {
			return *(_Arr + index);
		}
		constexpr _Ty* operator->()const noexcept {
			return _Arr;
		}
		constexpr _Ty& operator*()const noexcept {
			return *_Arr;
		}
		constexpr bool operator==(const ConstArrayIterator& that)const {
			return this->_Arr == that._Arr;
		}
		constexpr bool operator!=(const ConstArrayIterator& that)const {
			return this->_Arr != that._Arr;
		}
	private:
		_Ty* _Arr;
	};

	template<class Array>
	class ArrayIterator {
	public:
		using _Ty = typename Array::_ArrayTy;
	public:
		constexpr ArrayIterator(const _Ty* _Arr) :_Arr(_Arr) {}
		constexpr ArrayIterator& operator++() noexcept {
			++_Arr;
			return *this;
		}
		constexpr ArrayIterator& operator--() noexcept {
			--_Arr;
			return *this;
		}
		constexpr ArrayIterator operator++(int) noexcept {
			ArrayIterator iterator = *this;
			++(*this);
			return iterator;
		}
		constexpr ArrayIterator operator--(int) noexcept {
			ArrayIterator iterator = *this;
			--(*this);
			return iterator;
		}
		constexpr _Ty& operator[] (size_t index)noexcept {
			return *(_Arr + index);
		}
		constexpr _Ty* operator->()noexcept {
			return _Arr;
		}
		constexpr _Ty& operator*()noexcept {
			return *_Arr;
		}
		constexpr bool operator == (const ArrayIterator& that)const {
			return this->_Arr == that._Arr;
		}
		constexpr inline bool operator != (const ArrayIterator& that)const {
			return this->_Arr != that._Arr;
		}
	private:
		_Ty* _Arr;
	};

	template<class _Ty>
	class Array {
	private:
		size_t  _Siz;
		size_t  _Cap;
		_Ty*	_Arr;

		inline constexpr size_t _RecommedCap(const size_t _Siz)const noexcept {
			size_t Tmp = 2;
			while (Tmp <= _Siz)
				Tmp <<= 1;
			return (size_t)Tmp;
		}

		inline constexpr auto _Reallocate(const size_t _Size)noexcept {
			if (_Size < _Siz)
				_Siz = _Size;
			_Cap = _RecommedCap(_Size);
			_Arr = static_cast<_Ty*>(realloc(_Arr, _Cap * sizeof(_Ty)));
			if constexpr (_debug)
				if (_Arr == 0) __debugbreak();
		}

		inline constexpr auto _ReallocateExactly(const size_t _Size)noexcept {
			if (_Size < _Siz)
				_Siz = _Size;
			_Cap = _Size;
			_Arr = static_cast<_Ty*>(realloc(_Arr, _Size * sizeof(_Ty)));
			if constexpr (_debug)
				if (_Arr == 0) __debugbreak();
		}

		inline constexpr auto _Allocate(size_t _Size)noexcept {
			_Cap = _RecommedCap(_Size);
			_Arr = static_cast<_Ty*>(malloc(_Cap * sizeof(_Ty)));
			if constexpr (_debug)
				if (_Arr == 0) __debugbreak();
		}

		inline constexpr auto _AllocateExactly(const size_t _Siz)noexcept {
			_Cap = _Siz;
			_Arr = static_cast<_Ty*>(malloc(_Cap * sizeof(_Ty)));
			if constexpr (_debug)
				if (_Arr == 0) __debugbreak();
		}

		inline constexpr auto _Free()noexcept {
			_Siz = 0; _Cap = 0;
			if constexpr (!is_trivially_destructible_v<_Ty>)
				for (size_t _idx = 0; _idx < _Cap; ++_idx)
					_Arr[_idx].~_Ty();
			free(_Arr); _Arr = nullptr;
		}

		inline constexpr auto _Memset(const _Ty& _Val)noexcept {
			if constexpr (is_fundamental_v<_Ty>) {
				if constexpr (is_same_v<_Ty, char>) {
					memset(_Arr, _Val, _Siz);
				}
				else {
					if (_Val != 0) {
						for (size_t _idx = 0; _idx < _Siz; ++_idx) {
							_Arr[_idx] = _Val;
						}
					}
					else {
						memset(_Arr, 0, _Siz * sizeof(_Ty));
					}
				}
			}
			else {
				for (size_t _idx = 0; _idx < _Siz; ++_idx) {
					_Arr[_idx] = _Val;
				}
			}
		}

		inline constexpr auto _Copy(const Array& _That)noexcept {
			_Siz = _That._Siz;
			if constexpr (is_fundamental_v<_Ty> || is_pointer_v<_Ty>) {
				memcpy(_Arr, _That._Arr, _That._Siz * sizeof(_Ty));
			}
			else {
				for (size_t _idx = 0; _idx < _Siz; ++_idx) {
					_Arr[_idx] = _That._Arr[_idx];
				}
			}
		}

	public:

		using ArrayTy = _Ty;
		using Iterator = ArrayIterator<Array<_Ty>>;
		using ConstIterator= ConstArrayIterator<Array<_Ty>>;

		constexpr Array()noexcept {
			_Siz = 0;
			_AllocateExactly(2);
		}

		explicit constexpr Array(const size_t _Size)noexcept {
			_AllocateExactly(_Size);
			_Siz = 0;
		}

		constexpr Array(const size_t _Size, const _Ty& _Val)noexcept {
			_AllocateExactly(_Size);
			_Siz = _Size;
			_Memset(_Val);
		}

		constexpr Array(const initializer<_Ty>& list)noexcept {
			_Siz = list.size();
			_AllocateExactly(_Siz);
			size_t _idx = 0;
			for (const auto& _Val : list) {
				_Arr[_idx] = _Val;
				++_idx;
			}
		}

		constexpr Array(const Array& _That)noexcept {
			_AllocateExactly(_That._Siz);
			_Copy(_That);
		}

		constexpr Array(Array&& _That)noexcept {
			_Arr = _That._Arr;
			_Siz = _That._Siz;
			_Cap = _That._Cap;
			_That._Arr = nullptr;
			_That._Siz = 0;
			_That._Cap = 0;
		}

		constexpr ~Array()noexcept {
			if (_Arr != nullptr)
				_Free();
		}

		constexpr Array& operator=(size_t _Size)noexcept = delete;

		constexpr Array& operator=(const Array& _That)noexcept {
			if (this != &_That) {
				if (_Cap < _That._Siz) {
					_ReallocateExactly(_That._Siz);
					_Siz = _That._Siz;
				} else {
					_Siz = _That._Siz;
					_Copy(_That);
				}
			}
			return *this;
		};

		constexpr Array& operator=(const initializer<_Ty>& list) = delete;

		constexpr Array& operator=(Array&& _Val)noexcept {
			if (this != &_Val) {
				if constexpr (!is_trivially_destructible_v<_Ty>)
					for (size_t _idx = 0; _idx < _Cap; ++_idx)
						_Arr[_idx].~_Ty();
				free(_Arr);

				_Arr = _Val._Arr;
				_Siz = _Val._Siz;
				_Cap = _Val._Cap;
				_Val._Arr = nullptr;
				_Val._Siz = 0;
				_Val._Cap = 0;
			}
			return *this;
		}

		constexpr const _Ty& operator[](const size_t _Idx)const {
			if constexpr (_debug) {
				if(_Idx >= _Siz) __debugbreak();
			}
			return _Arr[_Idx];
		}

		constexpr const _Ty& operator[](const size_t _Idx) {
			if constexpr (_debug) {
				if(_Idx >= _Siz) __debugbreak();
			}
			return _Arr[_Idx];
		}

		constexpr void push_back(const _Ty& _Arg)noexcept {
			if (_Siz >= _Cap)
				_Reallocate(_Siz);
			_Arr[_Siz] = _Arg;
			++_Siz;
		}

		constexpr void push_back(_Ty&& _Arg)noexcept {
			if (_Siz >= _Cap)
				_Reallocate(_Siz);
			_Arr[_Siz] = static_cast<remove_reference_t<_Ty>&&>(_Arg);
			++_Siz;
		}

		constexpr void pop_back()noexcept {
			if (_Siz > 0) {
				--_Siz;
				(_Arr + _Siz)->~_Ty();
			}
		}

		/*constexpr inline void reserve(const _SizeTy siz)
		{
			if (siz > _Cap) _Reallocate(siz);
		}*/

		//constexpr inline void shrink_to_fit()noexcept
		//{
		//	if (_Siz != _Cap)
		//	{
		//		_Reallocate(_Siz);
		//	}
		//}

		//constexpr auto swap(array& _Val)noexcept {
		//	if (this != &_Val) {
		//		_Ty* Tmp_ptr = _Arr;
		//		_SizeTy	  Tmp_siz = _Siz;
		//		_SizeTy	  Tmp_cap = _Cap;

		//		_Arr = _Val._Arr;
		//		_Siz = _Val._Siz;
		//		_Cap = _Val._Cap;

		//		_Val._Arr = Tmp_ptr;
		//		_Val._Siz = Tmp_siz;
		//		_Val._Cap = Tmp_cap;
		//	}
		//}

		//constexpr inline void clear()noexcept
		//{
		//	for (_SizeTy i = 0; i < _Siz; ++i)
		//	{
		//		(_Arr + i)->~arr_type();
		//	}

		//	_Siz = 0;
		//}

		//template<class... Args>
		//constexpr inline _Ty& emplace_back(Args&&... args)
		//{
		//	if (_Siz >= _Cap)
		//	{
		//		_Reallocate(static_cast<_SizeTy>(1.618f * _Cap));
		//	}

		//	new(_Arr + _Siz) _Ty(std::forward<Args>(args)...);

		//	return *(_Arr + _Siz++);
		//}

		//constexpr inline _Ty& operator[](const _SizeTy& _Val)
		//{
		//	return (_Val < _Siz) ? *(_Arr + _Val) : throw("Error");
		//}

		//constexpr inline _Ty& front()noexcept
		//{
		//	return *_Arr;
		//}

		//constexpr inline _Ty& back()noexcept
		//{
		//	return *(_Arr + _Siz - 1ll);
		//}



		//constexpr inline const _Ty& front()const noexcept
		//{
		//	return *_Arr;
		//}

		//constexpr inline const _Ty& back()const noexcept
		//{
		//	return *(_Arr + _Siz - 1);
		//}

		//constexpr auto is_sorted(const bool is_ascending = true)const noexcept {
		//	if (is_ascending) {
		//		for (_SizeTy i = 1; i < _Siz; ++i)
		//			if (*(_Arr + i - 1) < *(_Arr + i))
		//				return false;
		//		return true;
		//	}
		//	else {
		//		for (_SizeTy i = 1; i < _Siz; ++i)
		//			if (*(_Arr + i - 1) > *(_Arr + i))
		//				return false;
		//		return true;
		//	}
		//}

		//constexpr auto shuffle()noexcept {
		//	_SizeTy _Ridx;

		//	iq::srand(static_cast<unsigned int>(std::time(nullptr)));

		//	for (long long _Lidx = _Siz - 1; _Lidx > 0ll; --_Lidx) {
		//		_Ridx = iq::rand() % (_Lidx + 1);
		//		std::swap(_Arr[_Lidx], _Arr[_Ridx]);
		//	}
		//}

		///*constexpr inline void print_obj()const
		//{
		//	fputs("\n( ", stdout);

		//	for (int64 i = 0; i < arr_siz; ++i)
		//	{
		//		print(*(arr_ptr + i), stdout);
		//		putchar(' ');
		//	}

		//	fputs(")", stdout);
		//}*/

		//[[nodiscard]] constexpr inline _Ty* data()noexcept
		//{
		//	return _Arr;
		//}

		//[[nodiscard]] constexpr inline iterator begin()noexcept
		//{
		//	return iterator(_Arr);
		//}

		//[[nodiscard]] constexpr inline iterator end()noexcept
		//{
		//	return iterator(_Arr + _Siz);
		//}

		//[[nodiscard]] constexpr inline const_iterator begin()const noexcept
		//{
		//	return const_iterator(_Arr);
		//}

		//[[nodiscard]] constexpr inline const_iterator end()const noexcept
		//{
		//	return const_iterator(_Arr + _Siz);
		//}

		//[[nodiscard]] constexpr inline const _Ty* data()const noexcept
		//{
		//	return _Arr;
		//}

		//[[nodiscard]] constexpr inline bool operator == (const array& _Val)const noexcept
		//{
		//	if (_Arr == _Val._Arr)
		//	{
		//		return true;
		//	}

		//	if (_Siz == _Val._Siz)
		//	{
		//		for (_SizeTy i = 0; i < _Siz; ++i)
		//		{
		//			if (*(_Arr + i) != *(_Val._Arr + i))
		//			{
		//				return false;
		//			}
		//		}

		//		return true;
		//	}

		//	return false;
		//}

		//[[nodiscard]] inline constexpr bool operator != (const array& _Val)const noexcept
		//{
		//	if (_Arr == _Val._Arr)
		//	{
		//		return false;
		//	}

		//	if (_Siz == _Val._Siz)
		//	{
		//		for (_SizeTy i = 0; i < _Siz; ++i)
		//		{
		//			if (*(_Arr + i) != *(_Val._Arr + i))
		//			{
		//				return true;
		//			}
		//		}
		//		return false;
		//	}

		//	return true;
		//}

		//[[nodiscard]] constexpr inline const _SizeTy size()const
		//{
		//	return _Siz;	// Time Complexity O(1)
		//}

		//[[nodiscard]] constexpr inline const _SizeTy capacity()const
		//{
		//	return _Cap; // Time Complexity O(1)
		//}

		//[[nodiscard]] constexpr inline bool is_empty()const
		//{
		//	return _Siz == 0 ? true : false; // Time Complexity O(1)
		//}
	};


}








