# Printf

Printf is a function which allows to print different formats such as char, string, integer, binary and other formats. Handles the conversion from decimal to binary.

## Installation

1. Download this repository to your directory.

```bash
- holberton.h
- _printf.c
- _print_selecter.c
- int_types.c
- string_types.c
- man_3_printf
```

2. Import the header file where you need it.

```bash
 #include "holberton.h"
```

## Usage

As you import header file already you can use it.

_Prototype_
```c
int _printf(const char *format, ...)
```
_printf_ Example
```c
#include "holberton.h"

int main(void)
{
	_printf("Let's try to printf a simple sentence.\n");
	return (0);
}//output:Let's try to printf a simple sentence
```
Supported convention.

| Format | Description  |
| ------- | --- |
| Char | %c: Print a char|
| String | %s: Print a string |
| Int | %d: Print an integer |
| Int | %i: Print an integer |
| Unsigned | %u: Print an unsigned integer |
| Binary | %b: Convert an integer to binary number |
# Return

If everything is successful the function returns the num of chars printed. Otherwise return -1. 

## License
[Holberton School](https://www.holbertonschool.com/)

## Authors
- Andersen Castañeda [@AndersenCastaneda](https://www.github.com/AndersenCastaneda)
- Daniel Chica  [@danielchk](https://www.github.com/danielchk)