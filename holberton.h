#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdlib.h>

/**
 * struct prit_handler - format/function handler
 * @c: char format
 * @f: function
 * Description: longer description
 */
typedef struct print_handler
{
	char c;
	int (*f)(va_list);
} handler_t;

int _write(char c);
int _printf(const char *format, ...);
int _print_char(va_list al);
int _print_string(va_list al);
int handler_int(va_list al);
int _print_number(int num);
int _print_perc(va_list al);

#endif
