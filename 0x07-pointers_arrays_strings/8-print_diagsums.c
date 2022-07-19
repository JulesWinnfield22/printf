#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals integers
 * @a: the array
 * @size: the array matrix size
 *
 * Return:  no return value
 */
void print_diagsums(int *a, int size)
{
	int c, d, sumA, sumB;

	sumA = 0, sumB = 0;
	for (c = 0, d = 1; c < size; c++, d++)
	{
		sumA += a[(size + 1) * c];
		sumB += a[(size - 1) * d];
	}

	printf("%d, %d\n", sumA, sumB);
}
