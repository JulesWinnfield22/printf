#include "main.h"

/**
 * print_numbers - prints numbers from 0 - 9
 *
 * Return: no return value
 */
void print_numbers(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		if (a != 49 && a != 51)
			_putchar(a);
	}
	_putchar('\n');
}
