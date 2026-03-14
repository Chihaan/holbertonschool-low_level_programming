#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * **alloc_grid - Returns a pointer to a 2 dimensional array
 * @width : Width of the array
 * @height : Height of the array
 * Return: NULL if size 0 or a pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width == 0 || height == 0)
		return (NULL);
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
			return (NULL);
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}
	return (array);
}
