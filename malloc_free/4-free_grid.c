#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - Frees a 2 dimensional grid
 * @grid : The 2d array
 * @height : Height of the array
 * Return: NULL if size 0 or a pointer to the array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
