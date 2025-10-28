#include "main.h"
/**
 * rev_string - inverse une chaîne de caractères
 * @s: pointeur vers la chaîne à inverser
 *
 * Cette fonction calcule la longueur de la chaîne, puis échange les
 * caractères du début et de la fin jusqu’à ce que toute la chaîne soit inversée.
 */
void rev_string(char *s)
{
	int start = 0, end, len = 0;
	char tmp;	

	while (s[len] != '\0')
		len++;
	
	end = len - 1;

	while (start < end)
	{
		tmp = s[start];
		s[start] = s[end];
		s[end] = tmp;
		start++;
		end--;
	}
}
