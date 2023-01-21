module;

export module LinearContainer;

import core;
import initializer;
import typetraits;
import io;

typedef unsigned long long size_t;

extern "C++" {
	inline void* __cdecl operator new(size_t _Size, void* _Where) noexcept {
		(void)_Size;
		return _Where;
	}

	inline void __cdecl operator delete(void*, void*) noexcept {
		return;
	}
}

export namespace alpha {
	template<class LinearContainer>
	class ConstLinearContainerIterator {
	public:
		using _Ty = LinearContainer::ArgType;
	public:
		constexpr ConstLinearContainerIterator(_Ty* _Ptr)noexcept : _Ptr(_Ptr) {}
		constexpr ConstLinearContainerIterator& operator++()noexcept {
			++_Ptr;
			return *this;
		}
		constexpr ConstLinearContainerIterator& operator--() noexcept {
			--_Ptr;
			return *this;
		}
		constexpr ConstLinearContainerIterator operator++(int) noexcept {
			ConstLinearContainerIterator iterator = *this;
			++(*this);
			return iterator;
		}
		constexpr ConstLinearContainerIterator operator--(int) noexcept {
			ConstLinearContainerIterator iterator = *this;
			--(*this);
			return iterator;
		}
		constexpr _Ty& operator[] (size_t index)const noexcept {
			return *(_Ptr + index);
		}
		constexpr _Ty* operator->()const noexcept {
			return _Ptr;
		}
		constexpr _Ty& operator*()const noexcept {
			return *_Ptr;
		}
		constexpr bool operator==(const ConstLinearContainerIterator& that)const {
			return this->_Ptr == that._Ptr;
		}
		constexpr bool operator!=(const ConstLinearContainerIterator& that)const {
			return this->_Ptr != that._Ptr;
		}
		inline constexpr size_t operator-(ConstLinearContainerIterator _That)noexcept {
			return _That._Ptr - _Ptr;
		}
	private:
		_Ty* _Ptr;
	};

	template<class LinearContainer>
	class LinearContainerIterator {
	public:
		using _Ty = typename LinearContainer::ArgType;
	public:
		inline constexpr LinearContainerIterator(_Ty* _Ptr) : _Ptr(_Ptr) {}
		inline constexpr operator ConstLinearContainerIterator<LinearContainer>() noexcept{
			return ConstLinearContainerIterator<LinearContainer>(_Ptr);
		}
		inline constexpr LinearContainerIterator& operator++() noexcept {
			++_Ptr;
			return *this;
		}
		inline constexpr LinearContainerIterator& operator--() noexcept {
			--_Ptr;
			return *this;
		}
		inline constexpr LinearContainerIterator operator++(int) noexcept {
			LinearContainerIterator iterator = *this;
			++(*this);
			return iterator;
		}
		inline constexpr LinearContainerIterator operator--(int) noexcept {
			LinearContainerIterator iterator = *this;
			--(*this);
			return iterator;
		}
		inline constexpr _Ty& operator[] (size_t index)noexcept {
			return *(_Ptr + index);
		}
		inline constexpr _Ty* operator->()noexcept {
			return _Ptr;
		}
		inline constexpr _Ty& operator*()noexcept {
			return *_Ptr;
		}
		inline constexpr bool operator == (const LinearContainerIterator& that)const {
			return this->_Ptr == that._Ptr;
		}
		inline constexpr bool operator != (const LinearContainerIterator& that)const {
			return this->_Ptr != that._Ptr;
		}
		inline constexpr LinearContainerIterator operator+(const size_t index)noexcept {
			return LinearContainerIterator(_Ptr + index);
		}
		inline constexpr LinearContainerIterator operator-(const size_t index)noexcept {
			return LinearContainerIterator(_Ptr - index);
		}
		inline constexpr size_t operator-(LinearContainerIterator _That)noexcept {
			return _That._Ptr - _Ptr;
		}
	private:
		_Ty* _Ptr;
	};

	template<class _Ty>
	class LinearContainer {
	public:
		using ArgType = _Ty;
		using Iterator = LinearContainerIterator<LinearContainer<_Ty>>;
		using ConstIterator= ConstLinearContainerIterator<LinearContainer<_Ty>>;

		constexpr LinearContainer()noexcept {
			_Siz = 0;
			_AllocateExactly(2);
		}

		explicit constexpr LinearContainer(const size_t _Size)noexcept {
			_AllocateExactly(_Size);
			_Siz = 0;
		}

		constexpr LinearContainer(const size_t _Size, const _Ty& _Val)noexcept {
			_AllocateExactly(_Size);
			_Siz = _Size;
			_Memset(_Val);
		}

		constexpr LinearContainer(const initializer<_Ty>& list)noexcept {
			_Siz = list.size();
			_AllocateExactly(_Siz);
			size_t _idx = 0;
			for (const auto& _Val : list) {
				_Ptr[_idx] = _Val;
				++_idx;
			}
		}

		constexpr LinearContainer(const LinearContainer& _That)noexcept {
			_AllocateExactly(_That._Siz);
			_Copy(_That);
		}

		constexpr LinearContainer(LinearContainer&& _That)noexcept {
			_Ptr = _That._Ptr;
			_Siz = _That._Siz;
			_Cap = _That._Cap;
			_That._Ptr = nullptr;
			_That._Siz = 0;
			_That._Cap = 0;
		}

		constexpr ~LinearContainer()noexcept {
			if (_Ptr != nullptr)
				_Free();
		}

		constexpr LinearContainer& operator=(size_t _Size)noexcept = delete;

		constexpr LinearContainer& operator=(const LinearContainer& _That)noexcept {
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

		constexpr LinearContainer& operator=(const initializer<_Ty>& list) = delete;

		constexpr LinearContainer& operator=(LinearContainer&& _Val)noexcept {
			if (this != &_Val) {
				if constexpr (!is_trivially_destructible_v<_Ty>)
					for (size_t _idx = 0; _idx < _Cap; ++_idx)
						_Ptr[_idx].~_Ty();
				free(_Ptr);

				_Ptr = _Val._Ptr;
				_Siz = _Val._Siz;
				_Cap = _Val._Cap;
				_Val._Ptr = nullptr;
				_Val._Siz = 0;
				_Val._Cap = 0;
			}
			return *this;
		}

		constexpr const _Ty& operator[](const size_t _Idx)const {
			if constexpr (_debug) {
				if(_Idx >= _Siz) __debugbreak();
			}
			return _Ptr[_Idx];
		}

		constexpr const _Ty& operator[](const size_t _Idx) {
			if constexpr (_debug) {
				if(_Idx >= _Siz) __debugbreak();
			}
			return _Ptr[_Idx];
		}

		constexpr void push_back(const _Ty& _Arg3)noexcept {
			if (_Siz >= _Cap)
				_Reallocate(_Siz);
			new(_Ptr + _Siz) _Ty(_Arg3);
			++_Siz;
		}

		constexpr void push_back(_Ty&& _Arg3)noexcept {
			if (_Siz >= _Cap)
				_Reallocate(_Siz);
			new(_Ptr + _Siz) _Ty(static_cast<remove_reference_t<_Ty>&&>(_Arg3));
			++_Siz;
		}

		template<class... _Args>
		constexpr void emplace_back(_Args&&... _Val) {
			if (_Siz >= _Cap)
				_Reallocate(_Siz);
			new(_Ptr + _Siz) _Ty(forward<_Args>(_Val)...);
			++_Siz;
		}

		template<class... _Args>
		constexpr void emplace(size_t _Pos, _Args&&... _Val) {
			if constexpr (_debug)
				if (_Pos > _Siz)
					__debugbreak();

			if (_Pos == _Siz) {
				this->emplace_back(forward<_Args>(_Val)...);
				return;
			}

			_RightShift(_Pos, 1);
			new(_Ptr + _Pos) _Ty(forward<_Args>(_Val)...);

		}

		constexpr void pop_back()noexcept {
			if (_Siz > 0) {
				--_Siz;
				if constexpr (!is_trivially_destructible_v<_Ty>)
					(_Ptr + _Siz)->~_Ty();
			}
		}

		constexpr void print()const noexcept {
			_print("\n(");
			for (size_t i = 0; i < _Siz; ++i) {
				_print(' ');
				_print(_Ptr[i]);
			}
			_print(" )");
		}

		[[nodiscard]] constexpr size_t size()const {
			return _Siz;
		}

		[[nodiscard]] constexpr size_t capacity()const {
			return _Cap;
		}

		[[nodiscard]] constexpr Iterator begin()noexcept {
			return Iterator(_Ptr);
		}

		[[nodiscard]] constexpr Iterator end()noexcept {
			return Iterator(_Ptr + _Siz);
		}

		[[nodiscard]] constexpr ConstIterator begin()const noexcept {
			return ConstIterator(_Ptr);
		}

		[[nodiscard]] constexpr ConstIterator end()const noexcept {
			return ConstIterator(_Ptr + _Siz);
		}

		constexpr void reserve(const size_t _Siz) {
			if (_Siz > _Cap)
				_ReallocateExactly(_Siz);
		}

		constexpr void shrink_to_fit()noexcept {
			if (_Siz != _Cap)
				_ReallocateExactly(_Siz);
		}

		constexpr void swap(LinearContainer& _Arg3)noexcept {
			if (this != &_Arg3) {
				_Ty*   Tmp_ptr = _Ptr;
				size_t Tmp_siz = _Siz;
				size_t Tmp_cap = _Cap;

				_Ptr = _Arg3._Ptr;
				_Siz = _Arg3._Siz;
				_Cap = _Arg3._Cap;

				_Arg3._Ptr = Tmp_ptr;
				_Arg3._Siz = Tmp_siz;
				_Arg3._Cap = Tmp_cap;
			}
		}

		constexpr void erase(const size_t _Pos)noexcept {
			_LeftShift(_Pos, 1);
		}

		constexpr void erase(ConstIterator _It)noexcept {
			_LeftShift(_It - ConstIterator(_Ptr),1);
		}

	private:
		inline constexpr size_t _RecommendCap(const size_t _Siz)const noexcept {
			size_t Tmp = 2;
			while (Tmp <= _Siz)
				Tmp <<= 1;
			return (size_t)Tmp;
		}

		inline constexpr auto _Reallocate(const size_t _Size)noexcept {
			if (_Size < _Siz)
				_Siz = _Size;
			_Cap = _RecommendCap(_Size);
			_Ptr = static_cast<_Ty*>(realloc(_Ptr, _Cap * sizeof(_Ty)));
			if constexpr (_debug)
				if (_Ptr == 0) __debugbreak();
		}

		inline constexpr auto _ReallocateExactly(const size_t _Size)noexcept {
			if (_Size < _Siz)
				_Siz = _Size;
			_Cap = _Size;
			_Ptr = static_cast<_Ty*>(realloc(_Ptr, _Size * sizeof(_Ty)));
			if constexpr (_debug)
				if (_Ptr == 0) __debugbreak();
		}

		inline constexpr auto _Allocate(size_t _Size)noexcept {
			_Cap = _RecommendCap(_Size);
			_Ptr = static_cast<_Ty*>(malloc(_Cap * sizeof(_Ty)));
			if constexpr (_debug)
				if (_Ptr == 0) __debugbreak();
		}

		inline constexpr auto _AllocateExactly(const size_t _Siz)noexcept {
			_Cap = _Siz;
			_Ptr = static_cast<_Ty*>(malloc(_Siz * sizeof(_Ty)));
			if constexpr (_debug)
				if (_Ptr == 0) __debugbreak();
		}

		inline constexpr auto _Free()noexcept {
			if constexpr (!is_trivially_destructible_v<_Ty>) {
				auto _Start = _Ptr;
				auto _End = _Ptr + _Siz;
				while (_Start != _End) {
					_Start->~_Ty();
					++_Start;
				}
			}
			free(_Ptr);
			_Ptr = nullptr;
			_Siz = 0;
			_Cap = 0;
		}

		inline constexpr auto _Memset(const _Ty& _Val)noexcept {
			if constexpr (is_fundamental_v<_Ty>) {
				if constexpr (is_same_v<_Ty, char>) {
					memset(_Ptr, _Val, _Siz);
				} else {
					if (_Val != 0) {
						for (size_t _idx = 0; _idx < _Siz; ++_idx) {
							_Ptr[_idx] = _Val;
						}
					} else { memset(_Ptr, 0, _Siz * sizeof(_Ty));  }
				}
			} else {
				for (size_t _idx = 0; _idx < _Siz; ++_idx) {
					new(_Ptr + _idx) _Ty(_Val);
				}
			}
		}

		inline constexpr auto _Copy(const LinearContainer& _That)noexcept {
			_Siz = _That._Siz;
			if constexpr (is_fundamental_v<_Ty> || is_pointer_v<_Ty>) {
				memcpy(_Ptr, _That._Ptr, _That._Siz * sizeof(_Ty));
			} else {
				for (size_t _idx = 0; _idx < _Siz; ++_idx) {
					_Ptr[_idx] = _That._Ptr[_idx];
				}
			}
		}

		inline constexpr auto _RightShift(const size_t _Pos, const size_t _Count)noexcept {
			size_t _NewSiz = _Siz + _Count;
			if (_NewSiz >= _Cap)
				_Reallocate(_NewSiz);
			size_t _Last = _Siz - _Count;
			for (long long i = _Siz - 1; i >= (long long)_Last; --i)
				new(_Ptr + i + _Count) _Ty(alpha::move(_Ptr[i]));

			for (long long i = _Last - 1; i >= (long long)_Pos; --i)
				// you can check here is movable or not
				_Ptr[i + _Count] = alpha::move(_Ptr[i]);

			if constexpr (!is_trivially_destructible_v<_Ty>) {
				size_t _EndPos = _Pos + _Count;
				for (size_t i = _Pos; i < _EndPos; ++i)
					_Ptr[i].~_Ty();
			}
			_Siz = _NewSiz;
		}

		inline constexpr auto _LeftShift(const size_t _Pos, const size_t _Count)noexcept {
			size_t _NewSiz = _Siz - _Count;
			for (size_t i = _Pos + 1; i < _Siz; ++i)
				// you can check here for template type is movable or not.
				_Ptr[i - _Count] = alpha::move(_Ptr[i]);
			if constexpr (!is_trivially_destructible_v<_Ty>) {
				for (size_t i = _NewSiz; i < _Siz; ++i)
					_Ptr[i].~_Ty();
			}
			_Siz = _NewSiz;
		}

	private:
		size_t  _Siz;
		size_t  _Cap;
		_Ty* _Ptr;
	};
	
	template<class _Ty>
	inline constexpr void _print(const LinearContainer<_Ty>& _Obj)noexcept {
		_Obj.print();
	}

	template<class _Ty> using Array = LinearContainer<_Ty>;
}








