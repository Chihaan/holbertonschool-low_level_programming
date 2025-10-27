#include "main.h"
/**
 * print_square - prints a square
 * @size : size of the square
 * Return: Always 0.
 */
int main(void)
{
	int n = 3, i, j;

    if (n <= 0)
        _putchar('\n');

	for(i = 1; i <= n; i++)
	{
		for(j = 0; j < i; j++)
            _putchar(' ');
	    _putchar('\\');
        _putchar('\n');	
	}
    return (0);    
}