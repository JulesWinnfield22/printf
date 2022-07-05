#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	long int a, b, i, t;

	a = 1, b = 1;

	for (i = 0; i < 98; i++)
	{
		printf("%lu", a);
		if (i < 97)
			printf(", ");

		t = b;
		b = a;
		a = a + t;
	}

	printf("\n");
	return (0);
}
