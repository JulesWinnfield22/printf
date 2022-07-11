#include "main.h"

/**
 * _puts - prints the string to stdout
 * @s: the sring
 *
 * Return: an int value
 */
void _puts(char *s)
{
	int b;
	char c;

	c = s[0], b = 0;

	while (c != '\0')
	{
		_putchar(c);
		b++;
		c = s[b];
	}
	_putchar('\n');
}
