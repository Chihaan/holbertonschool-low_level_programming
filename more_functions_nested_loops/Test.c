#include "main.h"
/**
 * print_square - prints a square
 * @size : size of the square
 * Return: Always 0.
 */
int main(void)
{
	int i;
	int n = 200;

	for (i = 1; i <= n; i++)
	{
		if (n >= 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
	return (0);
}