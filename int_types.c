#include "holberton.h"
/**
 * print_number - function to print an integer
 * @la: input to print
 * Return: int
 */
int _print_number(va_list la)
{
	int num, i, j, len = 0;
	unsigned int ui;

	num = va_arg(la, int);
	if (num < 0)
	{
		_putchar('-');
		len++;
		num = -num;
	}
	ui = num;
	j = 0;
	while (ui / 10 > 0)
	{
		ui /= 10;
		j++;
	}
	ui = num;
	while (j != 0)
	{
		for (i = 0; i < j; i++)
		{
			ui /= 10;
		}
		ui %= 10;
		_putchar(ui + '0');
		len++;
		j--;
		ui = num;
	}
	_putchar(ui % 10 + '0');
	len++;
	return (len);
}

/**
 * print_uint - print an unsigned int
 * @la: input to print
 * Return: int
 */
int _print_uint(va_list la)
{
	unsigned int num, ui, i, j, len = 0;

	num = va_arg(la, unsigned int);
	ui = num;
	j = 0;
	while (ui / 10 > 0)
	{
		ui /= 10;
		j++;
	}
	ui = num;
	while (j != 0)
	{
		for (i = 0; i < j; i++)
		{
			ui /= 10;
		}
		ui %= 10;
		_putchar(ui + '0');
		len++;
		j--;
		ui = num;
	}
	_putchar(ui % 10 + '0');
	len++;
	return (len);
}

/**
 * print_binary - convert an int to a binary
 * @la: input to convert and print
 * Return: int
 */
int _print_binary(va_list la)
{
	int i = 0, j;
	char bnry [10000] = {'\0'};
	unsigned int ui;

	ui = va_arg(la, unsigned int);
	if (ui == 0)
	{
		_putchar('0');
		return (1);
	}
	while (ui > 0)
	{
		bnry[i] = ui % 2;
		ui /= 2;
		i++;
	}
	j = i - 1;
	while (j >= 0)
	{
		_putchar(bnry[j] + '0');
		j--;
	}
	return (i);
}
