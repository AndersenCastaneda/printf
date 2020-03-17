#include "holberton.h"

int _convert_int(va_list pa)
{
	int len = 0, num;

	num = va_arg(pa, int);
	len = _print_number(num);
	return (len);
}
