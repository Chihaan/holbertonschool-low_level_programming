#include "main.h"
/**
 * *leet - Converts specific letters in a
 * string to their leet speak equivalents.
 * @str: Pointer to the input string to be converted.
 * Return: Pointer to the modified string with leet speak characters.
 * Description: The function scans through the input string and replaces
 * certain characters: 'a'/'A' with '4', 'e'/'E' with '3', 'o'/'O'
 * with '0', 't'/'T' with '7', and 'l'/'L' with '1'.
 */
char *leet(char *str)
{
	char l[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L' };
	char c[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	char *ostr = str;
	int i;

	while (*ostr != '\0')
	{
		for (i = 0; i <= 9; i++)
		{
			if (*ostr == l[i])
			{
				*ostr = c[i];
			}
		}
		ostr++;
	}
	return (str);
}
