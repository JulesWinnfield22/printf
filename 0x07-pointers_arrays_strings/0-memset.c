#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: the string to be changed
 * @b: the char thar is goinf to prepended to the string
 * @n: the amount
 *
 * Return: the changed string
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a;

	a = 0;

	while (a < n)
	{
		s[a] = b;
		a++;
	}

	return (s);
}
