#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - that returns a pointer to a 2 dimensional array of integers
 * @width: rows
 * @height: columns
 *
 * Return: array
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int a, b;

	if (width <= 0 || height <= 0)
		return (0);

	grid = malloc(sizeof(int) * width);

	if (grid == 0)
		return (0);

	for (a = 0; a < width; a++)
	{
		grid[a] = malloc(sizeof(int) * height);

		if (grid[a] == 0)
			return (0);
	}

	for (a = 0; a < width; a++)
	{
		for (b = 0; b < height; b++)
		{
			grid[a][b] = 0;
		}
	}

	return (grid);
}
