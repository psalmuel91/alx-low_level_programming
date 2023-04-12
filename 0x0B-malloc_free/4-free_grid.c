#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
* str_concat - Program is a function that frees a 2 dimensional grid previously
* created by your alloc_grid function.
* @grid: Argument pointer pointer
* @height: Argument variable holds integer
*
* Return: return pointer pointer
*/

void free_grid(int **grid, int height)
{
	int idx = 0;

	for (; idx < height; idx++)
	{
		free(*(grid + idx));
	}

	free(grid);
}
