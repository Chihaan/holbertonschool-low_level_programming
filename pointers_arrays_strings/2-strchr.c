#include "main.h"
/**
 * _strchr - cherche un caractère dans une chaîne
 * @s: chaîne où chercher
 * @c: caractère à trouver
 *
 * Return: pointeur vers la première occurrence ou NULL
 */
char *_strchr(char *s, char c)
{
	char *sptr = s;

	while (*sptr != '\0')
	{
		if (*sptr == c)
		{
			return (sptr);
		}
		sptr++;
	}
	return (0);
}
