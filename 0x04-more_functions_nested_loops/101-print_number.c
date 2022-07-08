#include "main.h"

/**
 * print - writes a number to stdout by recursion
 * @c: the number to write
 *
 * Return: no return value
 */
void print(int c)
{
	int val;

	if (c / 10)
		print(c / 10);

	val = c % 10;

	if (val < 0)
	{
		_putchar((val *= -1) + '0');
	} else
	{
		_putchar(val + '0');
	}
}

/**
 * print_number - prints numbers
 * @n: the number
 *
 * Return: no return value
 */

void print_number(int n)
{
	print(n);
}
