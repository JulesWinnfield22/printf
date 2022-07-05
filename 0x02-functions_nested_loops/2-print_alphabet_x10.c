#include <unistd.h>

#include "main.h"

/**
 * print_alphabet - prints all off the alphabets
 *
 * Return: no return value
 */
void print_alphabet_x10(void)
{
	int a, c;

	for (c = 0; c < 10; c++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}

		_putchar('\n');
	}
}
