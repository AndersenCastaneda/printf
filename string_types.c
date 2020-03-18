#include <unistd.h>
#include "holberton.h"

/**
 * _charcmp - compare a char to a specific char
 * @c: char to compare
 * Return: 1 if is a coincidence, 0 otherwise
 */
int _charcmp(char c)
{
	int i = 0;

	if (c == 'c' || c == 's' || c == 'd' || c == 'i' ||
		c == 'b' || c == 'u')
		i = 1;

	return (i);
}

/**
 * _putchar - print a character to stdout
 * @c: input to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _print_char - print a character
 * @la: list of arguments
 * Return: num of characters printed
 */
int _print_char(va_list la)
{
	char c;

	c = va_arg(la, int);
	_putchar(c);
	return (1);
}

/**
 * _print_string - print a string, char by char
 * @la: list of arguments
 * Return: string length (characters printed)
 */
int _print_string(va_list la)
{
	int i;
	char *str;

	str = va_arg(la, char *);

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}
