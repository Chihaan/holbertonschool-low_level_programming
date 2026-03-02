#include "main.h"
/**
 * print_rev - Prints a string in reverse
 * @s : The string
 * Return: Nothing
 */
 void print_rev(char *s)
 {
	char *end = s;

	while (*end)
		end++;
	end--;
	while (end >= s)
		_putchar(*end--);
	_putchar('\n');
 }
