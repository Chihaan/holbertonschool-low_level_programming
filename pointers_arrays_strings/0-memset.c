#include "main.h"
/**
 * _memset - remplit une zone mémoire avec un octet donné
 * @s: pointeur vers la zone mémoire à remplir
 * @b: octet utilisé pour le remplissage
 * @n: nombre d'octets à remplir
 *
 * Return: pointeur vers la zone mémoire s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *so = s;

	while (i < n)
	{
		so[i] = b;
		i++;
	}
	return (s);
}
