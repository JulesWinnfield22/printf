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
	char c;

	length = len(s);

	if (length % 2 == 0)
	{
		c = s[length / 2];
		a = length / 2;
	} else
	{
		c = s[(length - 1) / 2];
		a = (length - 1) / 2;
	}
	while (a < length)
	{
		_putchar(c);
		a++;
		c = s[a];
	}
	_putchar('\n');
}
