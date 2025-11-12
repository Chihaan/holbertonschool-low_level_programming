#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _strlen - retourne la longueur d'une chaîne de caractères
 * @s: la chaîne dont on veut connaître la longueur
 * Return: la longueur de la chaîne
 */
int _strlen(char *s)
{
	unsigned int len = 0;

	while (s[len] != '\0')
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
	unsigned int len1, len2, i, j;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);	

	ptr = malloc((len1 + len2 + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];
	for (j = 0; j < len2; j++)
		ptr[i + j] = s2[j];

	ptr[i + j] = '\0';

	return (ptr);
}
