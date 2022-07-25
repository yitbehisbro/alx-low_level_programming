#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - allocates a grid of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
int **alloc_grid(int width, int height)
{
	int **grids;
	int a, b;

	if (width < 1 || height < 1)
		return (NULL);

	grids = malloc(height * sizeof(int *));
	if (grids == NULL)
	{
		free(grids);
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		grids[a] = malloc(width * sizeof(int));
		if (grids[a] == NULL)
		{
			for (a--; a >= 0; a--)
				free(grids[a]);
			free(grids);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
		for (b = 0; b < width; b++)
			grids[a][b] = 0;

	return (grids);
}
