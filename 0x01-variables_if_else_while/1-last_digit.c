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
	char type[40];
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastDigit = n % 10;

	if (lastDigit == 0)
	{
		strcpy(type, "and is 0");
	} else if (lastDigit < 6)
	{
		strcpy(type, "and is less than 6 and not 0");
	} else if (lastDigit > 5)
	{
		strcpy(type, "and is greater than 5");
	}

	printf("Last digit of %d is %d %s\n", n, lastDigit, type);

	return (0);
}
