#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet in lowercase ten times,
 * followed by a new line
 *
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	char c, i;

	for (i = 0; i <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
