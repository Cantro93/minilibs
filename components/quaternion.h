// MiniLibs <quaternion> component interface
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

#include "type"

#ifndef _QUATERNION_
#define _QUATERNION_
namespace minilibs
{
    using namespace std;

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
        quaternion<long double> reciprocal();

        quaternion<type> operator+(quaternion<type> b);
        quaternion<type> operator-(quaternion<type> b);
        quaternion<type> operator*(quaternion<type> b);
        quaternion<type> operator/(quaternion<type> b);

    };
} // namespace minilibs

#endif //!_QUATERNION_