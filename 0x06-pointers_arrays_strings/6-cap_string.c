#include "main.h"
/**
 * has - checks to see if a string contains an item
 * @c: character
 *
 * Return: 1 or 0
 */
int has(char c)
{
	char *s = " \t\n,;.!?\"(){}";
	int a;

	a = 0;
	while (s[a] != '\0')
	{
		if (c == s[a])
			return (1);
		a++;
	}

	return (0);
}

/**
 * cap_string - capitalize all words
 * @s: the string
 *
 * Return: the changed string
 */
char *cap_string(char *s)
{
	int a;

	a = 0;
	while (s[a] != '\0')
	{
		if (has(s[a]) == 1 && s[a + 1] >= 97 && s[a + 1] <= 122)
		{
			s[a + 1] = s[a + 1] - 32;
		}
		a++;
	}
	return (s);
}
