#include <unistd.h>
#include "main.h"

/**
 * times_table - prints multiplication table
 *
 * Return: no return value
 */
void times_table(void)
{
	int a, b, val, first, second;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			val = a * b;

			if (b > 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (val > 9)
			{
				first = val / 10;
				second = val % 10;

				_putchar(first + '0');
				_putchar(second + '0');
			} else
			{
				if (b > 0)
					_putchar(' ');
				_putchar(val + '0');
			}
		}
		_putchar('\n');
	}
}
