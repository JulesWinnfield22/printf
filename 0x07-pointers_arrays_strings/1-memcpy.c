#include "main.h"

/**
 * _memcpy  - copies from one string to another
 * @dest: the string to be changed
 * @src: the tring to copy from
 * @n: the amount
 *
 * Return: the changed string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	a = 0;
	for (; a < n && src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}

	return (dest);
}
