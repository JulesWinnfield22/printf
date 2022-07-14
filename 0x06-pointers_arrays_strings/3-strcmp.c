#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 1 or -1 or 0
 */
int _strcmp(char *s1, char *s2)
{
	int val, a;

	val = 0;

	for (a = 0; s1[a] != '\0' && s2[a] != '\0'; a++)
	{
		if (s1[a] > s2[a])
			val = 1;
		else if (s1[a] < s2[a])
			val = -1;
		else
			continue;
		break;
	}
	return (val);
}
