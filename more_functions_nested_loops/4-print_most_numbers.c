#include "main.h"
/**
 * print_most_numbers - writes the character c to stdout
 * @void: The character to print
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 || i != 4)
			_putchar(i + '0');
	}
}
