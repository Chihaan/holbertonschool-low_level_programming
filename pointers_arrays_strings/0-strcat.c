#include "main.h"
/**
 * _strcat - Concatène deux chaînes de caractères.
 * @dest: Pointeur vers la chaîne de destination.
 *        Elle doit être assez grande pour contenir le résultat.
 * @src: Pointeur vers la chaîne source à ajouter à la fin de dest.
 *
 * Description:
 * Cette fonction parcourt la chaîne `dest` jusqu'à trouver son caractère
 * de fin ('\0'), puis copie chaque caractère
 * de `src` à la suite de `dest`.
 * Elle ajoute enfin un caractère nul ('\0')
 * à la fin pour terminer la chaîne.
 *
 * Return: Un pointeur vers la chaîne `dest` (contenant le résultat final).
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
		ptr++;

	while (*src != '\0')
	{
		*ptr = *src;
		src++;
		ptr++;
	}
	*ptr = '\0';
	return (dest);
}
