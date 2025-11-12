#include <stdlib.h>
#include "main.h"
/**
 * array_range - crée un tableau d'entiers de min à max inclus
 * @min: valeur minimale
 * @max: valeur maximale
 * Return: pointeur vers le tableau, ou NULL si erreur
 */
int *array_range(int min, int max)
{
	int i;
	int *tab;

	if (min > max)
		return (NULL);

	tab = malloc((max - min + 1) * sizeof(int));
		if (!tab)
			return (NULL);
	for (i = 0; min <= max; min ++, i++)
		tab[i] = min;
	return (tab);
}
