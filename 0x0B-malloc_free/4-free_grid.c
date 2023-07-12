#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * free_grid - frees a 2 dimensional array of integers.
  * @grid: The 2-dimensional array of integers to be freed.
  * @height: height of the grid.
  */
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);
}
