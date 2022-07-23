#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * isnum - ceck if its a number
 * @n: the string
 *
 * Return: 0 or 1
 */
int isnum(char *n)
{
	while (*n)
	{
		if (!isdigit(*n))
			return (0);
		n++;
	}
	return (1);
}
/**
 * main - entry point
 * @argc: argument count
 * @argv: the arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int sum, a;

	sum = 0, a = 1;
	if (argc < 2)
	{
		printf("%d\n", sum);
		return (0);
	}
	while (a < argc)
	{
		if (!isnum(argv[a]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[a]);
		a++;
	}

	printf("%d\n", sum);

	return (0);
}
