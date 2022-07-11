#include "main.h"
#include <stdio.h>
/**
 * len - length of a string
 * @s: the string
 *
 * Return: an int value
 */
int len(char *s)
{
	int a;
	char c;

	c = s[0];
	a = 0;
	while (c != '\0')
	{
		a++;
		c = s[a];
	}
	return (a);
}
/**
 * rev_string - prints the string to stdout in reverse
 * @s: the sring
 *
 * Return: an int value
 */
void rev_string(char *s)
{
	int length, a, b;
	char temp;

	length = len(s);

	for (a = 0, b = length - 1; a < length / 2; a++, b--)
	{
		temp = s[b];
		s[b] = s[a];
		s[a] = temp;
	}
}
