#include "main.h"

/**
 * swap_int - swaps two values
 * @a: first int
 * @b: second int
 *
 * Return: no return value
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
