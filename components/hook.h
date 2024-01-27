// MiniLibs <hook> component interface
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
#ifndef _HOOK_
#define _HOOK_
#include <functional>

#include "type"

namespace minilibs
{
    using namespace std;
    template<callable type> class hook {
    public:
        using result_t = function<type>::result_type;
        hook() = default;
        hook(function<type> f) {fc = f;};
        //invocation operator: make sure that it will receive correct arguments
        template<typename... Args> requires (is_same<function<result_t(Args...)>, function<type>>::value)
            result_t operator()(Args ...arguments) 
            {return fc(arguments...);}

        template<typename... Args> requires (is_same<function<result_t(Args...)>, function<type>>::value)
            result_t dispatch(Args ...arguments) 
            {return fc(arguments...);}

        void assign(function<type> f);

        void operator=(function<type> f);
    private:
        function<type> fc{nullptr};
    };
} //namespace minilibs
#endif //!_HOOK_