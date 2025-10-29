#include "main.h"
/**
 * _strncpy - Copy at most n chars from src to dest
 * @dest: Destination string
 * @src: Source string
 * @n: Max number of chars to copy
 *
 * Return: Pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *odest = dest;

	for (i = 0; i < n; i++)
	{
		if (*src != '\0')
		{
			*dest = *src;
			dest++;
			src++;
		}
		else
		{
			*dest = '\0';
			dest++;
		}
	}
	return (odest);
}
