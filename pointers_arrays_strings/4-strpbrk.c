#include "main.h"
/**
 * _strpbrk - cherche le premier caractère de s présent dans accept
 * @s: chaîne à parcourir
 * @accept: ensemble de caractères à comparer
 * Return: pointeur vers le premier caractère trouvé, ou NULL si aucun
 */
char *_strpbrk(char *s, char *accept)
{
	char *ps = s, *paccept = accept;

	while (*ps != '\0')
	{
		while (*paccept != '\0')
		{
			if (*ps == *paccept)
			{
				return (ps);
			}
			paccept++;
		}
		paccept = accept;
		ps++;
	}
	return (0);

}
