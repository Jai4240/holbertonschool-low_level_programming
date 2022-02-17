#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * free_grid - free's up the memory of a grid
  * @grid: 2D array of ints
  * @height: height of the grid
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
