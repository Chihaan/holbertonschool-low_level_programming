#include "main.h"
/**
 * print_sign - vérifie si un chiffre est positif négatif ou 0.
 * @n : the number we test
 * Return: Always 1 if positive 0 if 0 -1 if negative.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
