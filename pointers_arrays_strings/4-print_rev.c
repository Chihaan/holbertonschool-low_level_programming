#include "main.h"
/**
 * print_rev - affiche une chaîne de caractères en ordre inverse
 * @s: la chaîne à afficher
 *
 * Return: rien (void)
 */
void print_rev(char *s)
{
	int len = 0;
	int end;

	while (s[len] != '\0')
		len++;

	end = len - 1;

	while (end >= 0)
	{
		_putchar(s[end]);
		end--;
	}
	_putchar('\n');
}
