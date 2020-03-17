#include "holberton.h"

int _print_char(va_list al)
{
	char c = va_arg(al, int);

	return (_write(c));
}

int _print_string(va_list al)
{
	char *str = va_arg(al, char *);
	int i = 0;

	for (i = 0; str[i]; i++)
	{
		_write(str[i]);
	}
	return (i);
}

int _print_number(int num)
{
	int count = 0;

	if (num < 0)
	{
		_write('-');
		num = -num;
	}

	if (num / 10)
		count += _print_number(num / 10);

	return (_write((num % 10) + '0') + count);
}

int handler_int(va_list al)
{
        int num = va_arg(al, int);
        int len = 0;

        len = _print_number(num);
        return (len);
}

int _print_perc(va_list al)
{
	(void)al;
	return (_write('%'));
}
