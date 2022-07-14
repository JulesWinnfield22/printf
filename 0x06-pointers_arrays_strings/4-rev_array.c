#include "main.h"
/**
 * reverse_array - reverse an array
 * @a: the array
 * @n: the length of an array
 *
 * Return: no return value
 */
void reverse_array(int *a, int n)
{
	int c, b;

	for (c = 0; c <= n / 2; c++, n--)
	{
		b = a[c];
		a[c] = a[n - 1];
		a[n - 1] = b;
	}
}
