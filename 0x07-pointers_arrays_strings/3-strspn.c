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
			return (1);
		s++;
	}

	return (0);
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
	unsigned int length;

	length = 0;

	if (!s || !accept)
		return (length);

	while (*s != '\0')
	{
		if (has(accept, *s))
			length++;
		s++;
	}

	return (length);
}
