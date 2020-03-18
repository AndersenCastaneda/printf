#include "holberton.h"

/**
 * print_selecter - find the correct print function to call
 * @s: char to compare
 * Return: pointer to a function that returns an int or NULL
 */
int (*print_selecter(const char *s))(va_list)
{
	int i;

	/*Array of funcionts*/
	printSelecter printTypes[] = {
		{"c", _print_char},
		{"s", _print_string},
		{"d", _print_number},
		{"i", _print_number},
		{"b", _print_binary},
		{"u", _print_uint},
		{NULL, NULL}};

	/*Loop trough the array to find a coincidence*/
	for (i = 0; printTypes[i].c; i++)
	{
		/*if there is a coincidence*/
		/*return the functions corresponding*/
		if (*s == *printTypes[i].c)
			return (printTypes[i].f);
	}
	/*if there is not a coincidence, return NULL*/
	return (NULL);
}
