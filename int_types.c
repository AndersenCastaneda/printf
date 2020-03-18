#include "holberton.h"
/**
 * print_number - function to print an integer
 * @la: input to print
 * Return: int
 */
int print_number(va_list la)
{
	int num, i, j, len = 0;
	unsigned int ui;

	num = va_arg(la, int);
	if (num < 0)
	{
		_putchar('-');
		num *= -1;
		len++;
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
int print_uint(va_list la)
{
	unsigned int n, m, i, k, digits = 0;

	n = va_arg(la, unsigned int);
	m = n;
	k = 0;
	while (m / 10 > 0)
	{
		m /= 10;
		k++;
	}
	m = n;
	while (k != 0)
	{
		for (i = 0; i < k; i++)
		{
			m /= 10;
		}
		m %= 10;
		_putchar(m + '0');
		digits++;
		k--;
		m = n;
	}
	_putchar(m % 10 + '0');
	digits++;
	return (digits);
}

/**
 * print_binary - convert an int to a binary
 * @la: input to convert and print
 * Return: int
 */
int print_binary(va_list la)
{
	int i = 0, j;
	char bnry [10000] = {'\0'};
	unsigned int k;

	k = va_arg(la, unsigned int);
	if (k == 0)
	{
		_putchar('0');
		return (1);
	}
	while (k > 0)
	{
		bnry[i] = k % 2;
		k /= 2;
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
