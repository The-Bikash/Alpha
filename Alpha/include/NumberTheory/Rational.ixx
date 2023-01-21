module;

export module Rational;

import io;

export namespace alpha {

	template<class _Int> 
	class Rational {
	public:
		constexpr Rational()noexcept 
			:_Numerator(_Unit), _Denomerator(_Unit) {}
		constexpr Rational(const _Int& _Arg)noexcept : 
			_Numerator(_Arg), _Denomerator(_Unit) {}
		constexpr Rational(const _Int& _Arg1, const _Int& _Arg2)noexcept {
			_Initialize(_Arg1, _Arg2);
		}
		constexpr void print()const {
			_Denomerator == _Unit ? alpha::print(_Numerator) : alpha::print('(', _Numerator, '/', _Denomerator, ')');
		}

		constexpr bool operator==(const Rational& _That)const {
			return _Numerator == _That._Numerator && _Denomerator == _That._Denomerator;
		}
		constexpr bool operator!=(const Rational& _That)const {
			return !(this->operator==(_That));
		}
		constexpr bool operator>(const Rational& _That)const {
			return _Numerator * _That._Denomerator > _That._Numerator * _Denomerator;
		}
		constexpr bool operator<(const Rational& x)const {
			return _Numerator * x._Denomerator < x._Numerator* _Denomerator;
		}
		constexpr bool operator>=(const Rational& x)const {
			return _Numerator * x._Denomerator >= x._Numerator * _Denomerator;
		}
		constexpr bool operator<=(const Rational& x)const {
			return _Numerator * x._Denomerator <= x._Numerator * _Denomerator; 
		}

		constexpr Rational operator-()const {
			return Rational(-_Numerator, _Denomerator);
		}
		constexpr Rational operator+(const Rational& x)const {
			return Rational(_Numerator * x._Denomerator + x._Numerator * _Denomerator, x._Denomerator * _Denomerator);
		}
		constexpr Rational operator-(const Rational& x)const { 
			return Rational(_Numerator * x._Denomerator - x._Numerator * _Denomerator, x._Denomerator * _Denomerator);
		}
		constexpr Rational operator*(const Rational& x)const {
			return Rational(_Numerator * x._Numerator, _Denomerator * x._Denomerator);
		}
		constexpr Rational operator/(const Rational& x)const {
			return Rational(_Numerator * x._Denomerator, _Denomerator * x._Numerator);
		}

		constexpr Rational& operator+=(const Rational& x) {
			_Initialize((_Numerator * x._Denomerator + x._Numerator * _Denomerator), (x._Denomerator * _Denomerator));
			return *this;
		}
		constexpr Rational& operator -= (const Rational& x) {
			_Initialize((_Numerator * x._Denomerator - x._Numerator * _Denomerator), (x._Denomerator * _Denomerator));
			return *this;
		}
		constexpr Rational& operator *= (const Rational& x) {
			_Initialize((_Numerator * x._Numerator), (_Denomerator * x._Denomerator));
			return *this;
		}
		constexpr Rational& operator /= (const Rational& x) {
			_Initialize(_Numerator * x._Denomerator, _Denomerator * x._Numerator);
			return *this;
		}

	private:
		_Int _Numerator, _Denomerator;
		inline const static _Int _Zero = 0;
		inline const static _Int _Unit = 1;
		inline constexpr _Int _Gcd(_Int _A, _Int _B)noexcept {
			_Int _R = _A % _B;
			while (_R != _Zero) {
				_A = _B;
				_B = _R;
				_R = _A % _B;
			}
			return _B;
		}

		inline constexpr auto _Initialize(const _Int& _Arg1, const _Int& _Arg2)noexcept {
			const _Int _D = _Gcd(_Arg1, _Arg2);
			_Numerator = _Arg1 / _D;
			_Denomerator = _Arg2 / _D;
			if (_Denomerator < 0) {
				_Numerator = -_Numerator;
				_Denomerator = -_Denomerator;
			}
		}

	};

	template<typename _Ty>
	constexpr  void _print(const Rational<_Ty>& _That) { 
		_That.print();
	}
}