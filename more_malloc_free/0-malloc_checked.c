#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - alloue de la mémoire et quitte si échec
 * @b: taille en octets à allouer
 * Return: pointeur vers la mémoire allouée
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (!p)
		exit(98);
	return (p);
}
