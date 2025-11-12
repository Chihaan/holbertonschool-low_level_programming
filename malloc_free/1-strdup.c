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

	while (s[len] != '\0')
		len++;
	return (len);
}
/**
 * _strdup - retourne un pointeur vers une copie d'une chaîne donnée
 * @str: chaîne à dupliquer
 * Return: pointeur vers la copie, ou NULL si échec ou str NULL
 */
char *_strdup(char *str)
{
	char *dest;
	unsigned int i, len;

	if (!str)
		return (NULL);

	len = _strlen(str);

	dest = malloc((len + 1) * sizeof(char));
	if (!dest)
		return (NULL);

	for (i = 0; i < len; i++)
		dest[i] = str[i];

	return (dest);
}
