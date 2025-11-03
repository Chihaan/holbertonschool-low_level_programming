#include "main.h"
/**
 * factorial - calcule la factorielle d’un nombre
 * @n: entier dont on veut la factorielle
 * Return: la factorielle de n, -1 si n est négatif
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
