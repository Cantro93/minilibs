// MiniLibs <fraction> header
// Copyright (C) 2023  Cantro93
// MiniLibs Project is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// MiniLibs Project is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// You should have received a copy of the GNU General Public License
// along with MiniLibs. If not, see <https://www.gnu.org/licenses/>.
#include <cmath>
#include <iostream>
#include <compare>
#include <utility>
#include <type_traits>

using namespace std;
#ifndef _FRACTION_
#define _FRACTION_
template<typename type>
concept number = requires(type a, type b) {
	a + b;
	a - b;
	a * b;
	a / b;
};

template<typename type>
concept integer = (is_integral<type>::value) && requires(type a, type b) {
	a + b;
	a - b;
	a * b;
	a / b;
};

//based on https://en.wikipedia.org/wiki/Euclidean_algorithm#Implementations
template<integer type>
type gcd(type a, type b)
{
	type a2 = a;
	type b2 = b;
	while(b != 0) {
		if (a > b) a -= b;
		else b -= a;
	}
	return abs(a);
};

//based on https://en.wikipedia.org/wiki/Least_common_multiple
template<integer type>
type lcm(type a, type b)
{
	return abs(a*b)/gcd(a, b);
};

template<number type = int>
class fraction {
public:

	type numerator;
	type denominator;

	fraction(type n = 0, type d = 1) : numerator{n}, denominator{d} {};
	fraction(type n) : numerator{n}, denominator{1} {};

	fraction<type> operator-();

	fraction<type> operator+(fraction<type> b);
	fraction<type> operator-(fraction<type> b);
	fraction<type> operator*(fraction<type> b);
	fraction<type> operator/(fraction<type> b);

	strong_ordering operator<=>(fraction<type> b);
	operator float();
	operator double();
	operator long double();
};

template <number type>
fraction<type> simplify(fraction<type> f) requires integer<type>
{
	type g = gcd(f.numerator, f.denominator);
	return fraction<type>((f.numerator/g), (f.denominator/g));
}

template <number type>
pair<fraction<type>, fraction<type>> common(fraction<type> a, fraction<type> b) requires integer<type>
{
	type l = lcm(a, b);
	type alcm = l/a;
	type blcm = l/b;

	fraction<type> a2(a.numerator*alcm, a.denominator*alcm);
	fraction<type> b2(b.numerator*blcm, b.denominator*blcm);
	return (a2, b2);
}



template <number type>
fraction<type> fraction<type>::operator-()
{
	return fraction<type>(-this->numerator, this->denominator);
}



template <number type>
fraction<type> fraction<type>::operator+(fraction<type> b)
{
	return simplify<type>(fraction<type>(((this->numerator*b.denominator)+(b.numerator*this->denominator)), 
	(this->denominator*b.denominator)));
}

template <number type>
fraction<type> fraction<type>::operator-(fraction<type> b)
{
	return (*this + (-b));
}

template <number type>
fraction<type> fraction<type>::operator*(fraction<type> b)
{
	return simplify<type>(fraction<type>(this->numerator*b.numerator, this->denominator*b.denominator));
}

template<number type>
fraction<type> fraction<type>::operator/(fraction<type> b)
{
	return simplify(fraction<type>(this->numerator*b.denominator, this->denominator*b.numerator));
}

template <number type>
fraction<type>::operator float()
{
	return ((float)this->numerator/(float)(this->denominator));
}

template <number type>
fraction<type>::operator double()
{
	return ((double)this->numerator/(double)(this->denominator));
}

template <number type>
fraction<type>::operator long double()
{
	return ((long double)this->numerator/(long double)(this->denominator));
}

template <number type>
strong_ordering fraction<type>::operator<=>(fraction<type> b)
{
	strong_ordering n = (this->numerator <=> b.numerator), d = (this->denominator <=> b.denominator);
	pair<fraction<type>, fraction<type>> p;
	if ((n == d)&&(n == strong_ordering::equal)) return strong_ordering::equal;
	else {
		if (n == strong_ordering::equal) {
			if (d == strong_ordering::greater) return strong_ordering::less;
			else return strong_ordering::greater;
		}
		else if (d == strong_ordering::equal) return n;
		else {
			p = common(*this, b);
			return (p.first <=> p.second);
		}
	}
}



template<number type, number exptype>
fraction<type> pow(fraction<type> base, exptype exponent)
{
	return fraction<type>((type)pow((exptype)base.numerator, exponent), (type)pow((exptype)base.denominator, exponent));	
}

template<number type>
ostream & operator<<(ostream & os, fraction<type> f)
{
	os << f.numerator << '/' << f.denominator;
	return os;
}

template<number target, number source>
fraction<target> rational_cast(fraction<source> src)
{
	return fraction<target>((target)src.numerator, (target)src.denominator);
}
#endif //!_FRACTION_