#include "main.h"

/**
 * _strlen - return the length of the string
 * @s: the sring
 *
 * Return: an int value
 */
int _strlen(char *s)
{
	int b;
	char c;

	b = 0, c = s[0];

	while (c != '\0')
	{
		b++;
		c = s[b];
	}

	return (b);
}
