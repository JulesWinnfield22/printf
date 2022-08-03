#include "function_pointers.h"
#include <stddef.h>
/**
 * int_index - searches for an integer
 * @array: the array of fn
 * @size:  the size of the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: an index of the el
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size <= 0)
		return (-1);

	a = 0;
	while (a < size && array && cmp)
	{
		if (cmp(array[a]) > 0)
			return (a);
		a++;
	}
	return (-1);
}
