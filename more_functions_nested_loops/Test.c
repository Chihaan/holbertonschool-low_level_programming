#include "main.h"
/**
 * print_square - prints a square
 * @size : size of the square
 * Return: Always 0.
 */
int main(void)
{
        int size = 98, i, j;

        for (i = 1; i <= size; i++)
        {
                for (j = 1; j <= size; j++)
                {
                        _putchar('#');
                }
            _putchar('\n');    
        }
        _putchar('\n');
    return (0);    
}