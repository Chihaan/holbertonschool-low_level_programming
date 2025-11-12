#include <stdlib.h>
#include "main.h"
/**
 * _strlen - calcule la longueur d'une chaîne de caractères
 * @s: chaîne dont on veut connaître la longueur
 * Return: longueur de la chaîne
 */
int _strlen(char *s)
{
	unsigned int len = 0;

	while (s[len])
		len++;
	return (len);
}

#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatène s1 avec les n premiers caractères de s2
 * @s1: première chaîne
 * @s2: seconde chaîne
 * @n: nombre max de caractères de s2 à concaténer
 * Return: nouvelle chaîne concaténée, ou NULL si erreur
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2, o;
	char *sncon, *tmp;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n >= len2)
		o = len2;
	else
		o = n;

	sncon = malloc((len1 + o + 1) * sizeof(char));
	if (!sncon)
		return (NULL);

	tmp = sncon;

	for (i = 0; i < len1; i++)
		sncon[i] = s1[i];
	for (j = 0; j < o; j++)
		sncon[i + j] = s2[j];

	sncon[i + j] = '\0';

	return (tmp);
}
