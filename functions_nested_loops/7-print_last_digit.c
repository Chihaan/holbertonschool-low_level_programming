#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints last digit
 * @n : the number used
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		_putchar((-n % 10) + '0');
		return (-n % 10);
	}
	else
	{
		_putchar((n % 10) + '0');
		return (n % 10);
	}
}
