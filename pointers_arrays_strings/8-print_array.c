#include "main.h"
#include <stdio.h>
/**
 * print_array - affiche les éléments d’un tableau d’entiers
 * @a: pointeur vers le premier élément du tableau
 * @n: nombre d’éléments à afficher
 *
 * Cette fonction affiche les n premiers
 * éléments du tableau d’entiers pointé
 * par @a. Les éléments sont séparés par
 * une virgule et un espace, puis un
 * saut de ligne est ajouté à la fin de l’affichage.
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
