#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees two dimensional grid
 * @grid: The 2 dim-grid
 * @height: height of dim-grid
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
