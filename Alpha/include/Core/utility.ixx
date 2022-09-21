module;

#include <yvals_core.h>


export module utility;

import typetraits;

// utility standard header (core)

// Copyright (c) Microsoft Corporation.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception


export namespace alpha {
	template <class _Ty, class _Pr>
	[[nodiscard]] constexpr const _Ty& (max)(const _Ty& _Left, const _Ty& _Right, _Pr _Pred) noexcept(
		noexcept(_Pred(_Left, _Right))) /* strengthened */ {
		// return larger of _Left and _Right
		return _Pred(_Left, _Right) ? _Right : _Left;
	}


	template <class _Ty>
	[[nodiscard]] _Post_equal_to_(_Left < _Right ? _Right : _Left) constexpr const _Ty& //
		(max)(const _Ty& _Left, const _Ty& _Right) noexcept(noexcept(_Left < _Right)) /* strengthened */ {
		// return larger of _Left and _Right
		return _Left < _Right ? _Right : _Left;
	}

	template <class _FwdIt1, class _FwdIt2>
	constexpr void iter_swap(_FwdIt1 _Left, _FwdIt2 _Right) { // swap *_Left and *_Right
		swap(*_Left, *_Right);
	}

	template <class _Ty, size_t _Size, enable_if_t<_Is_swappable<_Ty>::value, int> _Enabled>
	constexpr void swap(_Ty(&_Left)[_Size], _Ty(&_Right)[_Size]) noexcept(_Is_nothrow_swappable<_Ty>::value) {
		if (&_Left != &_Right) {
			_Ty* _First1 = _Left;
			_Ty* _Last1 = _First1 + _Size;
			_Ty* _First2 = _Right;
			for (; _First1 != _Last1; ++_First1, ++_First2) {
				 iter_swap(_First1, _First2);
			}
		}
	}

#if _HAS_CXX17
	template <class _Ty, enable_if_t<is_move_constructible_v<_Ty>&& is_move_assignable_v<_Ty>, int> _Enabled>
#else // ^^^ _HAS_CXX17 / !_HAS_CXX17 vvv
	template <class _Ty, int _Enabled>
#endif // _HAS_CXX17
	constexpr void swap(_Ty& _Left, _Ty& _Right) noexcept(
		is_nothrow_move_constructible_v<_Ty>&& is_nothrow_move_assignable_v<_Ty>) {
		_Ty _Tmp =  move(_Left);
		_Left =  move(_Right);
		_Right =  move(_Tmp);
	}

	template <class _Ty>
	constexpr void _Swap_adl(_Ty& _Left, _Ty& _Right) noexcept(_Is_nothrow_swappable<_Ty>::value) {
		swap(_Left, _Right);
	}

	struct piecewise_construct_t { // tag type for pair tuple arguments
		explicit piecewise_construct_t() = default;
	};

	_INLINE_VAR constexpr piecewise_construct_t piecewise_construct{};

	template <class...>
	class tuple;

	template <size_t _Index, class... _Types>
	[[nodiscard]] constexpr auto&& _Tuple_get(tuple<_Types...>&& _Tuple) noexcept;

	template <class _Ty1, class _Ty2>
	struct pair { // store a pair of values
		using first_type = _Ty1;
		using second_type = _Ty2;

#if _HAS_CONDITIONAL_EXPLICIT
		template <class _Uty1 = _Ty1, class _Uty2 = _Ty2,
			enable_if_t<conjunction_v<is_default_constructible<_Uty1>, is_default_constructible<_Uty2>>, int> = 0>
		constexpr explicit(
			!conjunction_v<_Is_implicitly_default_constructible<_Uty1>, _Is_implicitly_default_constructible<_Uty2>>)
			pair() noexcept(
				is_nothrow_default_constructible_v<_Uty1>&& is_nothrow_default_constructible_v<_Uty2>) // strengthened
			: first(), second() {}
#else // ^^^ _HAS_CONDITIONAL_EXPLICIT ^^^ / vvv !_HAS_CONDITIONAL_EXPLICIT vvv
		template <class _Uty1 = _Ty1, class _Uty2 = _Ty2,
			enable_if_t<conjunction_v<is_default_constructible<_Uty1>, is_default_constructible<_Uty2>,
			_Is_implicitly_default_constructible<_Uty1>, _Is_implicitly_default_constructible<_Uty2>>,
			int> = 0>
			constexpr pair() noexcept(
				is_nothrow_default_constructible_v<_Uty1>&& is_nothrow_default_constructible_v<_Uty2>) // strengthened
			: first(), second() {}

		template <class _Uty1 = _Ty1, class _Uty2 = _Ty2,
			enable_if_t<conjunction_v<is_default_constructible<_Uty1>, is_default_constructible<_Uty2>,
			negation<conjunction<_Is_implicitly_default_constructible<_Uty1>,
			_Is_implicitly_default_constructible<_Uty2>>>>,
			int> = 0>
			constexpr explicit pair() noexcept(
				is_nothrow_default_constructible_v<_Uty1>&& is_nothrow_default_constructible_v<_Uty2>) // strengthened
			: first(), second() {}
#endif // ^^^ !_HAS_CONDITIONAL_EXPLICIT ^^^

#if _HAS_CONDITIONAL_EXPLICIT
		template <class _Uty1 = _Ty1, class _Uty2 = _Ty2,
			enable_if_t<conjunction_v<is_copy_constructible<_Uty1>, is_copy_constructible<_Uty2>>, int> = 0>
		constexpr explicit(!conjunction_v<is_convertible<const _Uty1&, _Uty1>, is_convertible<const _Uty2&, _Uty2>>)
			pair(const _Ty1& _Val1, const _Ty2& _Val2) noexcept(
				is_nothrow_copy_constructible_v<_Uty1>&& is_nothrow_copy_constructible_v<_Uty2>) // strengthened
			: first(_Val1), second(_Val2) {}
#else // ^^^ _HAS_CONDITIONAL_EXPLICIT ^^^ / vvv !_HAS_CONDITIONAL_EXPLICIT vvv
		template <class _Uty1 = _Ty1, class _Uty2 = _Ty2,
			enable_if_t<conjunction_v<is_copy_constructible<_Uty1>, is_copy_constructible<_Uty2>,
			is_convertible<const _Uty1&, _Uty1>, is_convertible<const _Uty2&, _Uty2>>,
			int> = 0>
			constexpr pair(const _Ty1& _Val1, const _Ty2& _Val2) noexcept(
				is_nothrow_copy_constructible_v<_Uty1>&& is_nothrow_copy_constructible_v<_Uty2>) // strengthened
			: first(_Val1), second(_Val2) {}

		template <class _Uty1 = _Ty1, class _Uty2 = _Ty2,
			enable_if_t<
			conjunction_v<is_copy_constructible<_Uty1>, is_copy_constructible<_Uty2>,
			negation<conjunction<is_convertible<const _Uty1&, _Uty1>, is_convertible<const _Uty2&, _Uty2>>>>,
			int> = 0>
			constexpr explicit pair(const _Ty1& _Val1, const _Ty2& _Val2) noexcept(
				is_nothrow_copy_constructible_v<_Uty1>&& is_nothrow_copy_constructible_v<_Uty2>) // strengthened
			: first(_Val1), second(_Val2) {}
#endif // ^^^ !_HAS_CONDITIONAL_EXPLICIT ^^^

#if _HAS_CONDITIONAL_EXPLICIT
#if _HAS_CXX23
		template <class _Other1 = _Ty1, class _Other2 = _Ty2,
#else // ^^^ _HAS_CXX23 / !_HAS_CXX23 vvv
		template <class _Other1, class _Other2,
#endif // ^^^ !_HAS_CXX23 ^^^
			enable_if_t<conjunction_v<is_constructible<_Ty1, _Other1>, is_constructible<_Ty2, _Other2>>, int> = 0>
		constexpr explicit(!conjunction_v<is_convertible<_Other1, _Ty1>, is_convertible<_Other2, _Ty2>>)
			pair(_Other1&& _Val1, _Other2&& _Val2) noexcept(
				is_nothrow_constructible_v<_Ty1, _Other1>&& is_nothrow_constructible_v<_Ty2, _Other2>) // strengthened
			: first( forward<_Other1>(_Val1)), second( forward<_Other2>(_Val2)) {
		}
#else // ^^^ _HAS_CONDITIONAL_EXPLICIT ^^^ / vvv !_HAS_CONDITIONAL_EXPLICIT vvv
		template <class _Other1, class _Other2,
			enable_if_t<conjunction_v<is_constructible<_Ty1, _Other1>, is_constructible<_Ty2, _Other2>,
			is_convertible<_Other1, _Ty1>, is_convertible<_Other2, _Ty2>>,
			int> = 0>
			constexpr pair(_Other1&& _Val1, _Other2&& _Val2) noexcept(
				is_nothrow_constructible_v<_Ty1, _Other1>&& is_nothrow_constructible_v<_Ty2, _Other2>) // strengthened
			: first( forward<_Other1>(_Val1)), second( forward<_Other2>(_Val2)) {}

		template <class _Other1, class _Other2,
			enable_if_t<conjunction_v<is_constructible<_Ty1, _Other1>, is_constructible<_Ty2, _Other2>,
			negation<conjunction<is_convertible<_Other1, _Ty1>, is_convertible<_Other2, _Ty2>>>>,
			int> = 0>
			constexpr explicit pair(_Other1&& _Val1, _Other2&& _Val2) noexcept(
				is_nothrow_constructible_v<_Ty1, _Other1>&& is_nothrow_constructible_v<_Ty2, _Other2>) // strengthened
			: first( forward<_Other1>(_Val1)), second( forward<_Other2>(_Val2)) {}
#endif // ^^^ !_HAS_CONDITIONAL_EXPLICIT ^^^

		pair(const pair&) = default;
		pair(pair&&) = default;

#if _HAS_CXX23
		template <class _Other1, class _Other2,
			enable_if_t<conjunction_v<is_constructible<_Ty1, _Other1&>, is_constructible<_Ty2, _Other2&>>, int> = 0>
		constexpr explicit(!conjunction_v<is_convertible<_Other1&, _Ty1>, is_convertible<_Other2&, _Ty2>>)
			pair(pair<_Other1, _Other2>& _Right) noexcept(
				is_nothrow_constructible_v<_Ty1, _Other1&>&& is_nothrow_constructible_v<_Ty2, _Other2&>) // strengthened
			: first(_Right.first), second(_Right.second) {}
#endif // _HAS_CXX23

#if _HAS_CONDITIONAL_EXPLICIT
		template <class _Other1, class _Other2,
			enable_if_t<conjunction_v<is_constructible<_Ty1, const _Other1&>, is_constructible<_Ty2, const _Other2&>>,
			int> = 0>
		constexpr explicit(!conjunction_v<is_convertible<const _Other1&, _Ty1>, is_convertible<const _Other2&, _Ty2>>)
			pair(const pair<_Other1, _Other2>& _Right) noexcept(is_nothrow_constructible_v<_Ty1, const _Other1&>&&
				is_nothrow_constructible_v<_Ty2, const _Other2&>) // strengthened
			: first(_Right.first), second(_Right.second) {}
#else // ^^^ _HAS_CONDITIONAL_EXPLICIT ^^^ / vvv !_HAS_CONDITIONAL_EXPLICIT vvv
		template <class _Other1, class _Other2,
			enable_if_t<conjunction_v<is_constructible<_Ty1, const _Other1&>, is_constructible<_Ty2, const _Other2&>,
			is_convertible<const _Other1&, _Ty1>, is_convertible<const _Other2&, _Ty2>>,
			int> = 0>
			constexpr pair(const pair<_Other1, _Other2>& _Right) noexcept(is_nothrow_constructible_v<_Ty1, const _Other1&>&&
				is_nothrow_constructible_v<_Ty2, const _Other2&>) // strengthened
			: first(_Right.first), second(_Right.second) {}

		template <class _Other1, class _Other2,
			enable_if_t<
			conjunction_v<is_constructible<_Ty1, const _Other1&>, is_constructible<_Ty2, const _Other2&>,
			negation<conjunction<is_convertible<const _Other1&, _Ty1>, is_convertible<const _Other2&, _Ty2>>>>,
			int> = 0>
			constexpr explicit pair(const pair<_Other1, _Other2>& _Right) noexcept(
				is_nothrow_constructible_v<_Ty1, const _Other1&>&&
				is_nothrow_constructible_v<_Ty2, const _Other2&>) // strengthened
			: first(_Right.first), second(_Right.second) {}
#endif // ^^^ !_HAS_CONDITIONAL_EXPLICIT ^^^

#if _HAS_CONDITIONAL_EXPLICIT
		template <class _Other1, class _Other2,
			enable_if_t<conjunction_v<is_constructible<_Ty1, _Other1>, is_constructible<_Ty2, _Other2>>, int> = 0>
		constexpr explicit(!conjunction_v<is_convertible<_Other1, _Ty1>, is_convertible<_Other2, _Ty2>>)
			pair(pair<_Other1, _Other2>&& _Right) noexcept(
				is_nothrow_constructible_v<_Ty1, _Other1>&& is_nothrow_constructible_v<_Ty2, _Other2>) // strengthened
			: first( forward<_Other1>(_Right.first)), second( forward<_Other2>(_Right.second)) {}
#else // ^^^ _HAS_CONDITIONAL_EXPLICIT ^^^ / vvv !_HAS_CONDITIONAL_EXPLICIT vvv
		template <class _Other1, class _Other2,
			enable_if_t<conjunction_v<is_constructible<_Ty1, _Other1>, is_constructible<_Ty2, _Other2>,
			is_convertible<_Other1, _Ty1>, is_convertible<_Other2, _Ty2>>,
			int> = 0>
			constexpr pair(pair<_Other1, _Other2>&& _Right) noexcept(
				is_nothrow_constructible_v<_Ty1, _Other1>&& is_nothrow_constructible_v<_Ty2, _Other2>) // strengthened
			: first( forward<_Other1>(_Right.first)), second( forward<_Other2>(_Right.second)) {}

		template <class _Other1, class _Other2,
			enable_if_t<conjunction_v<is_constructible<_Ty1, _Other1>, is_constructible<_Ty2, _Other2>,
			negation<conjunction<is_convertible<_Other1, _Ty1>, is_convertible<_Other2, _Ty2>>>>,
			int> = 0>
			constexpr explicit pair(pair<_Other1, _Other2>&& _Right) noexcept(
				is_nothrow_constructible_v<_Ty1, _Other1>&& is_nothrow_constructible_v<_Ty2, _Other2>) // strengthened
			: first( forward<_Other1>(_Right.first)), second( forward<_Other2>(_Right.second)) {}
#endif // ^^^ !_HAS_CONDITIONAL_EXPLICIT ^^^

#if _HAS_CXX23
		template <class _Other1, class _Other2,
			enable_if_t<conjunction_v<is_constructible<_Ty1, const _Other1>, is_constructible<_Ty2, const _Other2>>, int> =
			0>
		constexpr explicit(!conjunction_v<is_convertible<const _Other1, _Ty1>, is_convertible<const _Other2, _Ty2>>)
			pair(const pair<_Other1, _Other2>&& _Right) noexcept(is_nothrow_constructible_v<_Ty1, const _Other1>&&
				is_nothrow_constructible_v<_Ty2, const _Other2>) // strengthened
			: first( forward<const _Other1>(_Right.first)), second( forward<const _Other2>(_Right.second)) {}
#endif // _HAS_CXX23

		template <class _Tuple1, class _Tuple2, size_t... _Indexes1, size_t... _Indexes2>
		constexpr pair(_Tuple1& _Val1, _Tuple2& _Val2, index_sequence<_Indexes1...>, index_sequence<_Indexes2...>)
			: first(_Tuple_get<_Indexes1>( move(_Val1))...), second(_Tuple_get<_Indexes2>( move(_Val2))...) {}

		template <class... _Types1, class... _Types2>
		constexpr pair(piecewise_construct_t, tuple<_Types1...> _Val1, tuple<_Types2...> _Val2)
			: pair(_Val1, _Val2, index_sequence_for<_Types1...>{}, index_sequence_for<_Types2...>{}) {}

		pair& operator=(const volatile pair&) = delete;

		template <class _Myself = pair,
			enable_if_t<conjunction_v<_Is_copy_assignable_no_precondition_check<typename _Myself::first_type>,
			_Is_copy_assignable_no_precondition_check<typename _Myself::second_type>>,
			int> = 0>
			constexpr pair& operator=(_Identity_t<const _Myself&> _Right) noexcept(
				conjunction_v<is_nothrow_copy_assignable<_Ty1>, is_nothrow_copy_assignable<_Ty2>>) /* strengthened */ {
			first = _Right.first;
			second = _Right.second;
			return *this;
		}

#if _HAS_CXX23
		template <class _Myself = pair,
			enable_if_t<conjunction_v<_Is_copy_assignable_no_precondition_check<const typename _Myself::first_type>,
			_Is_copy_assignable_no_precondition_check<const typename _Myself::second_type>>,
			int> = 0>
			constexpr const pair& operator=(_Identity_t<const _Myself&> _Right) const
			noexcept(conjunction_v<is_nothrow_copy_assignable<const _Ty1>,
				is_nothrow_copy_assignable<const _Ty2>>) /* strengthened */ {
			first = _Right.first;
			second = _Right.second;
			return *this;
		}
#endif // _HAS_CXX23

		template <class _Myself = pair,
			enable_if_t<conjunction_v<_Is_move_assignable_no_precondition_check<typename _Myself::first_type>,
			_Is_move_assignable_no_precondition_check<typename _Myself::second_type>>,
			int> = 0>
			constexpr pair& operator=(_Identity_t<_Myself&&> _Right) noexcept(
				conjunction_v<is_nothrow_move_assignable<_Ty1>, is_nothrow_move_assignable<_Ty2>>) /* strengthened */ {
			first =  forward<_Ty1>(_Right.first);
			second =  forward<_Ty2>(_Right.second);
			return *this;
		}

#if _HAS_CXX23
		template <class _Myself = pair,
			enable_if_t<conjunction_v<_Is_assignable_no_precondition_check<const typename _Myself::first_type&, _Ty1>,
			_Is_assignable_no_precondition_check<const typename _Myself::second_type&, _Ty2>>,
			int> = 0>
			constexpr const pair& operator=(_Identity_t<_Myself&&> _Right) const
			noexcept(conjunction_v<is_nothrow_assignable<const _Ty1&, _Ty1>,
				is_nothrow_assignable<const _Ty2&, _Ty2>>) /* strengthened */ {
			first =  forward<_Ty1>(_Right.first);
			second =  forward<_Ty2>(_Right.second);
			return *this;
		}
#endif // _HAS_CXX23

		template <class _Other1, class _Other2,
			enable_if_t<conjunction_v<negation<is_same<pair, pair<_Other1, _Other2>>>, is_assignable<_Ty1&, const _Other1&>,
			is_assignable<_Ty2&, const _Other2&>>,
			int> = 0>
			constexpr pair& operator=(const pair<_Other1, _Other2>& _Right) noexcept(
				is_nothrow_assignable_v<_Ty1&, const _Other1&>&&
				is_nothrow_assignable_v<_Ty2&, const _Other2&>) /* strengthened */ {
			first = _Right.first;
			second = _Right.second;
			return *this;
		}

#if _HAS_CXX23
		template <class _Other1, class _Other2,
			enable_if_t<conjunction_v<negation<is_same<pair, pair<_Other1, _Other2>>>,
			is_assignable<const _Ty1&, const _Other1&>, is_assignable<const _Ty2&, const _Other2&>>,
			int> = 0>
			constexpr const pair& operator=(const pair<_Other1, _Other2>& _Right) const
			noexcept(is_nothrow_assignable_v<const _Ty1&, const _Other1&>&&
				is_nothrow_assignable_v<const _Ty2&, const _Other2&>) /* strengthened */ {
			first = _Right.first;
			second = _Right.second;
			return *this;
		}
#endif // _HAS_CXX23

		template <class _Other1, class _Other2,
			enable_if_t<conjunction_v<negation<is_same<pair, pair<_Other1, _Other2>>>, is_assignable<_Ty1&, _Other1>,
			is_assignable<_Ty2&, _Other2>>,
			int> = 0>
			constexpr pair& operator=(pair<_Other1, _Other2>&& _Right) noexcept(
				is_nothrow_assignable_v<_Ty1&, _Other1>&& is_nothrow_assignable_v<_Ty2&, _Other2>) /* strengthened */ {
			first =  forward<_Other1>(_Right.first);
			second =  forward<_Other2>(_Right.second);
			return *this;
		}

#if _HAS_CXX23
		template <class _Other1, class _Other2,
			enable_if_t<conjunction_v<negation<is_same<pair, pair<_Other1, _Other2>>>, is_assignable<const _Ty1&, _Other1>,
			is_assignable<const _Ty2&, _Other2>>,
			int> = 0>
			constexpr const pair& operator=(pair<_Other1, _Other2>&& _Right) const
			noexcept(is_nothrow_assignable_v<const _Ty1&, _Other1>&&
				is_nothrow_assignable_v<const _Ty2&, _Other2>) /* strengthened */ {
			first =  forward<_Other1>(_Right.first);
			second =  forward<_Other2>(_Right.second);
			return *this;
		}
#endif // _HAS_CXX23

		constexpr void swap(pair& _Right) noexcept(
			_Is_nothrow_swappable<_Ty1>::value&& _Is_nothrow_swappable<_Ty2>::value) {
			if (this !=  addressof(_Right)) {
				_Swap_adl(first, _Right.first);
				_Swap_adl(second, _Right.second);
			}
		}

#if _HAS_CXX23
		constexpr void swap(const pair& _Right) const
			noexcept(is_nothrow_swappable_v<const _Ty1>&& is_nothrow_swappable_v<const _Ty2>) {
			if (this !=  addressof(_Right)) {
				_Swap_adl(first, _Right.first);
				_Swap_adl(second, _Right.second);
			}
		}
#endif // _HAS_CXX23

		_Ty1 first; // the first stored value
		_Ty2 second; // the second stored value
	};

#if _HAS_CXX17
	template <class _Ty1, class _Ty2>
	pair(_Ty1, _Ty2)->pair<_Ty1, _Ty2>;
#endif // _HAS_CXX17

	template <class _Ty1, class _Ty2, enable_if_t<_Is_swappable<_Ty1>::value&& _Is_swappable<_Ty2>::value, int> = 0>
	constexpr void swap(pair<_Ty1, _Ty2>& _Left, pair<_Ty1, _Ty2>& _Right) noexcept(noexcept(_Left.swap(_Right))) {
		_Left.swap(_Right);
	}

#if _HAS_CXX23
	template <class _Ty1, class _Ty2, enable_if_t<is_swappable_v<const _Ty1>&& is_swappable_v<const _Ty2>, int> = 0>
	constexpr void swap(const pair<_Ty1, _Ty2>& _Left, const pair<_Ty1, _Ty2>& _Right) noexcept(
		noexcept(_Left.swap(_Right))) {
		_Left.swap(_Right);
	}
#endif // _HAS_CXX23

	template <class _Ty1, class _Ty2>
	[[nodiscard]] constexpr bool operator==(const pair<_Ty1, _Ty2>& _Left, const pair<_Ty1, _Ty2>& _Right) {
		return _Left.first == _Right.first && _Left.second == _Right.second;
	}

	template <class _Ty1, class _Ty2>
	[[nodiscard]] constexpr bool operator<(const pair<_Ty1, _Ty2>& _Left, const pair<_Ty1, _Ty2>& _Right) {
		return _Left.first < _Right.first || (!(_Right.first < _Left.first) && _Left.second < _Right.second);
	}

	template <class _Ty1, class _Ty2>
	[[nodiscard]] constexpr bool operator>(const pair<_Ty1, _Ty2>& _Left, const pair<_Ty1, _Ty2>& _Right) {
		return _Right < _Left;
	}

	template <class _Ty1, class _Ty2>
	[[nodiscard]] constexpr bool operator<=(const pair<_Ty1, _Ty2>& _Left, const pair<_Ty1, _Ty2>& _Right) {
		return !(_Right < _Left);
	}

	template <class _Ty1, class _Ty2>
	[[nodiscard]] constexpr bool operator>=(const pair<_Ty1, _Ty2>& _Left, const pair<_Ty1, _Ty2>& _Right) {
		return !(_Left < _Right);
	}

#ifdef __cpp_lib_concepts
	template <class _Ty1, class _Ty2, class _Uty1, class _Uty2, template <class> class _TQual,
		template <class> class _UQual>
		requires requires {
		typename pair<common_reference_t<_TQual<_Ty1>, _UQual<_Uty1>>, common_reference_t<_TQual<_Ty2>, _UQual<_Uty2>>>;
	}
	struct basic_common_reference<pair<_Ty1, _Ty2>, pair<_Uty1, _Uty2>, _TQual, _UQual> {
		using type = pair<common_reference_t<_TQual<_Ty1>, _UQual<_Uty1>>, common_reference_t<_TQual<_Ty2>, _UQual<_Uty2>>>;
	};

	template <class _Ty1, class _Ty2, class _Uty1, class _Uty2>
		requires requires {
		typename pair<common_type_t<_Ty1, _Uty1>, common_type_t<_Ty2, _Uty2>>;
	}
	struct common_type<pair<_Ty1, _Ty2>, pair<_Uty1, _Uty2>> {
		using type = pair<common_type_t<_Ty1, _Uty1>, common_type_t<_Ty2, _Uty2>>;
	};
#endif // __cpp_lib_concepts

	template <class _Ty>
	struct _Unrefwrap_helper { // leave unchanged if not a reference_wrapper
		using type = _Ty;
	};

	template <class _Ty>
	struct _Unrefwrap_helper<reference_wrapper<_Ty>> { // make a reference from a reference_wrapper
		using type = _Ty&;
	};

	// decay, then unwrap a reference_wrapper
	template <class _Ty>
	using _Unrefwrap_t = typename _Unrefwrap_helper<decay_t<_Ty>>::type;

	template <class _Ty1, class _Ty2>
	[[nodiscard]] constexpr pair<_Unrefwrap_t<_Ty1>, _Unrefwrap_t<_Ty2>> make_pair(_Ty1&& _Val1, _Ty2&& _Val2) noexcept(
		is_nothrow_constructible_v<_Unrefwrap_t<_Ty1>, _Ty1>&&
		is_nothrow_constructible_v<_Unrefwrap_t<_Ty2>, _Ty2>) /* strengthened */ {
		// return pair composed from arguments
		using _Mypair = pair<_Unrefwrap_t<_Ty1>, _Unrefwrap_t<_Ty2>>;
		return _Mypair( forward<_Ty1>(_Val1),  forward<_Ty2>(_Val2));
	}

	namespace _CXX20_DEPRECATE_REL_OPS rel_ops {
		template <class _Ty>
		_CXX20_DEPRECATE_REL_OPS [[nodiscard]] bool operator!=(const _Ty& _Left, const _Ty& _Right) {
			return !(_Left == _Right);
		}

		template <class _Ty>
		_CXX20_DEPRECATE_REL_OPS [[nodiscard]] bool operator>(const _Ty& _Left, const _Ty& _Right) {
			return _Right < _Left;
		}

		template <class _Ty>
		_CXX20_DEPRECATE_REL_OPS [[nodiscard]] bool operator<=(const _Ty& _Left, const _Ty& _Right) {
			return !(_Right < _Left);
		}

		template <class _Ty>
		_CXX20_DEPRECATE_REL_OPS [[nodiscard]] bool operator>=(const _Ty& _Left, const _Ty& _Right) {
			return !(_Left < _Right);
		}
	} // namespace rel_ops

	template <class _Tuple>
	struct tuple_size;

	template <class _Tuple, class = void>
	struct _Tuple_size_sfinae {}; // selected when tuple_size<_Tuple>::value isn't well-formed

	template <class _Tuple>
	struct _Tuple_size_sfinae<_Tuple, void_t<decltype(tuple_size<_Tuple>::value)>>
		: integral_constant<size_t, tuple_size<_Tuple>::value> {}; // selected when tuple_size<_Tuple>::value is well-formed

	template <class _Tuple>
	struct tuple_size<const _Tuple> : _Tuple_size_sfinae<_Tuple> {}; // ignore cv

	template <class _Tuple>
	struct _CXX20_DEPRECATE_VOLATILE tuple_size<volatile _Tuple> : _Tuple_size_sfinae<_Tuple> {}; // ignore cv

	template <class _Tuple>
	struct _CXX20_DEPRECATE_VOLATILE tuple_size<const volatile _Tuple> : _Tuple_size_sfinae<_Tuple> {}; // ignore cv

	template <class _Ty>
	_INLINE_VAR constexpr size_t tuple_size_v = tuple_size<_Ty>::value;

	template <size_t _Index, class _Tuple>
	struct tuple_element;

	template <size_t _Index, class _Tuple>
	struct _MSVC_KNOWN_SEMANTICS tuple_element<_Index, const _Tuple> : tuple_element<_Index, _Tuple> {
		using _Mybase = tuple_element<_Index, _Tuple>;
		using type = add_const_t<typename _Mybase::type>;
	};

	template <size_t _Index, class _Tuple>
	struct _CXX20_DEPRECATE_VOLATILE _MSVC_KNOWN_SEMANTICS tuple_element<_Index, volatile _Tuple>
		: tuple_element<_Index, _Tuple>{
		using _Mybase = tuple_element<_Index, _Tuple>;
		using type = add_volatile_t<typename _Mybase::type>;
	};

	template <size_t _Index, class _Tuple>
	struct _CXX20_DEPRECATE_VOLATILE _MSVC_KNOWN_SEMANTICS tuple_element<_Index, const volatile _Tuple>
		: tuple_element<_Index, _Tuple>{
		using _Mybase = tuple_element<_Index, _Tuple>;
		using type = add_cv_t<typename _Mybase::type>;
	};

	template <size_t _Index, class _Tuple>
	using tuple_element_t = typename tuple_element<_Index, _Tuple>::type;

	template <class _Ty, size_t _Size>
	class array;

	template <class _Ty, size_t _Size>
	struct tuple_size<array<_Ty, _Size>> : integral_constant<size_t, _Size> {}; // size of array

	template <size_t _Idx, class _Ty, size_t _Size>
	struct _MSVC_KNOWN_SEMANTICS tuple_element<_Idx, array<_Ty, _Size>> {
		static_assert(_Idx < _Size, "array index out of bounds");

		using type = _Ty;
	};

	template <class... _Types>
	struct tuple_size<tuple<_Types...>> : integral_constant<size_t, sizeof...(_Types)> {}; // size of tuple

	template <size_t _Index>
	struct _MSVC_KNOWN_SEMANTICS tuple_element<_Index, tuple<>> { // enforce bounds checking
		static_assert(_Always_false<integral_constant<size_t, _Index>>, "tuple index out of bounds");
	};

	template <class _This, class... _Rest>
	struct _MSVC_KNOWN_SEMANTICS tuple_element<0, tuple<_This, _Rest...>> { // select first element
		using type = _This;
		// MSVC assumes the meaning of _Ttype; remove or rename, but do not change semantics
		using _Ttype = tuple<_This, _Rest...>;
	};

	template <size_t _Index, class _This, class... _Rest>
	struct _MSVC_KNOWN_SEMANTICS tuple_element<_Index, tuple<_This, _Rest...>>
		: tuple_element<_Index - 1, tuple<_Rest...>> {}; // recursive tuple_element definition

	template <class _Ty1, class _Ty2>
	struct tuple_size<pair<_Ty1, _Ty2>> : integral_constant<size_t, 2> {}; // size of pair

	template <size_t _Idx, class _Ty1, class _Ty2>
	struct _MSVC_KNOWN_SEMANTICS tuple_element<_Idx, pair<_Ty1, _Ty2>> {
		static_assert(_Idx < 2, "pair index out of bounds");

		using type = conditional_t<_Idx == 0, _Ty1, _Ty2>;
	};

	template <class _Ret, class _Pair>
	constexpr _Ret _Pair_get(_Pair& _Pr, integral_constant<size_t, 0>) noexcept {
		// get reference to element 0 in pair _Pr
		return _Pr.first;
	}

	template <class _Ret, class _Pair>
	constexpr _Ret _Pair_get(_Pair& _Pr, integral_constant<size_t, 1>) noexcept {
		// get reference to element 1 in pair _Pr
		return _Pr.second;
	}

	template <size_t _Idx, class _Ty1, class _Ty2>
	[[nodiscard]] constexpr tuple_element_t<_Idx, pair<_Ty1, _Ty2>>& get(pair<_Ty1, _Ty2>& _Pr) noexcept {
		// get reference to element at _Idx in pair _Pr
		using _Rtype = tuple_element_t<_Idx, pair<_Ty1, _Ty2>>&;
		return _Pair_get<_Rtype>(_Pr, integral_constant<size_t, _Idx>{});
	}

	template <class _Ty1, class _Ty2>
	[[nodiscard]] constexpr _Ty1& get(pair<_Ty1, _Ty2>& _Pr) noexcept {
		// get reference to element _Ty1 in pair _Pr
		return  get<0>(_Pr);
	}

	template <class _Ty2, class _Ty1>
	[[nodiscard]] constexpr _Ty2& get(pair<_Ty1, _Ty2>& _Pr) noexcept {
		// get reference to element _Ty2 in pair _Pr
		return  get<1>(_Pr);
	}

	template <size_t _Idx, class _Ty1, class _Ty2>
	[[nodiscard]] constexpr const tuple_element_t<_Idx, pair<_Ty1, _Ty2>>& get(const pair<_Ty1, _Ty2>& _Pr) noexcept {
		// get const reference to element at _Idx in pair _Pr
		using _Ctype = const tuple_element_t<_Idx, pair<_Ty1, _Ty2>>&;
		return _Pair_get<_Ctype>(_Pr, integral_constant<size_t, _Idx>{});
	}

	template <class _Ty1, class _Ty2>
	[[nodiscard]] constexpr const _Ty1& get(const pair<_Ty1, _Ty2>& _Pr) noexcept {
		// get const reference to element _Ty1 in pair _Pr
		return  get<0>(_Pr);
	}

	template <class _Ty2, class _Ty1>
	[[nodiscard]] constexpr const _Ty2& get(const pair<_Ty1, _Ty2>& _Pr) noexcept {
		// get const reference to element _Ty2 in pair _Pr
		return  get<1>(_Pr);
	}

	template <size_t _Idx, class _Ty1, class _Ty2>
	[[nodiscard]] constexpr tuple_element_t<_Idx, pair<_Ty1, _Ty2>>&& get(pair<_Ty1, _Ty2>&& _Pr) noexcept {
		// get rvalue reference to element at _Idx in pair _Pr
		using _RRtype = tuple_element_t<_Idx, pair<_Ty1, _Ty2>>&&;
		return  forward<_RRtype>( get<_Idx>(_Pr));
	}

	template <class _Ty1, class _Ty2>
	[[nodiscard]] constexpr _Ty1&& get(pair<_Ty1, _Ty2>&& _Pr) noexcept {
		// get rvalue reference to element _Ty1 in pair _Pr
		return  get<0>( move(_Pr));
	}

	template <class _Ty2, class _Ty1>
	[[nodiscard]] constexpr _Ty2&& get(pair<_Ty1, _Ty2>&& _Pr) noexcept {
		// get rvalue reference to element _Ty2 in pair _Pr
		return  get<1>( move(_Pr));
	}

	template <size_t _Idx, class _Ty1, class _Ty2>
	[[nodiscard]] constexpr const tuple_element_t<_Idx, pair<_Ty1, _Ty2>>&& get(const pair<_Ty1, _Ty2>&& _Pr) noexcept {
		// get const rvalue reference to element at _Idx in pair _Pr
		using _RRtype = const tuple_element_t<_Idx, pair<_Ty1, _Ty2>>&&;
		return  forward<_RRtype>( get<_Idx>(_Pr));
	}

	template <class _Ty1, class _Ty2>
	[[nodiscard]] constexpr const _Ty1&& get(const pair<_Ty1, _Ty2>&& _Pr) noexcept {
		// get const rvalue reference to element _Ty1 in pair _Pr
		return  get<0>( move(_Pr));
	}

	template <class _Ty2, class _Ty1>
	[[nodiscard]] constexpr const _Ty2&& get(const pair<_Ty1, _Ty2>&& _Pr) noexcept {
		// get const rvalue reference to element _Ty2 in pair _Pr
		return  get<1>( move(_Pr));
	}

	template <class _Ty, class _Other = _Ty>
	constexpr _Ty exchange(_Ty& _Val, _Other&& _New_val) noexcept(
		conjunction_v<is_nothrow_move_constructible<_Ty>, is_nothrow_assignable<_Ty&, _Other>>) {
		// assign _New_val to _Val, return previous _Val
		_Ty _Old_val = static_cast<_Ty&&>(_Val);
		_Val = static_cast<_Other&&>(_New_val);
		return _Old_val;
	}

	template <class _Ty>
	[[nodiscard]] constexpr add_const_t<_Ty>& as_const(_Ty& _Val) noexcept { // view _Val through const lenses
		return _Val;
	}

	template <class _Ty>
	void as_const(const _Ty&&) = delete;

#if _HAS_CXX17
	struct in_place_t { // tag used to select a constructor which initializes a contained object in place
		explicit in_place_t() = default;
	};
	inline constexpr in_place_t in_place{};

	template <class>
	struct in_place_type_t { // tag that selects a type to construct in place
		explicit in_place_type_t() = default;
	};
	template <class _Ty>
	inline constexpr in_place_type_t<_Ty> in_place_type{};

	template <size_t>
	struct in_place_index_t { // tag that selects the index of a type to construct in place
		explicit in_place_index_t() = default;
	};
	template <size_t _Idx>
	inline constexpr in_place_index_t<_Idx> in_place_index{};
#endif // _HAS_CXX17

#if _HAS_CXX20
	template <class _Ty>
	inline constexpr bool _Is_standard_integer = is_integral_v<_Ty>
		&& !_Is_any_of_v<remove_cv_t<_Ty>, bool, char,
#ifdef _NATIVE_WCHAR_T_DEFINED
		wchar_t,
#endif // _NATIVE_WCHAR_T_DEFINED
#ifdef __cpp_char8_t
		char8_t,
#endif // __cpp_char8_t
		char16_t, char32_t>;

	template <class _Ty1, class _Ty2>
	[[nodiscard]] constexpr bool cmp_equal(const _Ty1 _Left, const _Ty2 _Right) noexcept {
		static_assert(_Is_standard_integer<_Ty1> && _Is_standard_integer<_Ty2>,
			"The integer comparison functions only accept standard and extended integer types.");
		if constexpr (is_signed_v<_Ty1> == is_signed_v<_Ty2>) {
			return _Left == _Right;
		}
		else if constexpr (is_signed_v<_Ty2>) {
			return _Left == static_cast<make_unsigned_t<_Ty2>>(_Right) && _Right >= 0;
		}
		else {
			return static_cast<make_unsigned_t<_Ty1>>(_Left) == _Right && _Left >= 0;
		}
	}

	template <class _Ty1, class _Ty2>
	[[nodiscard]] constexpr bool cmp_not_equal(const _Ty1 _Left, const _Ty2 _Right) noexcept {
		return ! cmp_equal(_Left, _Right);
	}

	template <class _Ty1, class _Ty2>
	[[nodiscard]] constexpr bool cmp_less(const _Ty1 _Left, const _Ty2 _Right) noexcept {
		static_assert(_Is_standard_integer<_Ty1> && _Is_standard_integer<_Ty2>,
			"The integer comparison functions only accept standard and extended integer types.");
		if constexpr (is_signed_v<_Ty1> == is_signed_v<_Ty2>) {
			return _Left < _Right;
		}
		else if constexpr (is_signed_v<_Ty2>) {
			return _Right > 0 && _Left < static_cast<make_unsigned_t<_Ty2>>(_Right);
		}
		else {
			return _Left < 0 || static_cast<make_unsigned_t<_Ty1>>(_Left) < _Right;
		}
	}

	template <class _Ty1, class _Ty2>
	[[nodiscard]] constexpr bool cmp_greater(const _Ty1 _Left, const _Ty2 _Right) noexcept {
		return  cmp_less(_Right, _Left);
	}

	template <class _Ty1, class _Ty2>
	[[nodiscard]] constexpr bool cmp_less_equal(const _Ty1 _Left, const _Ty2 _Right) noexcept {
		return ! cmp_less(_Right, _Left);
	}

	template <class _Ty1, class _Ty2>
	[[nodiscard]] constexpr bool cmp_greater_equal(const _Ty1 _Left, const _Ty2 _Right) noexcept {
		return ! cmp_less(_Left, _Right);
	}

	template <class _Ty>
	[[nodiscard]] _CONSTEVAL _Ty _Min_limit() noexcept { // same as (numeric_limits<_Ty>::min)(), less throughput cost
		static_assert(_Is_standard_integer<_Ty>); // doesn't attempt to handle all types
		if constexpr (is_signed_v<_Ty>) {
			constexpr auto _Unsigned_max = static_cast<make_unsigned_t<_Ty>>(-1);
			return static_cast<_Ty>((_Unsigned_max >> 1) + 1); // well-defined, N4861 [conv.integral]/3
		}
		else {
			return 0;
		}
	}

	template <class _Ty>
	[[nodiscard]] _CONSTEVAL _Ty _Max_limit() noexcept { // same as (numeric_limits<_Ty>::max)(), less throughput cost
		static_assert(_Is_standard_integer<_Ty>); // doesn't attempt to handle all types
		if constexpr (is_signed_v<_Ty>) {
			constexpr auto _Unsigned_max = static_cast<make_unsigned_t<_Ty>>(-1);
			return static_cast<_Ty>(_Unsigned_max >> 1);
		}
		else {
			return static_cast<_Ty>(-1);
		}
	}

	template <class _Rx, class _Ty>
	[[nodiscard]] constexpr bool in_range(const _Ty _Value) noexcept {
		static_assert(_Is_standard_integer<_Rx> && _Is_standard_integer<_Ty>,
			"The integer comparison functions only accept standard and extended integer types.");

		constexpr auto _Ty_min = _Min_limit<_Ty>();
		constexpr auto _Rx_min = _Min_limit<_Rx>();

		if constexpr ( cmp_less(_Ty_min, _Rx_min)) {
			if (_Value < _Ty{ _Rx_min }) {
				return false;
			}
		}

		constexpr auto _Ty_max = _Max_limit<_Ty>();
		constexpr auto _Rx_max = _Max_limit<_Rx>();

		if constexpr ( cmp_greater(_Ty_max, _Rx_max)) {
			if (_Value > _Ty{ _Rx_max }) {
				return false;
			}
		}

		return true;
	}
#endif // _HAS_CXX20
	__declspec(noreturn) void __cdecl abort(void);
#if _HAS_CXX23
	template <class _Ty>
	[[nodiscard]] constexpr underlying_type_t<_Ty> to_underlying(_Ty _Value) noexcept {
		return static_cast<underlying_type_t<_Ty>>(_Value);
	}

	[[noreturn]] inline void unreachable() noexcept /* strengthened */ {
		_STL_UNREACHABLE;
#ifdef _DEBUG
		abort(); // likely to be called in debug mode, but can't be relied upon - already entered the UB territory
#endif // _DEBUG
	}
#endif // _HAS_CXX23

#if _HAS_TR1_NAMESPACE
	namespace _DEPRECATE_TR1_NAMESPACE tr1 {
		using  get;
		using  tuple_element;
		using  tuple_size;
	} // namespace tr1
#endif // _HAS_TR1_NAMESPACE
}