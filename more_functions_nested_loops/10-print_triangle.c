#include "main.h"
#include <stdio.h>
/**
 * print_triangle - Prints a triangle of n length
 * @n : length of the triangle
 *
 * Return: Nothing
 */
void print_triangle(int n)
{
	int i, j, k;

	if (n <= 0)
		putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < (n - i - 1); j++)
				putchar(' ');
			for (k = 0; k <= i; k++)
				putchar('#');
			putchar('\n');
		}
	}
}
