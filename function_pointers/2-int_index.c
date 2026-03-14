#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - Searches for an integer
 * @array : The array
 * @size : The size of the array
 * @cmp : A function
 * Return: Nothing
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL)
		return (-1);
	if (cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
