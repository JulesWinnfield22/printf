#include "main.h"

/**
 * _puts_recursion - prints a string to stdout
 * @s: the string to print
 *
 * Return: no return value
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
