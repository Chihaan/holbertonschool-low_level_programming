#include "main.h"
/**
 * times_table - check the code
 * @void :
 * Return: Always 0.
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i * j <= 9)
			{
				_putchar(i * j + '0');
				_putchar(' ');
				_putchar(' ');
				if (j != 9)
				{
					_putchar(',');
				}
			}
			else
			{
				_putchar(i * j / 10 + '0');
				_putchar(i * j % 10 + '0');
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
