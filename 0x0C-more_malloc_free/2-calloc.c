#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: # of elements
 * @size: the size of the elements
 *
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (nmemb <= 0 || size <= 0)
		return (0);

	arr = malloc(nmemb * size);

	if (arr == 0)
		return (0);

	return (arr);
}
