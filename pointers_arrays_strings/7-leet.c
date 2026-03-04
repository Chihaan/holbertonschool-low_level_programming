#include "main.h"
/**
 * *leet - Encode a string into 1337
 * @s : the string
 * Return: Always 0.
 */
char *leet(char *s)
{
	char *letter = "aAeEoOtTlL", *leet = "4433007711", *ptr = s;
	int i = 0;

	while (*s)
	{
		while (letter[i] && leet[i])
/* Tant que la chaine n'est pas finie */
		{
			if (*s == letter[i])
				*s = leet[i];
/* Si l'un des char est dans ma liste je le remplace */
			i++;
		}
		s++;
		i = 0;
/* Je réinitialise i a 0 */
	}
	return (ptr);
}
