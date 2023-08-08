#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - function that frees a 2D grid created by alloc_grid function
 * @grid: pointer to a pointer to an integer
 * @height: height of 2D array
 * Return: pointer
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
