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
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 *
 * Return: the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	char c;
	int a, length;

	c = src[0];
	length = len(dest), a = 0;

	while (1)
	{
		dest[length] = c;
		if (c == '\0')
			break;
		length++;
		a++;
		c = src[a];
	}
	return (dest);
}
