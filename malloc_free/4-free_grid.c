#include <stdlib.h>
/**
 * free_grid - libère la mémoire allouée pour un tableau 2D
 * @grid: pointeur vers le tableau 2D
 * @height: nombre de lignes du tableau
 * Return: rien
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
