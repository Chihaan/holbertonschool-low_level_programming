#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Print the sum of the diagonals 
 * @a : the array
 * @size : the size of the array
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	int sum = 0; 
	int sum2 = 0;
	int i = 0;

	while (i < size)
/* Je boucle dans le tableau 1d */
	{
		sum += a[i * (size + 1)];
/* Premiere diagonale */
		sum2 += a[i * size + (size - 1 - i)];
/* Anti diagonale */
		i++;
	}
	printf("%d, %d\n", sum, sum2);
}
