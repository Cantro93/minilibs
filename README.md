# `<type>` header

`<type>` contains metaprogramming tools.

## Concepts
| Concept | Description |
| :---: | :-- |
| `number` | Checks if it is possible to perform 4 basic operations (+, -, *, /) on the type. |
| `integer` | Checks if the type is `number` and satisfies `std::is_integral<T>`. |
| `callable` | Wrapper for `std::is_function<T>`. |
