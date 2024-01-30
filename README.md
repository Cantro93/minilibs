# `<hook>` header

`<hook>` contains a class `hook<type>` - an interface for event handling.

## Requirements

* `minilibs::<type>`

## Classes
| Class | Description |
| :---: | :-- |
| `hook<type>` | Allows using a function of type `type` as an event handler. |

## Example

```cpp
#include <iostream>
#include <string>
#include "hook.h"

using namespace std;
using namespace minilibs;

class A {
public:
    // Hook declaration
    hook<void(string)> onCalled;
    A() {};
    void call() {onCalled("It\'s working!"s);}
};

void send(string a) {
    cout << a;
}

int main() {
    A obj;

    // Initialize with the function
    obj.onCalled = send;

    // Run "onCalled" hook
    obj.call();
}
```
