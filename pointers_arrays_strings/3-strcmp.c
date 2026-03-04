#include "main.h"
/**
 * _strcmp - Compare two strings
 * @s1 : String one
 * @s2 : String two
 * Return: String one value minus string two value
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
/* Tant que les deux strings ne sont pas finies */
	{
		if (*s1 != *s2)
/* Si elle est différente tout de suite */
/* et on retourne la valeur */
			return (*s1 - *s2);
		s1++;
		s2++;
	}
/* Si les chaînes sont identiques */
	return (*s1 - *s2);
}
