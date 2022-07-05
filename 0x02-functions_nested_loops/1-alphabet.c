#include <unistd.h>

#include "main.h"

/**
 * print_alphabet - prints all off the alphabets
 *
 * Return: no return value
 */
void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}

	_putchar('\n');
}
