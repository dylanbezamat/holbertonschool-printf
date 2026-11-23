# _printf

A custom implementation of the C standard library function `printf`.

## Prototype
`int _printf(const char *format, ...);`

## Supported conversion specifiers
| Specifier | Output |
| --- | --- |
| `%c` | a single character |
| `%s` | a string (`(null)` if the string is NULL) |
| `%%` | a literal `%` |

## Return value
The number of characters printed, or `-1` on error.

## Compilation
`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c`

## Authors
Dylan Bezamat
Jean-Patient Lucenay
