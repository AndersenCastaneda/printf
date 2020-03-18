#include "holberton.h"

/**
 * _print_char - print a any char
 * @al: argument list (va_list)
 * Return: char count
 */
int _print_char(va_list al)
{
	char c = va_arg(al, int);

	return (_write(c));
}

/**
 * _print_string - print a string (char *)
 * @al: argument list (va_list)
 * Return: string's length
 */
int _print_string(va_list al)
{
	char *str = va_arg(al, char *);
	int i = 0;

	if (!str)
		str = "(nil)";

	for (i = 0; str[i]; i++)
	{
		_write(str[i]);
	}
	return (i);
}

/**
 * _print_number - print a number recursively
 * @num: number to print
 * Return: int's length
 */
int _print_number(int num)
{
	int count = 0;
	unsigned int x;

	if (num < 0)
	{
		_write('-');
		x = -num;
	}
	else
	{
		x = num;
	}

	if (x / 10)
		count += _print_number(x / 10);

	return (_write((x % 10) + '0'));
}

/**
 * handler_int - assign a lv_list to an int
 * and call _print_number to print the va_list argument
 * @al: argument list (va_list)
 * Return: length of the int
 */
int handler_int(va_list al)
{
	int num = va_arg(al, int);
	int len = 0;

	len = _print_number(num);
	return (len);
}
