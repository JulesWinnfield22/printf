#include "main.h"
/**
 * leet - encodes a string into 1337.
 * @s: the string
 *
 * Return: the changed string
 */
char *leet(char *s)
{
	int a;

	a = 0;
	while (s[a] != '\0')
	{
		(s[a] == 'a' || s[a] == 'A') && (s[a] = '4');
		(s[a] == 'e' || s[a] == 'E') &&	(s[a] = '3');
		(s[a] == 'o' || s[a] == 'O') && (s[a] = '0');
		(s[a] == 't' || s[a] == 'T') && (s[a] = '7');
		(s[a] == 'l' || s[a] == 'L') && (s[a] = '1');
		a++;
	}
	return (s);
}
