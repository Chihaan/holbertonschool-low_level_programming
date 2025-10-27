#include "main.h"
/**
 * mul - multiple two caracteres
 * @a,b : The character to use
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int mul(int a, int b)
{
    int c = a * b;
    return c;
}