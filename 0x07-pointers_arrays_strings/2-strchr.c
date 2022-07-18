#include "main.h"
/**
 * _strchr -  locates a character in a string.
 * @s: the string
 * @c: the character
 *
 * Return: the characters after the character
 */
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == c)
			break;
	}

	if (!*(s + a))
		return (0);
	return  (s + a);
}
