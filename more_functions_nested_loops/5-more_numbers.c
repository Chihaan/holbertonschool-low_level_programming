#include "main.h"
/**
 * more_numbers - write numbers x10
 * @void: No return
 * On error, -1 is returned, and errno is set appropriately.
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar((j + 1) % 10 + '0');
			if (j > 9)
				_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
