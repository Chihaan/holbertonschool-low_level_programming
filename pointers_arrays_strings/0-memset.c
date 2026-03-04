#include "main.h"
/**
 * *_memset - Fills memory with a constant byte
 * @s : Pointer to a string
 * @b : A string
 * @n : Number of bytes to replace with b
 * Return: Always 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	char *ptr = s;

	while (i < n)
	{
		*s = b;
		i++;
		s++;
	}
	return (ptr);
}
