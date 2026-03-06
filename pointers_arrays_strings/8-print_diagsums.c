#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Print the sum of the diagonals
 * @a : the array
 * @size : the size of the array
 * Return: No return
 */
void print_diagsums(int *a, int size)
{
	int sum = 0;
	int sum2 = 0;
	int i = 0;

	for (i = 0; i < size; i++)
/* Je boucle dans le tableau 1d */
	{
		sum += a[i * (size + 1)];
/* Premiere diagonale */
		sum2 += a[i * size + (size - 1 - i)];
/* Anti diagonale */
	}
	printf("%d, %d\n", sum, sum2);
}
