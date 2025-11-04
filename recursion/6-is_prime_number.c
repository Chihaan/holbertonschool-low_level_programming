#include "main.h"
/**
 * _is_prime - aide récursive pour tester la primalité
 * @n: entier testé
 * @i: diviseur candidat (impair)
 * Return: 1 si n est premier, 0 sinon
 */
int _is_prime(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (_is_prime(n, i + 2));
}
/**
 * is_prime_number - dit si un entier est un nombre premier
 * @n: entier à tester
 * Return: 1 si n est premier, 0 sinon
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	if (n % 2 == 0)
		return (0);
	return (_is_prime(n, 3));
}
