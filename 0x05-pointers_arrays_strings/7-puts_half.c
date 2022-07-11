#include "main.h"

/**
 * len - length of a string
 * @s: the string
 *
 * Return: an int value
 */
int len(char *s)
{
	int a;
	char c;

	a = 0, c = s[0];

	while (c != '\0')
	{
		a++;
		c = s[a];
	}

	return (a);
}
/**
 * puts_half - prints the last half of the string to stdout
 * @s: the sring
 *
 * Return: no return value
 */
void puts_half(char *s)
{

	int length, a;

	length = len(s);

	if (length % 2 == 0)
	{
		a = (length / 2) + 1;
	} else
	{
		a = (length - 1) / 2;
	}
	while (a < length)
	{
		_putchar(s[a]);
		a++;
	}
	_putchar('\n');
}
