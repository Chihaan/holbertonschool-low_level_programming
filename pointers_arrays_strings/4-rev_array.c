#include "main.h"
/**
 * reverse_array - Reverses the contents of an array of integers in place.
 * @a: A pointer to the first element of the integer array to be reversed.
 * @n: The number of elements in the array.
 *
 * This function rearranges the elements in the array so that
 * the first element becomes the last, the second element
 * becomes the second to last, and so on. If n is less than
 * or equal to 0, the function performs no action.
 */
void reverse_array(int *a, int n)
{
	int tmp, *end = a + n - 1, *start = a;

	if (n <= 0)
		return;

	while (start < end)
	{
		tmp = *end;
		*end = *start;
		*start = tmp;
		start++;
		end--;
	}
}
