#include "holberton.h"

int _print_char(va_list pa)
{
	char c = va_arg(pa, int);

	_write_char(c);
	return (1);
}
