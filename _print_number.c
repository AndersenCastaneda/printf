#include "holberton.h"

/**
 * print_number - Entry point
 * @num: input
 * Return: Always 0 (Success)
 */
int _print_number(int num)
{
	int count = 0;

	if (num < 0)
	{
		_write_char('-');
		num = -num;
	}

	if (num / 10)
		count += _print_number(num / 10);

	return (_write_char((num % 10) + '0') + count);
}