#include <stdio.h>

int main(void)
{
	int i, j, n = 10;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			putchar(' ');
		putchar('\\');
		putchar('\n');
	}
	return (0);
}
