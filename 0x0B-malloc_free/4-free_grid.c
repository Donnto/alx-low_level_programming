#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2- dimensional array of intergers.
 * @grid: the 2-dimensional array of integers to be freed.
 * @height: height of the grid.
 *
 * Return: no return
 */
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
	{
		free(grid[index]);

		free(grid);
	}
}
