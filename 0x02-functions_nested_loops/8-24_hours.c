#include <unistd.h>
#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: no return value
 */
void jack_bauer(void)
{
	int hour, min, first, second, third, fourth;

	for (hour = 0; hour < 24; hour++)
	{
		first = 0;
		second = hour;
		if (hour > 9)
		{
			first = hour / 10;
			second = hour % 10;
		}

		for (min = 0; min < 60; min++)
		{
			third = 0;
			fourth = min;
			if (min > 9)
			{
				third = min / 10;
				fourth = min % 10;
			}

			_putchar(first + '0');
			_putchar(second + '0');
			_putchar(':');
			_putchar(third + '0');
			_putchar(fourth + '0');
			_putchar('\n');
		}
	}
}
