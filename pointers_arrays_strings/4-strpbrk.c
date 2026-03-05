#include "main.h"
/**
 * *_strpbrk - Searches a string for any of a set of bytes
 * @s : The string
 * @accept : The test string
 * Return: A pointer to the first occurence
 */
char *_strpbrk(char *s, char *accept)
{
	char *a = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*s == *accept)
				return (s);
			accept++;
		}
		s++;
		accept = a;
	}
	return (0);
}
