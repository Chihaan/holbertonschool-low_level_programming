#include "main.h"
/**
 * _sqrt_count- Check the number
 * @n: The number
 * @x: Times
 * Return: Result
 */
int _sqrt_count(int n, int x)
{
	if (x * x == n)
		return (x);
	if (x * x > n)
		return (-1);
	return (_sqrt_count(n, x + 1));
}
/**
 * _sqrt_recursion- Returns natural square root
 * @n: The number
 * Return: Result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_count(n, 1));
}
