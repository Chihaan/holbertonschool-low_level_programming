#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *malloc_checked - Allocates memory
 * @b : The number of bytes
 * Return: NULL if size 0 or a pointer to the array
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr =  malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
