#include "main.h"
/**
 * string_toupper - chages a string to uppercase
 * @s: the string
 *
 * Return: the changed string
 */
char *string_toupper(char *s)
{
	int a;

	a = 0;
	while (1)
	{
		if (s[a] >= 97 && s[a] <= 122)
			s[a] = s[a] - 32;
		if (s[a] == '\0')
			break;
		a++;
	}

	return (s);
}
