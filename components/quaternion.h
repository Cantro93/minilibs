// MiniLibs <quaternion> header
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

#ifndef _QUATERNION_
#define _QUATERNION_
using namespace std;

namespace quaternion_internal {template<typename type>
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
};}

typedef enum {
    e = 0, i = 1, j = 2, k = 3
} quaternion_part;

template<quaternion_internal::number type = int>
class quaternion {
private:
    type num[4];
public:
    //construction
    quaternion(type re = 0, type im = 0, type jm = 0, type km = 0);
    //access
    type& operator[](quaternion_part id);
    type operator()(signed char id);
    type norm();
    

    //operations
    quaternion<type> operator*();
    quaternion<type> reciprocal();
    // quaternion<type> versor();

    quaternion<type> operator+(quaternion<type> b);
    quaternion<type> operator-(quaternion<type> b);
    quaternion<type> operator*(quaternion<type> b);
    quaternion<type> operator/(quaternion<type> b);
    
};
#endif //!_QUATERNION_