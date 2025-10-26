#include <stdio.h>
/**
 * main - entry point
 * @int - variables pour boucle 1 et 2 et 3
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i <= 7; i++)
	{
		for (j = 0; j <= 8; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				if (i < j && j < k)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if (i != 7)
					{
						putchar(',');
						putchar(' ');

					}

				}

			}

		}

	}
	putchar('\n');
	return (0);
}
