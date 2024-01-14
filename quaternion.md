# `<quaternion>` - samples

## Defining quaternion of type `int`

```cpp
#include "quaternion"
int main()
{
    quaternion a;
}
```

## Defining quaternion of type `float`

```cpp
#include "quaternion"
int main()
{
    quaternion<float> a;
}
```

## Passing initial coefficients

```cpp
#include "quaternion"
int main()
{
    quaternion<float> a{2.72, 3.14, 1.62};
}
```

The above sample defines quaternion $a = e + \pi i + \varphi j$.

## Addition & display

#### Code:

```cpp
#include "quaternion"
int main()
{
    quaternion a{1, 2, 0, 4}, b{5, 6, 7, 8};
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "a + b = " << a + b << endl;
}
```

#### Output:

```
a = 1 + 2i + 4k
b = 5 + 6i + 7j + 8k
a + b = 6 + 8i + 7j + 12k
```

> NOTE: zero coefficients are omitted in output.

## Substraction

#### Code:

```cpp
#include "quaternion"
int main()
{
    quaternion a{1, 2, 0, 4}, b{5, 6, 7, 8};
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "a - b = " << a - b << endl;
}
```

#### Output:

```
a = 1 + 2i + 4k
b = 5 + 6i + 7j + 8k
a - b = -4 - 4i - 7j - 4k
```

## Multiplication

#### Code:

```cpp
#include "quaternion"
int main()
{
    quaternion a{1, 2, 0, 4}, b{5, 6, 7, 8};
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "a * b = " << a * b << endl;
}
```

#### Output:

```
a = 1 + 2i + 4k
b = 5 + 6i + 7j + 8k
a * b = -39 - 12i + 15j + 42k
```

## Division

#### Code:

```cpp
#include "quaternion"
int main()
{
    quaternion<float> a{1, 2, 0, 4}, b{5, 6, 7, 8};
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "a / b = " << a / b << endl;
}
```

#### Output:

```
a = 1 + 2i + 4k
b = 5 + 6i + 7j + 8k
a / b = 0.281609 - 0.137931i + 0.00574713j + 0.149425k
```
> NOTE: Result of the division of two quaternions may be truncated if both of them are integral (they are defined as `quaternion<int>`).

> **WARNING**: this library performs division $a/b$ by multiplying $b^{-1}$ by $a$. For more information, see [this Quora question](https://www.quora.com/What-are-quaternions-and-can-you-multiply-and-divide-them).

## Norm, conjugate & reciprocal

#### Code:

```cpp
#include "quaternion"
int main()
{
    quaternion a{1, 2, 0, 4};
    cout << "a = " << a << endl;
    cout << "||a|| = " << a.norm() << endl;
    cout << "a* = " << *a << endl;
    cout << "a^-1 = " << a.reciprocal() << endl;
}
```

#### Output:

```
a = 1 + 2i + 4k
||a|| = 4
a* = 1 - 2i - 4k
a^-1 = 0.047619 - 0.0952381i - 0.190476k
```

## Conversion between two quaternion types

#### Code:

```cpp
#include "quaternion"
int main()
{
    quaternion<float> a{0.25, 0.25, 0.25, 0.25};
    cout << "a = " << a << endl;
    cout << "(int)a = " << quaternion_cast<int>(a) << endl;
    cout << "(int)a^-1 = " << quaternion_cast<int>(a.reciprocal()) << endl;
}
```

#### Output:

```
a = 0.25 + 0.25i + 0.25j + 0.25k
(int)a = 0
(int)a^-1 = 1 - i - j - k
```

## Retrieving coefficients

#### Code:

```cpp
#include "quaternion.h"
int main()
{
    quaternion a{3, 6, 9, 12};
    cout << "a = " << a << endl;
    cout << "e-part = " << a[e] << endl;
    cout << "i-part = " << a[i] << endl;
    cout << "j-part = " << a[j] << endl;
    cout << "k-part = " << a[k] << endl;
}
```

#### Output:

```
a = 3 + 6i + 9j + 12k
e-part = 3
i-part = 6
j-part = 9
k-part = 12
```

> NOTE: one can also type a number: <br> `e: 0` <br> `i: 1` <br> `j: 2` <br> `k: 3`

> **WARNING**: Syntax from the above code will not work, if one defines an object with the name `e`, `i` etc. (like `int i`). In such situation, one has to write `quaternion_part::<letter>` instead of `<letter>`.