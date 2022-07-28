#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - creates an array of integers
 * @min: the min value
 * @max: the max value
 *
 * Return: pointer to the allocated memory
 */

int *array_range(int min, int max)
{
	int **arr, a;

	if (min > max)
		return (0);

	arr = malloc(sizeof(int) * (1 + max));

	if (arr == 0)
		return (0);

	for (a = 0; min <= max; a++, min++)
	{
		arr[a] = malloc(sizeof(int));

		if (arr[a] == 0)
			return (0);

		arr[a][0] = min;
	}

	return ((int *) arr);
}
