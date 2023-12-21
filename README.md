# `<hook>` header

> WARNING: This header requires C++20 or later.

`<hook>` contains a class `hook<type>` - an interface for event making.

## Classes
| Class | Description |
| :---: | :-- |
| `hook<type>` | Allows using a function of type `type` as an event handler. |

## Concepts
| Concept | Description |
| :---: | :-- |
| `callable` | Wrapper for `std::is_function<T>`. |
