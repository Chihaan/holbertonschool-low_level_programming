#include "main.h"
/**
 * *_strstr - Finds the first occurrence of the substring
 * @haystack : The source file
 * @needle : The substring
 * Return: A pointer to the first occurence
 */
char *_strstr(char *haystack, char *needle)
{
	char *n = needle;
	int count = 0, needle_len = 0;

	while (*needle++)
		needle_len += 1;
	needle = n;

	while (*haystack)
	{
		if (*haystack == *needle)
		{
			count = 1;
			while (*needle)
			{
				if (*needle != *haystack)
				{
					needle = n;
					count = 0;
					break;
				}
				needle++;
				haystack++;
				count += 1;
				if (count == needle_len)
					return (n);
			}
		}
		haystack++;
	}
	return (0);
}
