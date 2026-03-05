#include "main.h"
/**
 * *_strstr - Finds the first occurrence of the substring
 * @haystack : The source file 
 * @needle : The substring
 * Return: A pointer to the first occurence
 */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack, *n = needle;
	int count = 0, needle_len = 0;

	while (*needle)
		needle_len += 1;

	while (*haystack)
	{
		if (*haystack == *needle)
		{
			h = haystack;
			while (*needle)
			{
				if (*needle != *haystack)
					needle = h;
					break;
				needle++;
				haystack++;
				count += 1;
				if (count == needle_len)
					return (h);
			}
			haystack++;
		}
	}
	return (0);
}
