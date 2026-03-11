#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dog - Frees the memory of the struc
 * @d : The structure
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
