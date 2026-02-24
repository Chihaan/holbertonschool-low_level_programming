#include "main.h"
#include <stdio.h>
/**
 * more_numbers - Prints number from 0 to 14, 10 times
 *
 * Return: Nothing
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar((j % 10) + '0');
			if (j > 10)
				_putchar((j / 10) + '0');
		}
		_putchar('\n');
	}
}
