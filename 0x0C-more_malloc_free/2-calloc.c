#include "main.h"
#include <stdlib.h>
#include <stdio.h>
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
	unsigned int a;

	a = 0;
	while (a < n)
	{
		s[a] = b;
		a++;
	}
	return (s);
}
/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: # of elements
 * @size: the size of the elements
 *
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;

	if (nmemb <= 0 || size <= 0)
		return (0);

	arr = malloc(nmemb * size);

	if (arr == 0)
		return (0);

	return (_memset(arr, 0, nmemb * size));
}
