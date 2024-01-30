# `<fraction>` header

`<fraction>` contains a class representing rational numbers.

## Requirements

* `minilibs::<type>`

## Classes
| Class | Description |
| :---: | :-- |
| `fraction<type>` | Defines a rational number. |

## Casting Operators
| Operator | Description |
| :---: | :-- |
| `rational_cast<target>` | Converts from `fraction<source>` to `fraction<target>`, where `source` type is detected implicitly. |

#include <iostream>
#include "fraction_.h"

using namespace std;

```cpp
#include <iostream>
#include "fraction"

using namespace std;
int main()
{
    int A = 1, B = 1;
    cout << "Numerator 1: ";
    cin >> A;
    cout << "Denominator 1: ";
    cin >> B;
    fraction left(A, B);
    cout << endl;
    cout << "Numerator 2: ";
    cin >> A;
    cout << "Denominator 2: ";
    cin >> B;
    fraction right(A, B);
    cout << left << " + " << right << " = " << (left+right) << endl;
    cout << left << " - " << right << " = " << (left-right) << endl;
    cout << left << " * " << right << " = " << (left*right) << endl;
    cout << left << " / " << right << " = " << (left/right) << endl;
    cout << '(' << left << ") ^ 2 = "       << pow(left, 2) << endl;
}
```
