#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints last digit
 * @n : the number used
 * Return: return n
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		_putchar(-last + '0');
		return (-last);
	}
	else
	{
		_putchar(last + '0');
		return (last);
	}
}
