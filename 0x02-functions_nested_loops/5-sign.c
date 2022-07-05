#include <unistd.h>

#include "main.h"

/**
 * print_sign - prints the sign of the number
 * @c: the number which the sign will be printed for
 *
 * Return: 0 or -1 or 1
 */
int print_sign(int c)
{
	if (c == 0)
	{
		_putchar('0');
		return (0);
	} else if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	_putchar('-');
	return (-1);
}

