#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - Prints strings
 * @separator: The string separator
 * @n: Number of int
 * Return: The sum of le x arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;
	char *str;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (i != 0 && separator != NULL)
			printf("%s", separator);
		str = va_arg(ap, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
	}
	va_end(ap);
	printf("\n");
}
