#include "main.h"
/**
 * _strncat - Concatène au plus n caractères
 * de src à la fin de dest.
 * @dest: Chaîne de destination.
 * @src: Chaîne source.
 * @n: Nombre max de caractères à copier.
 *
 * Return: Pointeur vers dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i;

	while (*ptr != '\0')
		ptr++;

	for (int i = 0; i < n && *src != '\0; i++')
	{
		*ptr = *src;
		src++;
		ptr++;
	}
	*ptr = '\0';
	return (dest);
}
