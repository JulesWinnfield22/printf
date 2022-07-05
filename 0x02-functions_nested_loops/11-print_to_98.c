#include <unistd.h>

#include "main.h"

/**
 * print - writes a number to stdout by recursion
 * @c: the number to write
 *
 * Return: no return value
 */
void print(int c)
{
	if (c / 10)
		print(c / 10);

	_putchar(c % 10 + '0');
}
/**
 * print_to_98 - prints numbers upto 98
 * @a: starting point
 *
 * Return: no rerurn val
 */
void print_to_98(int a)
{
	int start;

	for (start = a; start != 98;)
	{
		print(start);
		_putchar(',');
		_putchar(' ');

		a > 98 ? start-- : start++;
	}

	print(98);
	_putchar('\n');
}

