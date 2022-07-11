#include "main.h"

/**
 * puts2 - prints every other prints
 * @s: the string
 *
 * Return: no return value
 */
void puts2(char *s)
{
	int a;
	char c;

	c = s[0];
	a = 0;

	while (c != '\0')
	{
		if (a % 2 == 0)
		{
			_putchar(c);
		}
		a++;
		c = s[a];
	}
	_putchar('\n');
}
