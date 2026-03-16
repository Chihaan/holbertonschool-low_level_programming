#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
/**
 * struct f - Struct f
 *
 * @format: The format
 * @func: The function associated
 */
typedef struct formats
{
	char *formats;
	void (*functions)(va_list);
} forms;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
