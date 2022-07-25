#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: the char
 *
 * Return: the array
 */
char *create_array(unsigned int size, char c)
{
	char *buffer;

	if (size == 0)
		return (0);
	buffer = malloc(sizeof(char) * size);

	if (buffer == 0)
		return (0);
	while (size--)
		buffer[size] = c;

	return (buffer);
}
