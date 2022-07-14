#include "main.h"
/**
 * rot13 - chages a string to rot13
 * @s: the string
 *
 * Return: the changed string
 */
char *rot13(char *s)
{
	int a;

	a = 0;
	while (s[a] != '\0')
	{
		if ((s[a] >= 97 && s[a] <= 122) || (s[a] >= 65 && s[a] <= 90))
		{
			if (s[a] > 109 || (s[a] > 77 && s[a] < 91))
			{
				s[a] -= 13;
			} else
			{
				s[a] += 13;
			}
		}
		a++;
	}

	return (s);
}
