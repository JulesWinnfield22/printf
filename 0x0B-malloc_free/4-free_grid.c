#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid -  frees a 2 dimensional grid previously
 * @grid: the grid to free
 * @height: the height of the grid
 *
 * Return: no return value
 */
void free_grid(int **grid, int height)
{
	int a, b, len;

	if (grid != 0)
	{
		while (grid[len])
			len++;
		printf("%d\n", len);
		for (a = 0; a < len; a++)
			for (b = 0; b < height; b++)
				free(grid[a]);

		free(grid);
	}
}
