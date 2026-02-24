#include <stdio.h>
/**
 * print_triangle - Prints a triangle of n length
 * @n : length of the triangle
 *
 * Return: Nothing
 */
int main(void)
{
	int i, j, k, n = 10;

	for (i = 0; i < n; i++)
	{
		for (j = 1; j < (n - i); j++)
			putchar('.');
		for (k = 0; k <= i; k++)
			putchar('#');
		putchar('\n');
	}
	return (0);
}
