#include "main.h"
#include <stdio.h>
/**
 * print_line- Prints a libe of n length
 *
 * Return: Nothing
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
