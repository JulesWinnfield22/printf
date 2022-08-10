#include <stdarg.h>
#include "main.h"
#include <stdio.h>
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
 * printInt - prints integers
 * @n: the integer
 * @length: the integer length
 *
 * Return: the length
 */
int printInt(int n, int length)
{
	if (n < 0)
	{
		++length;
		_putchar('-');
		n = -n;
	}

	if (n == 0)
	{
		_putchar('0');
		++length;
	}

	if (n / 10)
		length = printInt(n / 10, ++length);

	_putchar((n % 10) + '0');

	return (1 + length);
}

/**
 * print_int - prints an integer
 * @arg: the int
 *
 * Return: the interger length
 */
int print_int(va_list arg)
{
	int a, length;

	a = va_arg(arg, int);
	if (!a)
		return (-1);

	length = 0;

	length += printInt(a, length);

	return (length);
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

