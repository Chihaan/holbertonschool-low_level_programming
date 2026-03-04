#include "main.h"
/**
 * *string_toupper - Change all lowercase to uppercase
 * @s : The string
 * Return: A pointer to the start of the string
 */
char *string_toupper(char *s)
{
	char *start = s;

	while (*s)
/* Tant que je suis pas a la fin de ma chaine*/
	{
/* Si le char que je lis est une minuscule */
		if (*s >= 'a' && *s <= 'z')
/* Passe le en majuscule */
			*s -= 32;
		s++;
	}
	return (start);
}
