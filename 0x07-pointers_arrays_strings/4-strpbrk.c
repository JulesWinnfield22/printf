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
	int a, f;

	f = 0;
	while (*s)
	{
		if (*s == c && f == 0)
			return (0);
		else if (*s == c)
			return (a);

		if (f == 0)
			a = 0;
		f = 1;
		a++;
		s++;
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
	int a, pos, f;

	pos = 0, f = 0;

	if (!s || !accept)
		return (0);

	while (*accept)
	{
		pos = has(s, *accept);
		if (f == 0 && pos > -1)
		{
			a = pos;
			f = 1;
		} else	if (pos < a && f == 1)
			a = pos;
		accept++;
	}

	return (s + a);
}
