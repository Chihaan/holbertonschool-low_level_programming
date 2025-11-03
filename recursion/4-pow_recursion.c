#include "main.h"
/**
 * _pow_recursion - calcule x à la puissance y de façon récursive
 * @x: base
 * @y: exposant
 * Return: le résultat de x^y, ou -1 si y est négatif
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
