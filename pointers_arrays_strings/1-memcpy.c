#include "main.h"
/**
 * *_memcpy - Copies memory area
 * @dest : Area destination
 * @src : Area Source
 * @n : Number of copies
 * Return: Always 0.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;
	unsigned int i = 0;

	for (; i < n; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (ptr);
}
