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
	unsigned char *p = s;

	while (n--)
		*p++ = (unsigned char)b;

	return (s);
}
