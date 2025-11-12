#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - crée un tableau 2D d'entiers initialisés à 0
 * @width: nombre de colonnes
 * @height: nombre de lignes
 * Return: pointeur vers le tableau
 */
int **alloc_grid(int width, int height)
{
	int **tab, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	tab = malloc(height * sizeof(int *));
	if (!tab)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		tab[i] = malloc(width * sizeof(int));

		if (!tab[i])
			return (NULL);

		for (j = 0; j < width; j++)
			tab[i][j] = 0;
	}
	return (tab);
	free(tab);
}
