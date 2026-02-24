#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - Prints a diagonal of n length
 * @n : length of the diagonal
 *
 * Return: Nothing
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			putchar(' ');
		putchar('\\');
		putchar('\n');
	}
}
