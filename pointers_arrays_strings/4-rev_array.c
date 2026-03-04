#include "main.h"
/**
 * reverse_array - Reverse the content of an array
 * @a : The array
 * @n : The number of elements
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int i = 0, tmp = 0, *end = a;

	while (i < n - 1)
	{
		i++;
		end++;
	}

	for (i = 0; i < n / 2; i++)
	{
		tmp = *a;
		*a = *end;
		*end = tmp;
		a++;
		end--;
	}
}
