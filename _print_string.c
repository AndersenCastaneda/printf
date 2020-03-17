#include "holberton.h"

int _print_string(va_list pa)
{
	int i;
	char *str;

	str = va_arg(pa, char *);

	for (i = 0; str[i] != '\0'; i++)
	{
		_write_char(str[i]);
	}
	return (i);
}
