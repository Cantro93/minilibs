# `<objective>` header

`<objective>` contains classes, which aim is to help to handle types alternatively.

## Classes
| Class | Description |
| :---: | :-- |
| `objective<type>` | Wraps primitive types to be handled as classes. |

## Casting Operators
| Operator | Description |
| :---: | :-- |
| `objective_cast<target>` | Converts from `objective<source>` to `objective<target>`, where `source` type is detected implicitly. |
| `primitive_cast<target>` | Converts `objective<source>` object to primitive type `target`. `source` is detected implicitly. |
