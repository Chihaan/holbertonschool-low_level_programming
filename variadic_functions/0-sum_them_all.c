#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Prints the name as is
 * @n : Number of arguments
 * Return: The sum of le x arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int total = 0;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
		total += va_arg(ap, int);
	va_end(ap);
	return (total);
}
