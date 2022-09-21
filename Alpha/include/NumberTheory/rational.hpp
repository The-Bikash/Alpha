#pragma once
#include <iostream>

template<typename _Ty, typename... Args> constexpr void Print(_Ty  arg, Args... args);
template<typename _Ty, typename... Args> constexpr void Input(_Ty& arg, Args&... args);


template<class field> class Rational {
private:
	field up, down;
	inline const static field zero = 0;
	inline const static field identity = 1;
	constexpr field gcd(field, field);
public:
	constexpr Rational();
	constexpr Rational(const field&);
	constexpr Rational(const field&, const field&);
	constexpr void scan();
	constexpr void print()const;

	// OPERATOR OVERLOADING SECTION--------------------------------------------------------------------------------------

	constexpr bool operator == (const Rational&)const;
	constexpr bool operator != (const Rational&)const;
	constexpr bool operator >  (const Rational&)const;
	constexpr bool operator <  (const Rational&)const;
	constexpr bool operator >= (const Rational&)const;
	constexpr bool operator <= (const Rational&)const;

	constexpr Rational operator - ()const;

	constexpr Rational operator + (const Rational&)const;
	constexpr Rational operator - (const Rational&)const;
	constexpr Rational operator * (const Rational&)const;
	constexpr Rational operator / (const Rational&)const;

	constexpr Rational& operator += (const Rational&);
	constexpr Rational& operator -= (const Rational&);
	constexpr Rational& operator *= (const Rational&);
	constexpr Rational& operator /= (const Rational&);

};
template<typename _Ty> constexpr std::ostream& operator << (std::ostream&, const Rational<_Ty>&);
template<typename _Ty> constexpr std::istream& operator >> (std::istream&, Rational<_Ty>&);


template class Rational<int>;

template<class field> constexpr field Rational<field>::gcd(field a, field b) {
	field r;
	while ((r = a % b) != zero) a = b, b = r;
	return b;
}
template<class field> constexpr Rational<field>::Rational() :up(identity), down(identity) {}
template<class field> constexpr Rational<field>::Rational(const field& x) : up(x), down(identity) {}
template<class field> constexpr Rational<field>::Rational(const field& x, const field& y) {
	const field d = gcd(x, y); up = x / d; down = y / d;
	if (down < 0) {
		up = -up; down = -down;
	}
}
template<class field> constexpr void Rational<field>::scan() {
	std::cout << "Enter a Rational Number ";
	std::cin >> up >> down;
	const field d = gcd(up, down);
	up /= d; down /= d;
	if (down < 0) { up = -up; down = -down; }
}
template<class field> constexpr void Rational<field>::print()const { if (down == 1) std::cout << up; else std::cout << up << "/" << down; }

// OPERATOR OVERLOADING SECTION--------------------------------------------------------------------------------------

template<class field> constexpr bool Rational<field>::operator == (const Rational& x)const { return up == x.up && down == x.down; }
template<class field> constexpr bool Rational<field>::operator != (const Rational& x)const { return up != x.up || down != x.down; }
template<class field> constexpr bool Rational<field>::operator >  (const Rational& x)const { return up * x.down > x.up * down; }
template<class field> constexpr bool Rational<field>::operator <  (const Rational& x)const { return up * x.down < x.up* down; }
template<class field> constexpr bool Rational<field>::operator >= (const Rational& x)const { return up * x.down >= x.up * down; }
template<class field> constexpr bool Rational<field>::operator <= (const Rational& x)const { return up * x.down <= x.up * down; }

template<class field> constexpr Rational<field> Rational<field>::operator - ()const { Rational Tmp(-up, down); return Tmp; }

template<class field> constexpr Rational<field> Rational<field>::operator + (const Rational& x)const { Rational Tmp(up * x.down + x.up * down, x.down * down); return Tmp; }
template<class field> constexpr Rational<field> Rational<field>::operator - (const Rational& x)const { Rational Tmp(up * x.down - x.up * down, x.down * down); return Tmp; }
template<class field> constexpr Rational<field> Rational<field>::operator * (const Rational& x)const { Rational Tmp(up * x.up, down * x.down); return Tmp; }
template<class field> constexpr Rational<field> Rational<field>::operator / (const Rational& x)const { Rational Tmp(up * x.down, down * x.up); return Tmp; }

template<class field> constexpr Rational<field>& Rational<field>::operator += (const Rational& x) {
	field Tmp = up * x.down + x.up * down;
	down = x.down * down; up = Tmp;

	Tmp = gcd(up, down); up /= Tmp; down /= Tmp;
	if (down < 0) { up = -up; down = -down; }

	return *this;
}
template<class field> constexpr Rational<field>& Rational<field>::operator -= (const Rational& x) {
	field Tmp = up * x.down - x.up * down;
	down = x.down * down; up = Tmp;

	Tmp = gcd(up, down);
	up /= Tmp; down /= Tmp;
	if (down < 0) { up = -up; down = -down; }

	return *this;
}
template<class field> constexpr Rational<field>& Rational<field>::operator *= (const Rational& x) {
	field Tmp = up * x.up;
	down = down * x.down; up = Tmp;

	Tmp = gcd(up, down); up /= Tmp; down /= Tmp;
	if (down < 0) { up = -up; down = -down; }

	return *this;
}
template<class field> constexpr Rational<field>& Rational<field>::operator /= (const Rational& x) {
	field Tmp = up * x.down;
	down = down * x.up; up = Tmp;

	Tmp = gcd(up, down); up /= Tmp; down /= Tmp;
	if (down < 0) { up = -up; down = -down; }

	return *this;
}

template<typename _Ty> constexpr std::ostream& operator << (std::ostream& cout, const Rational<_Ty>& p) { p.print(); return cout; }
template<typename _Ty> 
inline constexpr auto _Print(const Rational<_Ty>& p) {
	p.print();
}
template<typename _Ty> constexpr std::istream& operator >> (std::istream& coin, Rational<_Ty>& p) { p.scan();  return coin; }
