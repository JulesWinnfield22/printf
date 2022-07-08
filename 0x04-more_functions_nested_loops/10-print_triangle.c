#include "main.h"

/**
 * print_triangle - prints draws triangle
 * @size: the size of the triangle
 *
 * Return: no return value
 */
void print_triangle(int size)
{
	int a, b;

	if (size <= 0)
		_putchar('\n');

	for (a = 1; a <= size; a++)
	{
		for (b = a; b < size; b++)
		{
			_putchar(' ');
		}
		for (b = 0; b < a; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
