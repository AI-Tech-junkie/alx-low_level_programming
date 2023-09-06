#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * free_grid - free a 2D array (grid)
 * @grid: the array
 * @height: height of the array
 * Return: pointer to the allocated grid, or NULL on failure
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
