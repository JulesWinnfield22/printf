#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * wordCount - words in a string
 * @str: the string
 * @a: check if space or not
 * @c: count
 *
 * Return: the word count
 */
int wordCount(char *str, int a, int c)
{
	if (*str == ' ' || *str == '\t')
		a = 1;
	else if (c == 0 || a == 1)
	{
		a = 0;
		c++;
	}

	if (*str == '\0')
		return (c);

	return (wordCount((str + 1), a, c));
}

/**
 * pos - a words position in a string
 * @str: the string
 * @a: starting position
 *
 * Return: the position
 */
int pos(char *str, int a)
{
	if (*str != ' ' && *str != '\t')
		return (a);

	return (pos((str + 1), ++a));
}
/**
 * strtow - splits a string into words
 * @str: the string
 *
 * Return: a array of the words
 */
char **strtow(char *str)
{
	char **s;
	int a, b, c, p, length, wordLength;

	if (str == 0 || !*str)
		return (0);

	length = wordCount(str, 0, 0);

	s = malloc(sizeof(char) * length);

	p = 0, wordLength = 0;
	for (a = 0; a < length - 1; a++)
	{
		p = pos(str + p, p);

		wordLength = 0;
		while (str[p] != ' ' && str[p] != '\t' && str[p] != '\0')
		{
			wordLength++;
			p++;
		}

		s[a] = malloc(sizeof(char) * (wordLength + 1));

		b = p - wordLength;
		c = 0;
		while (b < p)
		{
			s[a][c] = str[b];
			b++;
			c++;
		}

		s[a][c] = '\0';
	}

	return (s);
}
