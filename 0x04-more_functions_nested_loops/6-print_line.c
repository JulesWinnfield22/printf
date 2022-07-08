#include "main.h"

/**
 * print_line - prints lines
 * @n: amount
 *
 * Return: no return value
 */
void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
