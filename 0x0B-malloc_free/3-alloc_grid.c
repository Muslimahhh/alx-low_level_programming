#include <stdlib.h>

/**
* alloc_grid - Creates a 2D array of integers
* @width: The width of the 2D array
* @height: The height of the 2D array
*
* Return: A pointer to the array
*/
int **alloc_grid(int width, int height)
{
	int **grid, i;

	if ((width < 1) || (height < 1))
		return (NULL);
	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			while (i >= 0)
			{
				free(grid[i]);
				i--;
			}
			free(grid);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		int b;

		for (b = 0; b < width; b++)
			grid[i][b] = 0;
	}

	return (grid);
}

