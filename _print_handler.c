#include "holberton.h"

int _print_handler(const char *format, va_list pa)
{
	int i = 0, j = 0, len = 0;
	handler f_handler[] = {
		{'c', _print_char},
		{'s', _print_string},
		{'d', _convert_int},
		{'%', _print_perc}
	};

	while (format[i])
	{
		/*check if format[i] is %*/
		if (format[i] == '%')
		{
			while (f_handler[j].c)
			{
				if (f_handler[j].c == format[i + 1])
				{
					len += f_handler[j].f(pa);
					i++;
					break;
				}
				j++;
			}
		}
		else
		{/*if not print the character*/
			_write_char(format[i]);
			if (format[i] != '\n' ||
				format[i] != '\t' ||
				format[i] != '\b')
				len++;
		}
		i++;
	}

	return (len);
}
