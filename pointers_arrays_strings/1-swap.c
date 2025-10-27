#include "main.h"
/**
 * swap_int - check the code
 * @a: value 1
 * @b: value 2
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
