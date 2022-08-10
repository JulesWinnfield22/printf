#include <stdarg.h>
#include "main.h"
/**
 * print_string - prints strings
 * @arg: e string
 *
 * Return: string count
 */
int print_string(va_list arg)
{
	int a;
	char *c;

	c = va_arg(arg, char *);

	if (!c)
		return (-1);

	while (*c)
	{
		_putchar(*c);
		c++;
		a++;
	}
	return (a);
}

/**
 * print_char - prints a char
 * @arg: the char
 *
 * Return: always 1
 */
int print_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);

	if (!c)
		return (-1);

	_putchar(c);

	return (1);
}

