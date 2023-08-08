#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
* alloc_grid - Program is a function that returns a pointer to a
* 2 dimensional array of integers.
* @width: Argument variable holds integer
* @height: Argument variable holds integer
*
* Return: return pointer pointer
*/

int **alloc_grid(int width, int height)
{
	int **grid, idx, i = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (idx = 0; idx < height; idx++)
	{
		grid[idx] = malloc(width * sizeof(int));
		if (!(grid[idx] != NULL))
		{
			while (idx >= 0)
			{
				free(grid[idx]);
				idx--;
			}

			free(grid);
			return (NULL);
		}

		for (; i < width; i++)
			grid[idx][i] = 0;
	}

	return (grid);
}
