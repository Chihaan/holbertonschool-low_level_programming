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
/*On emmene notre pointeur end a la fin*/
/*On revient un cran en arrière pour ne pas*/
/*être sur le caractère '\0'*/
	while (end >= s)
		_putchar(*end--);
/*On imprime le caractère et on recule le pointeur end*/
/*On se permet la décrémentation dans le putchar*/
	_putchar('\n');
}
