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
 * print_times_table - prints multiplication table of a given number
 * @n: the tables width
 *
 * Return: no return value
 */
void print_times_table(int n)
{
	int a, b, val;

	if (n > -1 && n < 16)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				val = a * b;

				if (b > 0)
				{
					_putchar(',');
					_putchar(' ');
				}

				if (val > 99)
				{
					print(val);
				} else if (val > 9 && val < 100)
				{
					_putchar(' ');
					print(val);
				} else
				{
					if (b > 0)
					{
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(val + '0');
				}
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
}
