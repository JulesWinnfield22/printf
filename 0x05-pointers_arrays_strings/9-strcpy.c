#include "main.h"

/**
 * _strcpy - copies one string to another one
 * @dist: the destination
 * @src: the source of the string
 *
 * Return: a pointer to the copied string
 */
char *_strcpy(char *dist, char *src)
{
	char c;
	int a;

	c = src[0], a = 0;
	while (1)
	{
		dist[a] = c;
		if (c == '\0')
			break;
		a++;
		c = src[a];
	}

	return (dist);
}
