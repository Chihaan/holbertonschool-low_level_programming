#include "main.h"
/**
 * puts_half - Print half of a string
 * @str : The string used
 * Return: Nothing
 */
void puts_half(char *str)
{
	char *counter = str;
	int len = 0;

	while (*counter)
	{
		counter++;
		len++;
	}
/* Calcul de la longueur de la chaîne */
	int middle = (len + 1) / 2;
/* Je gère les chaînes paire et impaires avec le len + 1 */
	counter = str + middle;
/* Je mets le pointeur counter au milieu de la chaîne */
/* En changeant son adresse */
	while (*counter)
		_putchar(*counter++);
}
