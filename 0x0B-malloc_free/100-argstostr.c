#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: arguments count
 * @av: arguments
 *
 * Return: the new string
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int a, b, c;

	if (ac == 0 || av == 0)
		return (0);

	a = 0, c = 0;
	while (av[a])
	{
		b = 0;
		while (av[a][b])
		{
			b++;
			c++;
		}
		a++;
	}

	str = malloc(sizeof(char) * (c + ac));

	if (str == 0)
		return (0);

	a = 0, c = 0;
	while (av[a])
	{
		b = 0;
		while (av[a][b])
		{
			str[c] = av[a][b];
			b++;
			c++;
		}
		str[c] = '\n';
		c++;
		a++;
	}
	return (str);
}
