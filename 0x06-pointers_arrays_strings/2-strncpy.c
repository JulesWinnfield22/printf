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
 * _strncpy - copie second string on to first string untill n
 * @dest: first string
 * @src: second string
 * @n: amount of bytes
 *
 * Return: the concatenated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a, destLength, srcLength;

	destLength = len(dest), srcLength = len(src), a = 0;

	while (a < n)
	{
		dest[a] = src[a];
		if (src[a] == '\0' && srcLength < destLength)
		{
			while (a < destLength)
			{
				dest[a] = '\0';
				a++;
			}
			break;
		} else if (src[a] == '\0')
		{
			break;
		}
		a++;
	}
	return (dest);
}
