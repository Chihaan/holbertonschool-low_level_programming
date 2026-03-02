#include "main.h"
/**
 * _strlen - count the length of a string
 * @s : the string we wanna know the length
 * Return: count
 */
int _strlen(char *s)
{
	int count = 0;
/*Je crée la variable de retour*/

	while (*s)
/*Tant que s n'est pas nul*/
	{
		count += 1;
		s++;
/*J'incrémente mon compteur et j'avance s*/
	}
	return (count);
}
