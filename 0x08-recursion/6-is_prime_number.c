#include "main.h"
/**
 * prime - check if a # is prime or not
 * @n: the number
 * @val: the devider
 *
 * Return: 0 or 1
 */
int prime(int n, int val)
{
	if (val == 1)
		return (1);
	if (n % val == 0)
		return (0);

	return (prime(n, --val));
}
/**
 * is_prime_number - check if a # is prime or not
 * @n: the number
 *
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (prime(n, n - 1));
}
