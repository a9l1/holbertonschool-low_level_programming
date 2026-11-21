#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a two dimensional grid
 * @grid: Pointer to the grid
 * @height: Number of rows
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
