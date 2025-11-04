#include "main.h"
/**
 * _sqrt_check - trouve la racine carrée naturelle d'un nombre.
 * @n: le nombre dont on cherche la racine.
 * @i: tentative actuelle.
 * Return: la racine carrée naturelle ou -1 si elle n'existe pas.
 */
int _sqrt_check(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt_check(n, i + 1));
}
/**
 * _sqrt_recursion - retourne la racine carrée naturelle de n.
 * @n: le nombre dont on cherche la racine.
 * Return: la racine carrée naturelle ou -1 si elle n'existe pas.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_check(n, 1));
}
