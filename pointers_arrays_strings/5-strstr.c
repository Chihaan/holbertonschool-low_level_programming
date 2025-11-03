#include "main.h"
/**
 * _strstr - cherche la première occurrence de needle dans haystack
 * @haystack: chaîne principale
 * @needle: sous-chaîne à trouver
 * Return: pointeur vers le début de la sous-chaîne trouvée
 * , ou NULL si absente
 */
char *_strstr(char *haystack, char *needle)
{
	char *pneedle = needle, *phaystack = haystack;

	if (*needle == '\0')
		return (haystack);

	while (*haystack != '\0')
	{
		phaystack = haystack;
		pneedle = needle;

		while (*phaystack && *pneedle && *phaystack == *pneedle)
		{
			pneedle++;
			phaystack++;
		}
		if (*pneedle == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
