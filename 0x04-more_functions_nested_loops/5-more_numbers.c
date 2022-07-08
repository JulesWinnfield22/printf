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
 * more_numbers - prints numbers from 0 - 9
 *
 * Return: no return value
 */
void more_numbers(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			print(b);
		}
		_putchar('\n');
	}
}
