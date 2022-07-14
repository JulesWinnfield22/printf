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
	int c, b, tmp;

	for (c = 0, b = n - 1; c <= n / 2; c++, b--)
	{
		tmp = a[c];
		a[c] = a[b];
		a[b] = tmp;
	}
}
