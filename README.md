# `<fraction>` header

> WARNING: This header requires C++20 or later.

`<fraction>` contains a class representing rational numbers.

## Classes
| Class | Description |
| :---: | :-- |
| `fraction<type>` | Defines a rational number. |

## Casting Operators
| Operator | Description |
| :---: | :-- |
| `rational_cast<target>` | Converts from `fraction<source>` to `fraction<target>`, where `source` type is detected implicitly. |

## Concepts
| Concept | Description |
| :---: | :-- |
| `number` | Checks if it is possible to perform 4 basic operations (+, -, *, /) on the type. |
| `integer` | Checks if the type is `number` and satisfies `std::is_integral<T>`. |