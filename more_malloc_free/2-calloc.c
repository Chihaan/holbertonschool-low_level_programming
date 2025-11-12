#include <stdlib.h>
#include "main.h"
/**
 * _calloc - alloue de la mémoire pour un tableau et initialise à 0
 * @nmemb: nombre d'éléments
 * @size: taille de chaque élément
 * Return: pointeur vers la mémoire allouée, ou NULL si erreur
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int total = nmemb * size, i;


	if (!size || !nmemb)
		return (NULL);

	if (total / nmemb != size)
		return (NULL);

	p = malloc(nmemb * size);
		if (!p)
			return (NULL);

	for (i = 0; i < total; i++)
		p[i] = 0;

	return (p);
}
