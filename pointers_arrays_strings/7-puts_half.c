#include "main.h"
/**
 * puts_half - affiche la deuxième moitié d'une chaîne de caractères
 * @str: pointeur vers la chaîne à afficher
 *
 * Cette fonction calcule la longueur de la chaîne puis affiche
 * uniquement la deuxième moitié :
 * - si la longueur est paire, elle commence à len / 2 ;
 * - si la longueur est impaire, elle commence à (len - 1) / 2 + 1.
 * Un saut de ligne est ajouté à la fin.
 */
void puts_half(char *str)
{
	int len = 0, start;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		start = len / 2;
	else
		start = (len - 1) / 2 + 1;

	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}
	_putchar('\n');
}
