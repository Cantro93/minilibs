// MiniLibs <objective> component interface
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
#pragma once
#ifndef _OBJECTIVE_
#define _OBJECTIVE_
namespace minilibs
{
	template <typename type>
	class objective
	{
	public:
		//construction

		objective(type a);
		objective<type>& operator=(type a);
		operator type();

		//monooperations

		objective<type>& operator++();
		objective<type>& operator--();
		objective<type>& operator+();
		objective<type>& operator-();
		objective<type>& operator!();

		//operations

		type operator+(type b);
		type operator+(objective<type> b);

		type operator-(type b);
		type operator-(objective<type> b);

		type operator*(type b);
		type operator*(objective<type> b);

		type operator/(type b);
		type operator/(objective<type> b);

		type operator%(type b);
		type operator%(objective<type> b);

		type operator^(type b);
		type operator^(objective<type> b);

		type operator|(type b);
		type operator|(objective<type> b);

		type operator&(type b);
		type operator&(objective<type> b);

		type operator<<(type b);
		type operator<<(objective<type> b);

		type operator>>(type b);
		type operator>>(objective<type> b);

		//assignment operations

		objective<type>& operator+=(type b);
		objective<type>& operator+=(objective<type> b);

		objective<type>& operator-=(type b);
		objective<type>& operator-=(objective<type> b);

		objective<type>& operator*=(type b);
		objective<type>& operator*=(objective<type> b);

		objective<type>& operator/=(type b);
		objective<type>& operator/=(objective<type> b);

		objective<type>& operator%=(type b);
		objective<type>& operator%=(objective<type> b);

		objective<type>& operator^=(type b);
		objective<type>& operator^=(objective<type> b);

		objective<type>& operator|=(type b);
		objective<type>& operator|=(objective<type> b);

		objective<type>& operator&=(type b);
		objective<type>& operator&=(objective<type> b);

		objective<type>& operator<<=(type b);
		objective<type>& operator<<=(objective<type> b);

		objective<type>& operator>>=(type b);
		objective<type>& operator>>=(objective<type> b);    

		//comparison

		bool operator<(type b);
		bool operator<(objective<type> b);

		bool operator>(type b);
		bool operator>(objective<type> b);

		bool operator==(type b);
		bool operator==(objective<type> b);

		bool operator<=(type b);
		bool operator<=(objective<type> b);

		bool operator>=(type b);
		bool operator>=(objective<type> b);

		bool operator!=(type b);
		bool operator!=(objective<type> b);
	protected:
		type data = {};
	};

	template<>
	class objective<bool>
	{
	public:
		//construction

		objective(bool a);
		objective<bool>& operator=(bool a);
		operator bool();

		//monooperations

		objective<bool>& operator!();

		//operations

		bool operator^(bool b);
		bool operator^(objective<bool> b);

		bool operator|(bool b);
		bool operator|(objective<bool> b);

		bool operator&(bool b);
		bool operator&(objective<bool> b);

		bool operator||(bool b);
		bool operator||(objective<bool> b);

		bool operator&&(bool b);
		bool operator&&(objective<bool> b);

		//comparison

		bool operator==(bool b);
		bool operator==(objective<bool> b);

		bool operator!=(bool b);
		bool operator!=(objective<bool> b);
	protected:
		bool data = false;
	};
} //namespace minilibs
#endif
