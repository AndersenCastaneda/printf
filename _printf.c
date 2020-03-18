#include "holberton.h"

/**
 * _printf - prints output according to the format
 * @format: input to print
 * Return: input's length or -1
 */
int _printf(const char *format, ...)
{
	int i, len = 0;
	va_list la;

	if (format == NULL)
		return (-1);

	va_start(la, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			while (format[i] && format[i] == ' ')
				i++;
			if (!format[i])
				return (-1);
			if (_charcmp(format[i]))
				len += print_selecter(&format[i])(la);
			else if (format[i] == '%')
			{
				len += _putchar(format[i]);
				continue;
			}
			else if (format[i] != '\0')
			{
				_putchar('%');
				_putchar(format[i]);
			}
		}
		else
		{
			_putchar(format[i]);
			len++;
		}
	}
	va_end(la);
	return (len);
}
