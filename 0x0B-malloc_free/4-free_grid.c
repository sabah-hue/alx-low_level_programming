#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid.
 *
 * Description: a function that frees a 2D grid created by alloc_grid function.
 * @grid: address of the two dimensional grid
 * @height: array height
 *
 * Return: nothing
 **/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
