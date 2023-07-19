// MiniLibs <objective> component implementation
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
#ifndef _OBJECTIVE_IMPL
#define _OBJECTIVE_IMPL
#include "objective.h"
objective<bool>::objective(bool a) : data(a)
{
}

objective<bool> &objective<bool>::operator=(bool a)
{
    data = a;
    return *this;
}

objective<bool>::operator bool()
{
    return data;
}

bool objective<bool>::operator^(bool b)
{
    return (data ? (!b) : b);
}

bool objective<bool>::operator^(objective<bool> b)
{
    return (data ? (!b.data) : b.data);
}

bool objective<bool>::operator|(bool b)
{
    return (data || b);
}

bool objective<bool>::operator|(objective<bool> b)
{
    return (data || b.data);
}

bool objective<bool>::operator&(bool b)
{
    return (data && b);
}

bool objective<bool>::operator&(objective<bool> b)
{
    return (data && b.data);
}

bool objective<bool>::operator||(bool b)
{
    return (data || b);
}

bool objective<bool>::operator||(objective<bool> b)
{
    return (data || b.data);
}

bool objective<bool>::operator&&(bool b)
{
    return (data && b);
}

bool objective<bool>::operator&&(objective<bool> b)
{
    return (data && b.data);
}

bool objective<bool>::operator==(bool b)
{
    return (data == b);
}

bool objective<bool>::operator==(objective<bool> b)
{
    return (data == b.data);
}

bool objective<bool>::operator!=(bool b)
{
    return (data != b);
}

bool objective<bool>::operator!=(objective<bool> b)
{
    return (data != b.data);
}




template<typename type>
objective<type>::objective(type a) : data(a)
{
}

template <typename type>
objective<type> &objective<type>::operator=(type a)
{
    data = a;
    return *this;
}

template <typename type>
objective<type> &objective<type>::operator++()
{
    data++;
    return *this;
}

template <typename type>
objective<type> &objective<type>::operator--()
{
    data--;
    return *this;
}

template <typename type>
objective<type> &objective<type>::operator+()
{
    data = +data;
    return *this;
}

template <typename type>
objective<type> &objective<type>::operator-()
{
    data = -data;
    return *this;
}

template <typename type>
objective<type> &objective<type>::operator!()
{
    data = !data;
    return *this;
}

template <typename type>
type objective<type>::operator+(type b)
{
    return data + b;
}

template <typename type>
type objective<type>::operator+(objective<type> b)
{
    return data + b.data;
}

template <typename type>
type objective<type>::operator-(type b)
{
    return data - b;
}

template <typename type>
type objective<type>::operator-(objective<type> b)
{
    return data - b.data;
}

template <typename type>
type objective<type>::operator*(type b)
{
    return data * b;
}

template <typename type>
type objective<type>::operator*(objective<type> b)
{
    return data * b.data;
}

template <typename type>
type objective<type>::operator/(type b)
{
    return data / b;
}

template <typename type>
type objective<type>::operator/(objective<type> b)
{
    return data / b.data;
}

template <typename type>
type objective<type>::operator%(type b)
{
    return data % b;
}

template <typename type>
type objective<type>::operator%(objective<type> b)
{
    return data % b.data;
}

template <typename type>
type objective<type>::operator^(type b)
{
    return data ^ b;
}

template <typename type>
type objective<type>::operator^(objective<type> b)
{
    return data ^ b.data;
}

template <typename type>
type objective<type>::operator|(type b)
{
    return data | b;
}

template <typename type>
type objective<type>::operator|(objective<type> b)
{
    return data | b.data;
}

template <typename type>
type objective<type>::operator&(type b)
{
    return data & b;
}

template <typename type>
type objective<type>::operator&(objective<type> b)
{
    return data & b.data;
}

template <typename type>
type objective<type>::operator<<(type b)
{
    return data << b;
}

template <typename type>
type objective<type>::operator<<(objective<type> b)
{
    return data << b.data;
}

template <typename type>
type objective<type>::operator>>(type b)
{
    return data >> b;
}

template <typename type>
type objective<type>::operator>>(objective<type> b)
{
    return data >> b.data;
}

template <typename type>
objective<type> &objective<type>::operator+=(type b)
{
    data += b;
    return *this;
}

template <typename type>
objective<type> &objective<type>::operator+=(objective<type> b)
{
    data += b.data;
    return *this;
}

template <typename type>
objective<type> &objective<type>::operator-=(type b)
{
    data -= b;
    return *this;
}

template <typename type>
objective<type> &objective<type>::operator-=(objective<type> b)
{
    data -= b.data;
    return *this;
}

template <typename type>
objective<type> &objective<type>::operator*=(type b)
{
    data *= b;
    return *this;
}

template <typename type>
objective<type> &objective<type>::operator*=(objective<type> b)
{
    data *= b.data;
    return *this;
}

template <typename type>
objective<type> &objective<type>::operator/=(type b)
{
    data /= b;
    return *this;
}

template <typename type>
objective<type> &objective<type>::operator/=(objective<type> b)
{
    data /= b.data;
    return *this;
}

template <typename type>
objective<type> &objective<type>::operator%=(type b)
{
    data %= b;
    return *this;
}

template <typename type>
objective<type> &objective<type>::operator%=(objective<type> b)
{
    data %= b.data;
    return *this;
}

template <typename type>
objective<type> &objective<type>::operator^=(type b)
{
    data ^= b;
    return *this;
}

template <typename type>
objective<type> &objective<type>::operator^=(objective<type> b)
{
    data ^= b.data;
    return *this;
}

template <typename type>
objective<type> &objective<type>::operator|=(type b)
{
    data |= b;
    return *this;
}

template <typename type>
objective<type> &objective<type>::operator|=(objective<type> b)
{
    data |= b.data;
    return *this;
}

template <typename type>
objective<type> &objective<type>::operator&=(type b)
{
    data &= b;
    return *this;
}

template <typename type>
objective<type> &objective<type>::operator&=(objective<type> b)
{
    data &= b.data;
    return *this;
}

template <typename type>
objective<type> &objective<type>::operator<<=(type b)
{
    data <<= b;
    return *this;
}

template <typename type>
objective<type> &objective<type>::operator<<=(objective<type> b)
{
    data <<= b.data;
    return *this;
}

template <typename type>
objective<type> &objective<type>::operator>>=(type b)
{
    data <<= b;
    return *this;
}

template <typename type>
objective<type> &objective<type>::operator>>=(objective<type> b)
{
    data <<= b.data;
    return *this;
}

template <typename type>
bool objective<type>::operator<(type b)
{
    return (data < b);
}

template <typename type>
bool objective<type>::operator<(objective<type> b)
{
    return (data < b.data);
}

template <typename type>
bool objective<type>::operator>(type b)
{
    return (data > b);
}

template <typename type>
bool objective<type>::operator>(objective<type> b)
{
    return (data > b.data);
}

template <typename type>
bool objective<type>::operator==(type b)
{
    return (data == b);
}

template <typename type>
bool objective<type>::operator==(objective<type> b)
{
    return (data == b.data);
}

template <typename type>
bool objective<type>::operator<=(type b)
{
    return (data <= b);
}

template <typename type>
bool objective<type>::operator<=(objective<type> b)
{
    return (data <= b.data);
}

template <typename type>
bool objective<type>::operator>=(type b)
{
    return (data >= b);
}

template <typename type>
bool objective<type>::operator>=(objective<type> b)
{
    return (data >= b.data);
}

template <typename type>
bool objective<type>::operator!=(type b)
{
    return (data != b);
}

template <typename type>
bool objective<type>::operator!=(objective<type> b)
{
    return (data != b.data);
}

template <typename type>
objective<type>::operator type()
{
    return data;
}

template <typename target, typename source>
objective<target> objective_cast(objective<source> src)
{
    return objective<target>((target)((source)src));
}

template <typename target, typename source>
target primitive_cast(objective<source> src)
{
    return (target)((source)src);
}
#endif //!_OBJECTIVE_IMPL
