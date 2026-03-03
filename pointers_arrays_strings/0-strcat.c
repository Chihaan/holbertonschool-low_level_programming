#include "main.h"
/**
 * *_strcat - Overwrite the string des from src
 * @dest : The destination string
 * @src : The source string
 * Return: Nothing
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*dest)
		dest++;

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
}
