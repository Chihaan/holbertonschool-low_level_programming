#include "main.h"
/**
 * _strspn - calcule la longueur du segment initial d'une chaîne
 * composé uniquement de caractères présents dans accept
 * @s: chaîne à analyser
 * @accept: caractères autorisés
 * Return: nombre d'octets initiaux appartenant à accept
 */
unsigned int _strspn(char *s, char *accept)
{
	char *ps = s, *paccept = accept;
	unsigned int cpt = 0, found;

	while (*ps != '\0')
	{
		found = 0;
		while (*paccept != '\0')
		{
			if (*paccept == *ps && found == 0)
			{
				cpt += 1;
				found = 1;
				break;
			}
			paccept++;
		}
		if (found == 0)
			return (cpt);
		ps++;
		paccept = accept;
	}
	return (cpt);
}
