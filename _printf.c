#include "holberton.h"

int _printf(const char *format, ...)
{
	int len = 0;
	va_list pa;
	const char *str;

	if (!format)
		return (-1);

	va_start(pa, format);
	str = format;

	len += _print_handler(str, pa);

	va_end(pa);
	return (len);
}
