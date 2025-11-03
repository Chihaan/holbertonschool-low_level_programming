#include "main.h"
/**
 * _memcpy - copie n octets d'une zone mémoire vers une autre
 * @dest: zone de destination
 * @src: zone source
 * @n: nombre d'octets à copier
 *
 * Return: pointeur vers dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	char *desto = dest;

	while (i < n)
	{
		desto[i] = src[i];
		i++;
	}
	return (dest);
}
