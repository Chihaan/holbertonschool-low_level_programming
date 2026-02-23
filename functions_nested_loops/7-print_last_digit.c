#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - prints last digit of a number
 * @n : the number passed to the function
 * Return: Always last
 */
int print_last_digit(int n)
{
	int last;

	last = _abs(n) % 10;
	_putchar(last + '0');
	return (last);
}
