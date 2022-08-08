#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: first argument
 * @...: the rest of the argument
 *
 * Return: the sum of all the arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ab;
	int a, sum;

	va_start(ab, n);
	sum = 0;
	for (a = 0; a < (int)n; a++)
	{
		sum += va_arg(ab, int);
	}
	va_end(ab);
	return (sum);
}
