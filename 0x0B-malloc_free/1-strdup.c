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
	int a;

	a = 0;

	if (!str)
		return (0);

	buffer = malloc(sizeof(*str));

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
