#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * len - get string length
 * @s: the string,
 *
 * Return: the length
 */
int len(char *s)
{
	int length;

	length = 0;

	while (s[length])
		length++;

	return (length);
}
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: the byte to concatenate
 *
 * Return: the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	int s1Len, a, b;

	s1Len = len(s1);
	a = 0;

	concat = malloc(sizeof(char) * (s1Len + n) + 1);

	if (concat == NULL)
		return (0);

	while (s1[a])
	{
		concat[a] = s1[a];
		a++;
	}

	b = 0;
	while (n--)
	{
		concat[a] = s2[b];
		a++;
		b++;
	}
	concat[a] = '\0';
	return (concat);
}
