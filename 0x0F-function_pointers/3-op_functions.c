#include "3-calc.h"

/**
 * op_add - adde's two integers
 * @a: first int
 * @b: second int
 *
 * Return: an int
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - the difference of two integers
 * @a: first int
 * @b: second int
 *
 * Return: an int
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - the product of two integers
 * @a: first int
 * @b: second int
 *
 * Return: an int
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - the division of two integers
 * @a: first int
 * @b: second int
 *
 * Return: an int
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - the remainder of two integers
 * @a: first int
 * @b: second int
 *
 * Return: an int
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

