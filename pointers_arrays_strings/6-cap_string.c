#include "main.h"
/**
 * *cap_string - Converts all lowercase letters in a string to uppercase.
 * @str: Pointer to the string to be modified.
 * This function iterates through each character of the string pointed to by
 * str, converting any lowercase letter to its uppercase equivalent. The
 * function modifies the string in place and returns the modified string.
 *
 * Return: Pointer to the converted string.
 */
char *cap_string(char *str)
{
	char *ptr = str, sprt[13] = {',', ';', '.', '!', '?',
		 '"', '(', ')', '{', '}', '\n', ' ', '\t'};
	int i;

	if (*ptr >= 'a' && *ptr <= 'z')
		*ptr = *ptr - 32;

	while (*ptr != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*ptr == sprt[i])
			{
				if (*(ptr + 1) >= 'a' && *(ptr + 1) <= 'z')
				{
					ptr = ptr + 1;
					*ptr = *ptr - 32;
				}
			}
		}	
		ptr++;
	}
	return (str);
}
