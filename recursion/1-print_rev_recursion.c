#include "main.h"

void _print_rev_recursion(char *s)
{
	char *start = s;
	int i;

	if (*s != '\0')
		_print_rev_recursion(s + 1);

	for (i = *s; i >= *start; i--)
	{
		_putchar(i);
	}
}
