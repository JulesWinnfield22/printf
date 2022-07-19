#include "main.h"
/**
 * compare - find a substring
 * @haystack: the string
 * @needle: the substring
 *
 * Return: an integer
 */
int compare(char *haystack, char *needle)
{
	while (*haystack && *needle)
	{
		if (*haystack != *needle)
			return (0);
		haystack++;
		needle++;
	}

	return (*needle == '\0');
}
/**
 * _strstr - gets the substring
 * @haystack: the string
 * @needle: the substring
 *
 * Return: the substring
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if ((*haystack == *needle) && compare(haystack, needle))
		{
			return (haystack);
		}
		haystack++;
	}
	return (0);
}
