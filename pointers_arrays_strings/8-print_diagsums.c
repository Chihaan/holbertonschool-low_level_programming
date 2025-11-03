#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - affiche la somme des deux diagonales d’un carré
 * @a: pointeur vers le tableau 2D (traité comme un tableau 1D)
 * @size: taille du carré (nombre de lignes/colonnes)
 * Return: rien
 */
void print_diagsums(int *a, int size)
{
	int i, sumg = 0, sumd = 0;

	for (i = 0; i < size; i++)
	{
		sumg += a[size * i + i];
		sumd += a[size * i + (size - 1 - i)];
	}
	printf("%d, %d\n", sumg, sumd);
}
