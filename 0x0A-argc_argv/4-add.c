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
	if (*n == '\0')
		return (1);
	if (isdigit(*n) != 0)
		return (isnum((n + 1)));
	return (0);
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
	int sum;

	sum = 0;
	if (argc < 2)
	{
		printf("%d\n", sum);
		return (0);
	}
	while (argc--)
	{
		if (!isnum(argv[argc]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(*argv++);
	}

	printf("%d\n", sum);

	return (0);
}
