#include <stdlib.h>
#include "main.h"

/**
 * free_grid - This program freesa 2 dimensional grid previously
 * created by your alloc_grid function.
 * created by alloc_grid()
 * @grid: grid to free
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
