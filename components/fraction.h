// MiniLibs <fraction> interface
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

#include "type.h"

using namespace std;
#ifndef _FRACTION_
#define _FRACTION_

namespace minlibs 
{
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
} //namespace minilibs
#endif //!_FRACTION_