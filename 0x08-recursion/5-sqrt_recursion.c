#include "main.h"

/**
 * sqrt_recursion - the sqrt of a number
 * @sqrt: the number
 * @val: half of the number
 *
 * Return: the sqrt
 */
int sqrt_recursion(int sqrt, int val)
{
	if (val == 0)
		return (-1);

	if ((val * val) == sqrt)
		return (val);

	return (check(sqrt, --val));
}
/**
 * _sqrt_recursion - the sqrt of a number
 * @n: the number
 *
 * Return: the sqrt
 */

int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	return (check(n, n / 2));
}
