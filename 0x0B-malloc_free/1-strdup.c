#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * @str: the string to copy
 *
 * Return: the copied string
 */
char *_strdup(char *str)
{
	char *buffer;
	int a, length;

	a = 0, length = 0;

	if (str == NULL)
		return (0);

	while (str[length])
		length++;

	buffer = malloc(sizeof(*str) * length + 1);

	if (buffer == 0)
		return (0);
	while (*str)
	{
		buffer[a] = *str;
		a++;
		str++;
	}
	return (buffer);
}
