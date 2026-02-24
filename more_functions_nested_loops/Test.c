#include <stdio.h>

int main(void)
{
	int i, j, n = 10;

	if (n <= 0)
		putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
				putchar('#');
			putchar('\n');
		}
	}
	return (0);
}
