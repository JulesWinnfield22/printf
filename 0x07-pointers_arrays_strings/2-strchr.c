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
	int a, f;

	f = 0;
	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == c)
		{
			f = 1;
			break;
		}
	}

	return (f ? s + a : 0);
}
