#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *create_array - Creates an array of chars
 * @size : Size of the array
 * @c : The char we put in the array
 * Return: NULL if size 0 or a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *tab;
	unsigned int i;

	if (size == 0)
		return (NULL);
	tab = malloc(size * sizeof(*tab));

	if (tab == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		tab[i] = c;
	}
	return (tab);
}
