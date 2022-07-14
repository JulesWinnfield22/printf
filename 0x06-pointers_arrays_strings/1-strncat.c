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
 * _strncat - concatenates two strings untill n
 * @dest: first string
 * @src: second string
 * @n: amount of bytes
 *
 * Return: the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	char c;
	int a, length;

	if (n > 0)
		c = src[0];
	length = len(dest), a = 0;

	while (a < n)
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
