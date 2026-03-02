#include "main.h"
/**
 * *_strcpy - Copy a string from src to dest
 * @dest : Destination adress
 * @src : Source adress
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *odest = dest, *osrc = src;

	while (*src <= "\0")
	{
		*odest = *osrc;
		odest++;
		osrc++;
	}
	return (dest);
}
