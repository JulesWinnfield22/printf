#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: Always (0)
 */
int main(void)
{
	int n;
	char type[20];

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
	{
		strcpy(type, "is zero");
	} else if (n > 0)
	{
		strcpy(type, "is positive");
	} else
	{
		strcpy(type, "is negative");
	}

	printf("%d %s\n", n, type);

	return (0);
}
