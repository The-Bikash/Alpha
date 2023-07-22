module;
#include<new>
export module LinearContainer;

import core;
import initializer;
import typetraits;
import io;
import Memory;

typedef unsigned long long size_t;

export namespace alpha {
	template<class LinearContainer>
	class ConstLinearContainerIterator {
	public:
		using _Ty = LinearContainer::ArgType;
		using _Ref = const _Ty&;
	public:
		constexpr ConstLinearContainerIterator(_Ty* _Ptr)noexcept : _Ptr(_Ptr) {}
		[[nodiscard]] constexpr _Ref operator*()const noexcept {
			return *_Ptr;
		}
		[[nodiscard]] constexpr const _Ty* operator->()const noexcept {
			return _Ptr;
		}
		constexpr ConstLinearContainerIterator& operator++()noexcept {
			++_Ptr;
			return *this;
		}
		constexpr ConstLinearContainerIterator operator++(int) noexcept {
			ConstLinearContainerIterator iterator = *this;
			++(*this);
			return iterator;
		}
		constexpr ConstLinearContainerIterator& operator--() noexcept {
			--_Ptr;
			return *this;
		}
		constexpr ConstLinearContainerIterator operator--(int) noexcept {
			ConstLinearContainerIterator iterator = *this;
			--(*this);
			return iterator;
		}
		constexpr ConstLinearContainerIterator& operator+=(size_t _Off) noexcept {
			_Ptr += _Off;
			return *this;
		}
		[[nodiscard]] constexpr ConstLinearContainerIterator operator+(size_t _Off) noexcept {
			ConstLinearContainerIterator _Tmp = *this;
			_Tmp += _Off;
			return _Tmp;
		}
		constexpr ConstLinearContainerIterator& operator-=(size_t _Off) noexcept {
			_Ptr -= _Off;
			return *this;
		}
		[[nodiscard]] constexpr ConstLinearContainerIterator operator-(size_t _Off) noexcept {
			ConstLinearContainerIterator _Tmp = *this;
			_Tmp -= _Off;
			return _Tmp;
		}
		[[nodiscard]] constexpr size_t operator-(ConstLinearContainerIterator _That)noexcept {
			return _Ptr - _That._Ptr;
		}
		[[nodiscard]] constexpr _Ref operator[] (size_t index)const noexcept {
			return *(_Ptr + index);
		}
		[[nodiscard]] constexpr bool operator==(const ConstLinearContainerIterator& that)const {
			return _Ptr == that._Ptr;
		}
		[[nodiscard]] constexpr bool operator!=(const ConstLinearContainerIterator& that)const {
			return _Ptr != that._Ptr;
		}
		[[nodiscard]] constexpr const _Ty* _Unwrapped() const noexcept {
			return this->_Ptr;
		}
		_Ty* _Ptr;
	};

	template<class LinearContainer>
	class LinearContainerIterator : public ConstLinearContainerIterator<LinearContainer> {
	public:
		using _Mybase = ConstLinearContainerIterator<LinearContainer>;
		using _Ty = typename LinearContainer::ArgType;
		using reference = _Ty&;
		using pointer = _Ty*;
	public:
		[[nodiscard]] constexpr reference operator*() const noexcept {
			return const_cast<reference>(_Mybase::operator*());
		}

		[[nodiscard]] constexpr pointer operator->() const noexcept {
			return this->_Ptr;
		}

		constexpr LinearContainerIterator& operator++() noexcept {
			_Mybase::operator++();
			return *this;
		}

		constexpr LinearContainerIterator operator++(int) noexcept {
			LinearContainerIterator _Tmp = *this;
			_Mybase::operator++();
			return _Tmp;
		}

		constexpr LinearContainerIterator& operator--() noexcept {
			_Mybase::operator--();
			return *this;
		}

		constexpr LinearContainerIterator operator--(int) noexcept {
			LinearContainerIterator _Tmp = *this;
			_Mybase::operator--();
			return _Tmp;
		}

		constexpr LinearContainerIterator& operator+=(const size_t _Off) noexcept {
			_Mybase::operator+=(_Off);
			return *this;
		}

		[[nodiscard]] constexpr LinearContainerIterator operator+(const size_t _Off) const noexcept {
			LinearContainerIterator _Tmp = *this;
			_Tmp += _Off;
			return _Tmp;
		}

		constexpr LinearContainerIterator& operator-=(const size_t _Off) noexcept {
			_Mybase::operator-=(_Off);
			return *this;
		}

		using _Mybase::operator-;

		[[nodiscard]] constexpr LinearContainerIterator operator-(const size_t _Off) const noexcept {
			LinearContainerIterator _Tmp = *this;
			_Tmp -= _Off;
			return _Tmp;
		}

		[[nodiscard]] constexpr reference operator[](const size_t _Off) const noexcept {
			return const_cast<reference>(_Mybase::operator[](_Off));
		}


		[[nodiscard]] constexpr _Ty* _Unwrapped() const noexcept {
			return this->_Ptr;
		}
	};

	template<class _Ty, class Allocator = alpha::allocator<_Ty>>
	class LinearContainer {
	public:
		using ArgType = _Ty;
		using Iterator = LinearContainerIterator<LinearContainer<_Ty>>;
		using ConstIterator= ConstLinearContainerIterator<LinearContainer<_Ty>>;
		using Pointer = _Ty*;
		using Reference = _Ty&;
		using ConstPointer = const _Ty*;
		using ValueType = _Ty;
		using SizeType = size_t;

		explicit constexpr LinearContainer(const Allocator& allocator = Allocator())noexcept : _Siz(0), _Cap(0), _Ptr(nullptr), _Allocator(allocator) {}

		constexpr LinearContainer(const SizeType _Size, const _Ty& _Val, const Allocator& allocator = Allocator())noexcept : _Siz(_Size), _Allocator(allocator) {
			_Allocate(_Size);
			_Memset(_Ptr, _Ptr + _Siz, _Val);
		}

		explicit constexpr LinearContainer(const SizeType _Size, const Allocator& allocator = Allocator())noexcept : _Siz(0), _Allocator(allocator) {
			_Allocate(_Size);
		}

		constexpr LinearContainer(const initializer<_Ty>& list)noexcept : _Siz(list.size()) {
			_Allocate(_Siz);
			Pointer _pointer = _Ptr;
			for (const auto& _Val : list)
				new(_pointer++) _Ty(_Val);
		}

		constexpr LinearContainer(const LinearContainer& _That)noexcept : _Allocator(_That._Allocator) {
			_Allocate(_That._Siz);
			_ConstructCopy(_That);
		}

		constexpr LinearContainer(LinearContainer&& _That)noexcept {
			_Move(_That);
		}
		
		constexpr ~LinearContainer()noexcept {
			if (_Ptr != nullptr)
				_Free();
		}

		constexpr LinearContainer& operator=(const SizeType _Size)noexcept = delete;

		constexpr LinearContainer& operator=(const LinearContainer& _That)noexcept {
			if (this != &_That) {
				if (_Cap < _That._Siz)
					_Reallocate(_That._Siz);
				_Siz = _That._Siz;
				_Copy(_That);
			}
			return *this;
		};

		constexpr LinearContainer& operator=(const initializer<_Ty>& list) = delete;

		constexpr LinearContainer& operator=(LinearContainer&& _Val)noexcept {
			if (this != &_Val) {
				if constexpr (!is_trivially_destructible_v<_Ty>) {
					for (SizeType _idx = 0; _idx < _Cap; ++_idx)
						_Ptr[_idx].~_Ty();
				}
				_Allocator.deallocate(_Ptr, _Cap);
				_Move(_Val);
			}
			return *this;
		}

		constexpr bool operator==(const LinearContainer& _That)noexcept {
			if (_Siz != _That._Siz) return false;
			if constexpr (is_arithmetic_v<_Ty>) {
				return memcmp(_Ptr, _That._Ptr, _Siz * sizeof(_Ty)) == 0;
			} else {
				for (SizeType i = 0; i < _Siz; ++i) {
					if (_Ptr[i] != _That._Ptr[i]) return false;
				}
				return true;
			}
		}
		
		constexpr bool operator!=(const LinearContainer& _That)noexcept {
			return !(*this == _That);
		}

		constexpr const _Ty& operator[](const SizeType _Idx)const {
			if constexpr (_debug) {
				if(_Idx >= _Siz)
					__debugbreak();
			}
			return _Ptr[_Idx];
		}

		constexpr _Ty& operator[](const SizeType _Idx) {
			if constexpr (_debug) {
				if(_Idx >= _Siz)
					__debugbreak();
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
			_print("\n[");
			for (SizeType i = 0; i < _Siz; ++i) {
				_print(' ');
				_print(_Ptr[i]);
			}
			_print(" ]");
		}

		[[nodiscard]] constexpr SizeType size()const {
			return _Siz;
		}

		[[nodiscard]] constexpr _Ty* data() noexcept {
			return _Ptr;
		}

		[[nodiscard]] constexpr const _Ty* data() const noexcept {
			return _Ptr;
		}

		[[nodiscard]] constexpr SizeType capacity()const {
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

		constexpr void reserve(const SizeType _Siz) {
			if (_Siz > _Cap)
				_Reallocate(_Siz);
		}
		constexpr void resize(const SizeType _Size, const _Ty& _Val = _Ty()) {
			_Reallocate(_Size);
			if (_Size > _Siz)
				_Memset(_Ptr + _Siz, _Ptr + _Size, _Val);
			_Siz = _Size;
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

		constexpr void erase(const SizeType _Pos)noexcept {
			_LeftShift(_Pos, 1);
		}

		constexpr void erase(ConstIterator _It)noexcept {
			_LeftShift(_It - ConstIterator(_Ptr),1);
		}

	private:
		inline constexpr SizeType _RecomendCapacity(const SizeType _Size)noexcept {
			SizeType size = 8;
			while (size <= _Size) {
				size <<= 1;
			}
			return size;
		}
		inline constexpr auto _Allocate(const SizeType _Size)noexcept {
			_Cap = _RecomendCapacity(_Size);
			_Ptr = _Allocator.allocate(_Cap);
		}

		inline constexpr auto _Reallocate(SizeType _Size)noexcept {
			if (_Size < _Siz) {
				if constexpr (!is_trivially_destructible_v<_Ty>)
					_DestroyRange(_Ptr + _Size, _Ptr + _Siz);
				_Siz = _Size;
			}
				
			auto  _NewCap = _RecomendCapacity(_Size);
			auto* _NewPtr = _Allocator.allocate(_NewCap);
			memcpy(_NewPtr, _Ptr, _Siz * sizeof(_Ty));
			_Allocator.deallocate(_Ptr, _Cap);
			_Ptr = _NewPtr;
			_Cap = _NewCap;
		}
		inline constexpr auto _Free()noexcept {
			if constexpr (!is_trivially_destructible_v<_Ty>)
				_DestroyRange(_Ptr, _Ptr + _Siz);
			_Allocator.deallocate(_Ptr, _Cap);
			_Ptr = nullptr;
			_Siz = 0;
			_Cap = 0;
		}

		inline constexpr auto _Memset(Pointer _Start, Pointer _End, const _Ty& _Val)noexcept {
			if constexpr (is_fundamental_v<_Ty>) {
				if constexpr (is_same_v<_Ty, char>) {
					memset(_Start, _Val, _End - _Start);
				} else {
					if (_Val != 0) {
						while (_Start != _End)
							*(_Start++) = _Val;
					} else { memset(_Start, 0, (_End  - _Start) * sizeof(_Ty));  }
				}
			} else {
				while(_Start != _End)
					new(_Start++) _Ty(_Val);
			}
		}
		inline constexpr auto _ConstructCopy(const LinearContainer& _That)noexcept {
			_Siz = _That._Siz;
			if constexpr (is_fundamental_v<_Ty> || is_pointer_v<_Ty>) {
				memcpy(_Ptr, _That._Ptr, _That._Siz * sizeof(_Ty));
			} else {
				for (size_t _idx = 0; _idx < _Siz; ++_idx) {
					new(_Ptr + _idx) _Ty(_That._Ptr[_idx]);
				}
			}
		}
		inline constexpr auto _DestroyRange(Pointer _Start, Pointer _End)noexcept {
			while (_Start != _End) {
				_Start->~_Ty();
				++_Start;
			}
		}
		inline constexpr void _Move(LinearContainer& _That)noexcept {
			_Ptr = _That._Ptr;
			_Siz = _That._Siz;
			_Cap = _That._Cap;
			_Allocator = _That._Allocator;

			_That._Ptr = nullptr;
			_That._Siz = 0;
			_That._Cap = 0;
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

	protected:
		Pointer	 _Ptr;
		SizeType _Siz;
		SizeType _Cap;
		Allocator _Allocator;
	};
	
	template<class _Ty, class _Allocator>
	inline constexpr void _print(const LinearContainer<_Ty, _Allocator>& _Obj)noexcept {
		_Obj.print();
	}

	template<class _Ty, class _Allocator = alpha::allocator<_Ty>> using Array = LinearContainer<_Ty, _Allocator>;
	//template<class _Ty> using Array = std::vector<_Ty>;
}








