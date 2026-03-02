#include "main.h"
/**
 * _puts - prints a string to stdout
 * @str : the string
 * Return: Nothing
 */
void _puts(char *str)
{
	while (*str != '\0') /* Je pourrais écrire while (*str) en booléen car \0 vaut 0 */
	{
		_putchar(*str); /* Il est possible d'écrire (*str++) de sorte a afficher et incrémenter dans le putchar */
		str++;
	}
	_putchar('\n');
}
