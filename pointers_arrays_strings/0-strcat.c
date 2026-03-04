#include "main.h"
/**
 * *_strcat - Overwrite the string des from src
 * @dest : The destination string
 * @src : The source string
 * Return: Nothing
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest, *source = src;

	while (*dest)
		dest++;
/* J'emmene le pointeur dest a la fin + 1 */
	while (*source)
	{
		*dest = *source;
		dest++;
		source++;
	}
/* Je remplace NULL par le premier charactere de src */
	*dest = '\0';
/* Je rajoute NULL a la fin de la chaîne */
	return (ptr);
}
