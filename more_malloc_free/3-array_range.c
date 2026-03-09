#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *array_range - Creates an array of integers
 * @min : Minimum value
 * @max : Maximum value
 * Return: NULL if size 0 or a pointer to the array
 */
int *array_range(int min, int max)
{
	int *ptr, i, len = (max - min) + 1;

	if (min > max)
		return (NULL);
	ptr = malloc(len * sizeof(int));
	if (ptr == 0)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		ptr[i] = min++;
	}
	return (ptr);
}
