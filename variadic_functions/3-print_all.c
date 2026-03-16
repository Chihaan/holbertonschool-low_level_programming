#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_char - Prints a char
 * @ap : The argument
 * Return: Nothing
 */
void print_char(va_list ap)
{
	printf("%c", (char)va_arg(ap, int));
}
/**
 * print_integer - Prints an integer
 * @ap : The argument
 * Return: Nothing
 */
void print_integer(va_list ap)
{
	printf("%d", va_arg(ap, int));
}
/**
 * print_float - Prints a float
 * @ap : The argument
 * Return: Nothing
 */
void print_float(va_list ap)
{
	printf("%f", (float)va_arg(ap, double));
}
/**
 * print_string - Prints a string
 * @ap : The argument
 * Return: Nothing
 */
void print_string(va_list ap)
{
	char *str = va_arg(ap, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
/**
 * print_all - Prints all the formats
 * @format: String of formats
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	forms fs[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	int i = 0, j = 0, sep = 0;
	va_list ap;

	va_start(ap, format);

	while (format[i])
	{
		j = 0;
		while (fs[j].format != NULL)
		{
			if (format[i] == fs[j].format[0])
			{
				sep && printf(", ");
				fs[j].func(ap);
				sep = 1;
				break;
			}
			j++;
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
