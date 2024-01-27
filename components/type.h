// MiniLibs <type> header
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
#include <concepts>
#include <type_traits>

#ifndef _TYPE_
#define _TYPE_
namespace minilibs
{
    using namespace std;
    
    template<typename type>
    concept integer = (is_integral<type>::value) && requires(type a, type b) {
    	a + b;
    	a - b;
    	a * b;
    	a / b;
    };

	template<typename type>
	concept number = requires(type a, type b) {
		a + b;
		a - b;
		a * b;
		a / b;
    };

	template<typename T> 
	concept callable = is_function<T>::value;
} // namespace minilibs
#endif //!_TYPE_
