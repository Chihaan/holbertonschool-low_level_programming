#include "main.h"
/**
 * swap_int - swap the value of two integers
 * @a : value a
 * @b : Value b
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}

