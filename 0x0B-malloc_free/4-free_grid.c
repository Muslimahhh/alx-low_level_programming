#include <stdlib.h>

/**
* free_grid - Frees the memory space of a 2D array
* @grid: The 2D array
* @height: The amount of rows on the array
*
* Return: Nothing (void)
*/
void free_grid(int **grid, int height)
{
	int n;

	for (n = 0; n < height; ++n)
		free(grid[n]);
	free(grid);
}

