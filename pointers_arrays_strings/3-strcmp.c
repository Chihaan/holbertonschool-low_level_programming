#include "main.h"
/**
 * _strcmp - Compare deux chaînes de caractères.
 * @s1: Première chaîne à comparer.
 * @s2: Deuxième chaîne à comparer.
 *
 * Return:
 *   0  si les deux chaînes sont identiques,
 *   une valeur négative si s1 < s2,
 *   une valeur positive si s1 > s2 (selon l’ordre ASCII).
 */
int _strcmp(char *s1, char *s2)
{
		while (*s1 && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
	return (*s1 - *s2);
}
