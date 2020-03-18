#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct printSelecter - format/function handler
 * @c: char format
 * @f: function
 * Description: Longer description
 */
typedef struct printSelecter
{
	char *c;
	int (*f)(va_list);
} printSelecter;

int _printf(const char *format, ...);
int (*print_selecter(const char *s))(va_list);

int _charcmp(char c);
int _putchar(char c);

int _print_char(va_list);
int _print_string(va_list la);

int print_number(va_list la);
int print_number(va_list la);
int print_uint(va_list la);
int print_binary(va_list la);

#endif
