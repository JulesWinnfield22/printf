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

	a = 1, b = 0;

	for (i = 0; i < 50; i++)
	{
		printf("%lu, ", a);

		t = b;
		b = a;
		a = a + t;
	}

	printf("\n");
	return (0);
}
