#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2d array
 * @grid: grids of array
 * @height: colmun of array
 *
 * Return: no return since void
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
