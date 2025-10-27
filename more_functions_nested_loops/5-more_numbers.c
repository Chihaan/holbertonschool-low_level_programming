#include "main.h"
/**
 * more_numbers - write numbers x10
 * @void: No return
 * On error, -1 is returned, and errno is set appropriately.
 */
void more_numbers(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(j + '0');
			while (j > 9 && j < 15)
			{
				_putchar(k + '0');
				k++;
			}
		}
		_putchar('\n');
	}
}
