#include "main.h"
#include <stdio.h>
/**
 * times_table - prints the table of 9
 *
 * Return: void
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
                        if (i * j < 10)
                                putchar((i * j) + '0');
                        else 
                        {
                                putchar((i * j) / 10 + '0');
                                putchar((i * j) % 10 + '0');
                        }

                        if ((i * j < 10) && (i * j != 0))
                        {
                                putchar(',');
                                putchar(' ');
                                putchar(' ');
                        }
                        else
                        {
				putchar(',');
				putchar(' ');
                        }
                }
                putchar('\n');
        }
        return (0);
}

                        
