#include "holberton.h"

/**
 * format_handler - call a specific function to print
 *                        a specific type of variable
 * @c: char to compare
 * Return: A specific function or NULL
 */
int (*format_handler(const char c))(va_list)
{
	int i;

	handler_t handler[] = {
		{'c', _print_char},
		{'s', _print_string},
		{'d', handler_int},
		{'i', handler_int},
		{'u', handler_int},
		{'%', _print_perc},
		{0, 0}
	};

	for (i = 0; handler[i].c; i++)
	{
		if (c == handler[i].c)
			return (handler[i].f);
	}

	return (NULL);
}

/**
 * _printf - print according to the format
 * @format: input (char, string, decimal, int)
 * Return: length of the printed text
 */
int _printf(const char *format, ...)
{
	int i, len = 0;
	int (*f)(va_list);
	va_list al;

	if (!format)
		return (-1);

	va_start(al, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			while (format[i] && format[i] == ' ')
				i++;
			/*if i come to the end of the string*/
			if (!format[i])
				return (-1);

			f = format_handler(format[i]);
			if (f)
			{
				len += f(al);
			}
			else
			{
				len += _print_perc(al);
				if (!f && format[i - 1] == ' ')
					len += _write(' ');
				len += _write(format[i]);
			}
		}
		else
		{
			len += _write(format[i]);
		}
	}
	va_end(al);
	return (len);
}
