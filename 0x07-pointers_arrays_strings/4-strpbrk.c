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
	int a, b, pos, flg;

	a = 0, b = 0, pos = 0, flg = 0;

	while (*(s + a))
		a++;

	pos = a;
	a = 0;

	while (*(accept + a))
	{
		b = 0;
		while (*(s + b))
		{
			if (accept[a] == s[b])
			{
				if (b <= pos)
				{
					pos = b;
					flg = 1;
				}
			}
			b++;
		}
		a++;
	}

	if (flg == 1)
		return (&s[pos]);

	return (0);
}
