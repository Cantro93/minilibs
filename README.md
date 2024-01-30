# `<quaternion>` header

`<quaternion>` contains a class representing quaternions.

## Requirements

* `minilibs::<type>`

## Classes
| Class | Description |
| :---: | :-- |
| `quaternion<type>` | Defines a quaternion. (See [Wikipedia](https://en.m.wikipedia.org/wiki/Quaternion)).|


## Casting Operators
| Operator | Description |
| :---: | :-- |
| `quaternion_cast<target>` | Converts a quaternion type `quaternion<source>` to `quaternion<target>`.|

## Example

```cpp
#include "quaternion.h"

using namespace std;

int main()
{
    quaternion a, b;
    cout << "Quaternion 1: " << endl;
    cout << "e-part: "; cin >> a[e];
    cout << "i-part: "; cin >> a[i];
    cout << "j-part: "; cin >> a[j];
    cout << "k-part: "; cin >> a[k];
    cout << endl;
    cout << "Quaternion 2: " << endl;
    cout << "e-part: "; cin >> b[e];
    cout << "i-part: "; cin >> b[i];
    cout << "j-part: "; cin >> b[j];
    cout << "k-part: "; cin >> b[k];

    cout << "norm^2 of a = " << (*a * a)[e] << endl;
    cout << " a^-1 = " << a.reciprocal() << endl;
    cout << "norm of a = " << a.norm() << endl;//(int)sqrt((*a * a)[e]) << endl;
    cout << '(' << a << ") + (" << b << ") = " << (a + b) << endl;
    cout << '(' << a << ") - (" << b << ") = " << (a - b) << endl;
    cout << '(' << a << ") * (" << b << ") = " << (a * b) << endl;
    cout << '(' << b << ") / (" << a << ") = " << quaternion_cast<int>(b / a) << endl;
    cout << quaternion<int>(0, 1, 1, 1);
}
```
