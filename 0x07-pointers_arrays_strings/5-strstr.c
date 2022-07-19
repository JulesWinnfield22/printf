#include "main.h"
/**
 * _strstr - gets the substring
 * @haystack: the string
 * @needle: the substring
 *
 * Return: the substring
 */
char *_strstr(char *haystack, char *needle)
{
	int a, h, n, length;
	
	if (!haystack || !needle)
		return (0);

	a = 0, h = 0, n = 0, length = 0;
	while (needle[length])
		length++;

	while (haystack[a] != '\0')
	{
		if (haystack[a] == needle[n])
		{
			h = a, n = 0;
			while (haystack[h] == needle[n])
			{
				h++;
				n++;
			}
			if ((n - 1) == length)
				return (haystack + a);
		}
		a++;
	}
	return (0);
}
