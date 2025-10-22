#include "main.h"
/**
 * print_last_digit - used to print the last digit of a number
 * @d : the number tested
 * Return: le dernier chiffre de @d.
 */
int print_last_digit(int d)
{
	int b = d % 10;

	if (b < 0)
	{
		b = -b;
	}
	_putchar(b + '0');
	return (b);
}
