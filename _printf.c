#include "holberton.h"

/**
 * format_handler - call a specific function to print
 *                        a specific type of variable
 * @format: char to compare
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

	/*Loop through the array of structures to find a match    */
	/*between the received character and that of the structure*/
	for (i = 0; handler[i].c; i++)
	{
		/*if there is a coincidence, return the function*/
		/*associated with the character           */
		if (c == handler[i].c)
			return (handler[i].f);
	}

	/*if there is no match, return NULL*/
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

	/*if is NULL to print*/
	if (!format)
		return (-1);

	/*initialize argument list*/
	va_start(al, format);

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			while (format[i] && format[i] == ' ')
				i++;

			if(!format[i])
				return (-1);

			/*Call my handler to check the char*/
			f = format_handler(format[i]);

			if (f)
			{
				/*get the length of the variable to print*/
				len += f(al);

			}
			else
			{
				len += _print_perc(al);
				len += _write(format[i]);
			}
		}
		else
		{
			len += _write(format[i]);
		}
/*
		if the char is equal to '%' and there is not coincidence
		if (format[i] == '%' && !f)
		{
			Call print percentage
			len += _print_perc(al);
		}
*/
	}
	/*frees the argument list*/
	va_end(al);
	return (len);
}
