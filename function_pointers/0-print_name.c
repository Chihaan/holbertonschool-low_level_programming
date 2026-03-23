#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - Prints the name
 * @name : The name
 * @f: The functions
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
