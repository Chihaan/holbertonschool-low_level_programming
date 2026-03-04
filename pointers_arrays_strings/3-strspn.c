#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring.
 * @s : The string
 * @accept : The characters tested
 * Return: count of consecutive
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *reset = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*s == *accept)
			{
				count += 1;
				break;
			}
			accept++;
		}
		if (*accept == '\0')
			return (count);
/* Si je sors du while et que accept est sur \0 */
/* C'est qu'il a pas trouvé de correspondance */
		s++;
		accept = reset;
	}
	return (count);
}
