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
 * print_rev - prints the string to stdout in reverse
 * @s: the sring
 *
 * Return: an int value
 */
void print_rev(char *s)
{

	int length;
	char c;

	length = len(s);
	c = s[length - 1];

	while (length - 1 >= 0)
	{
		_putchar(c);
		length--;
		c = s[length - 1];
	}
	_putchar('\n');
}
