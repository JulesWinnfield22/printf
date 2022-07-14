#include "main.h"
/**
 * len - the length of the string
 * @s: the string
 *
 * Return: any integer greater than or eqal to 0
 */
int len(char *s)
{
	int length;
	char c;

	length = 0, c = s[0];

	while (c != '\0')
	{
		length++;
		c = s[length];
	}

	return (length);
}
/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 15 or -15 or 0
 */
int _strcmp(char *s1, char *s2)
{
	int val, a;

	val = 0;

	for (a = 0; s1[a] != '\0' && s2[a] != '\0'; a++)
	{
		if (s1[a] > s2[a])
			val = 15;
		else if (s1[a] < s2[a])
			val = -15;
		else
			continue;
		break;
	}
	return (val);
}
