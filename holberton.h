#ifndef PRINTF_H
#define PRINTF_H

#include <stdarg.h>

typedef struct print_handler
{
	char c;
	int (*f)(va_list);
} handler;

int _write_char(char c);

int _printf(const char *format, ...);
int _print_handler(const char *format, va_list pa);
int _print_char(va_list pa);
int _print_string(va_list pa);
int _convert_int(va_list pa);
int _print_number(int num);
int _print_perc(char c);

#endif
