#include "main.h"
/**
 * _puts_recursion - affiche une chaîne de caractères
 * @s: pointeur vers la chaîne à afficher
 * Return: rien
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
