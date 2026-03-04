#include "main.h"
/**
 * *cap_string - Capitalize all words of a string
 * @s : The string
 * Return: A pointer to the string
 */
char *cap_string(char *s)
{
	char *ptr = s, *sep = " '\t\n,;.!?\"(){}", *debut = sep;
	int find = 0;

	while (*s)
	{
		if (*s >= 'A' && *s <= 'Z' && find == 0)
			find = 1;
		if (*s >= '0' && *s <= '9' && find == 0)
			find = 1;
		if (*s >= 'a' && *s <= 'z' && find == 0)
		{
			*s -= 32;
			find = 1;
		}
		while (*sep)
		{
			if (*s == *sep)
				find = 0;
			sep++;
		}
		sep = debut;
		s++;
	}
	return (ptr);
}
