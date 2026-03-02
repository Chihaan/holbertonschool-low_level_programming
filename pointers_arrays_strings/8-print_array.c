#include "main.h"
/**
 * print_array - Print n elements of an array.
 * @a : The array
 * @n : The number of elements wanted
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i != 0)
			printf(", %d", *a++);
		else
			printf("%d", *a++);
		i++;
	}
	printf("\n");
}
