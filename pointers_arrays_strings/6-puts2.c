#include "main.h"
/**
 * puts2 - affiche un caractère sur deux d'une chaîne de caractères
 * @str: pointeur vers la chaîne à afficher
 *
 * Cette fonction parcourt la chaîne pointée par @str et affiche
 * uniquement un caractère sur deux, en commençant par le premier.
 * À la fin, elle ajoute un saut de ligne ('\n').
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
