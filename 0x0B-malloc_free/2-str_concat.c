#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * len - get the length of a string
 * @s: the string
 *
 * Return: an int
 */
int len(char *s)
{
	int length;

	length = 0;

	if (s != NULL)
	{
		while (s[length])
			length++;
	}

	return (length);
}
/**
 * str_concat - concatenates two strings.
 * @s1: the 1st string
 * @s2: the 2nd string
 *
 * Return: the string
 */
char *str_concat(char *s1, char *s2)
{
	char *buffer;
	int a, s1Len, s2Len;

	a = 0, s1Len = 0, s2Len = 0;

	s1Len = len(s1);
	s2Len = len(s2);

	buffer = malloc(sizeof(*s1) * (s1Len + s2Len + 1));

	if (buffer == 0)
		return (0);

	while (a < s1Len)
	{
		buffer[a] = *s1;
		a++;
		s1++;
	}

	while (s2Len)
	{
		buffer[a] = *s2;
		if (*s2 == '\0')
			break;

		a++;
		s2++;
	}

	if (s2Len == 0)
		buffer[a] = '\0';
	return (buffer);
}
