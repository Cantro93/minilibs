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
#ifndef _HOOK_IMPL
#define _HOOK_IMPL
#include "hook.h"
namespace minilibs
{
    template <callable type>
    void hook<type>::assign(function<type> f)
    {
        fc = f;
    }
    
    template <callable type>
    void hook<type>::operator=(function<type> f)
    {
        fc = f;
    }
} // namespace minilibs

#endif //!_HOOK_IMPL