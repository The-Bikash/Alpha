module;
//#include <algorithm>

export module algorithm;

export namespace alpha {
	template<class Iterator>
	inline constexpr decltype(auto) sum(Iterator _Begin, Iterator _End) {
		auto _Sum = *_Begin; ++_Begin;
		while (_Begin != _End) {
			_Sum += *_Begin;
			++_Begin;
		}
		return _Sum;
	}

	template<class InputIt, class T>
	inline constexpr InputIt find(InputIt first, InputIt last, const T& value) {
		for (; first != last; ++first)
			if (*first == value)
				return first;

		return last;
	}

}

