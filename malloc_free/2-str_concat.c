#include <stdlib.h>
#include "main.h"
/**
 * _strlen - retourne la longueur d'une chaîne de caractères
 * @s: la chaîne dont on veut connaître la longueur
 * Return: la longueur de la chaîne
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}
/**
 * str_concat - concatène deux chaînes
 * @s1: première chaîne
 * @s2: seconde chaîne
 * Return: nouvelle chaîne concaténée
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *ptr;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	ptr = malloc(_strlen(s1) + _strlen(s2) + 1);

	if (!ptr)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
		ptr[i + j] = s2[j];
		
	ptr[i + j] = '\0';

	return (ptr);
}
