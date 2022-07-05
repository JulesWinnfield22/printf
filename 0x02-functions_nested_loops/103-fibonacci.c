#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	long int a, b, i, t, sum;

	a = 1, b = 1, sum = 0;
	for (i = 0; i < 50; i++)
	{
		if (a > 4000000)
			break;

		if (a % 2 == 0)
			sum += a;

		t = b;
		b = a;
		a = a + t;
	}

	printf("%lu\n", sum);
	return (0);
}
