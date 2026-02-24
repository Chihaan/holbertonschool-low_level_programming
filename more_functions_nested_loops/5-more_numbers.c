#include "main.h"
#include <stdio.h>
/**
 * more_numbers - Prints number from 0 to 14, 10 times
 *
 * Return: Nothing
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			putchar((j % 10) + '0');
			if (j > 10)
				putchar((j / 10) + '0');
		}
		putchar('\n');
	}
	return (0);
}
