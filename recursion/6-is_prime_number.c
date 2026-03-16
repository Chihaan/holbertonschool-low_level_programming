#include "main.h"
/**
 * is_prime_check - Checks if a number is prime
 * @n: The number
 * @i: Counter
 * Return: 1 if yes 0 if not
 */
int is_prime_check(int n, int i)
{
	if (n <= 1)
		return (0);
	else if (n == 2)
		return (1);
	else if (n % i == 0)
		return (0);
	else if (i >= n / 2)
		return (1);
	else
		return (is_prime_check(n, i + 1));
}
/**
 * is_prime_number - Checks if a number is prime
 * @n: The number
 * Return: 1 if yes 0 if not
 */
int is_prime_number(int n)
{
	return (is_prime_check(n, 2));
}
