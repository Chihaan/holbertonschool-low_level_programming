#include "main.h"
/**
 * *_strcpy - Copy a string from src to dest
 * @dest : Destination adress
 * @src : Source adress
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
/* while ((*dest++ = *src++)); */
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}
