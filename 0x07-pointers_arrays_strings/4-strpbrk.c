#include "main.h"

/**
 * has - checks for char in string
 * @s: string
 * @c: char
 *
 * Return: 1 or 0
 */
int has(char *s, char c)
{
	int a;

	while (*s)
	{
		if (*s == c)
			return (a || 0);
		s++;
		if (!a)
			a = 0;
		a++;
	}

	return (a);
}
/**
 *  _strpbrk - gets the substring of a string form the earliest char in c
 * @s: the string
 * @accept: the characters to look for
 *
 * Return: the string
 */
char *_strpbrk(char *s, char *accept)
{
	int a, pos;

	pos = 0;

	if (!s || !accept)
		return (0);

	while (*accept)
	{
		pos = has(s, *accept);
		if (!a && pos > -1)
			a = pos;
		else if (pos > -1 && pos < a)
			a = pos;
		accept++;
	}
	return (a && a > -1 ? s + a : 0);
}
