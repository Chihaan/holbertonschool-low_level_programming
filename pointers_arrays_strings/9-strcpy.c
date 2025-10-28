#include "main.h"
/**
 * _strcpy - copie une chaîne de caractères dans une autre
 * @dest: pointeur vers le buffer de destination
 * @src: pointeur vers la chaîne source à copier
 *
 * Cette fonction copie la chaîne pointée par @src, y compris le caractère
 * nul de fin ('\0'), dans le buffer pointé par @dest.
 * Return: *ogdest le pointeur vers le début de la chaîne de destination.
 */
char *_strcpy(char *dest, char *src)
{
	char *ogdest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';

	return (ogdest);

}
