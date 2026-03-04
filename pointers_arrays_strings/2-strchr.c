#include "main.h"
/**
 * *_strchr - Locates a character in a string
 * @s : The string
 * @c : The char we look for
 * Return: s if found or 0
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (0);
}
