#include <unistd.h>
#include "main.h"

/**
 * print_last_digit - prints the digit of a number
 * @c: the number
 *
 * Return: any number
 */
int print_last_digit(int c)
{
	int val;

	val = c % 10;

	if (val < 0)
		val *= -1;

	_putchar(val + '0');
	return (val);
}
