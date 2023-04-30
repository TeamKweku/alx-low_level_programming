#include <stdlib.h>
#include "main.h"
/**
  * free_grid - frees a 2 dimensional grid created by alloc_grid
  * @grid: pointer to grid
  * @height: height of grid
  *
  * Return: Nothing
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
