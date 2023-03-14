#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid previously created by alloc_grid function
 * @grid: pointer to the 2D array to be freed
 * @height: height of the grid
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{

	if (grid != NULL && height != 0)

	{
		for (; height >= 0; height--)

		free(grid[height]);

	free(grid);
	}
}
