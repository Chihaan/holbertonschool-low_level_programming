#include "main.h"
/**
 * *_strncat - Append n bytes of a string
 * @dest : Destination string
 * @src : Source string
 * @n : Number of bytes
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i;

	while (*dest)
		dest++;
/* J'emmene le pointeur dest a la fin */
	for (i = 0; i < n; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
/* Je remplace NULL par le premier charactere de src */
	*dest = '\0';
/* Je rajoute NULL a la fin de la chaîne */
}
