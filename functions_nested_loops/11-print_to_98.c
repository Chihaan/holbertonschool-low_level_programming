#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - check the code
 * @n : Number used
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		printf("%d, ", n);
		n = n + 1;
		print_to_98(n);
	}
	else if (n > 98)
	{
		printf("%d, ", n);
		n = n - 1;
		print_to_98(n);
	}
	else
	{
	printf("%d\n", n);
	}
}
