#include "main.h"
/**
 * string_toupper - Converts all lowercase letters in a string to uppercase.
 * @str: Pointer to the string to be modified.
 * This function iterates through each character of the string pointed to by
 * str, converting any lowercase letter to its uppercase equivalent. The
 * function modifies the string in place and returns the modified string.
 *
 * Return: Pointer to the converted string.
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 32;
		}
		ptr++;
	}
	return (str);
}
