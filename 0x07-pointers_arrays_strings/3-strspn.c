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
	while (*s != '\0')
	{
		if (*s == c)
			return (0);
		s++;
	}

	return (1);
}
/**
 *  _strspn - gets the length of a prefix substring
 * @s: the string
 * @accept: the character to count
 *
 * Return: the characters length
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, length;

	a = 0, length = 0;
	while (s[a] != '\0')
	{
		if (has(accept, s[a]))
			length++;
		a++;
	}

	return (length);
}
