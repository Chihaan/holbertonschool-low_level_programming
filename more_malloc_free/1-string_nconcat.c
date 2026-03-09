#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * len - Count the length of a string
 * @str : The string we wanna know the length
 * Return: Count
 */
unsigned int len(char *str)
{
	unsigned int count = 0;

	while (*str++)
		count++;
	return (count);
}
/**
 * *string_nconcat - Concatenates two strings
 * @s1 : First string
 * @s2 : Second string
 * @n : Number of char copied
 * Return: NULL if size 0 or a pointer to the array
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, lens1, lens2;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	lens2 = len(s2);
	if (n >= lens2)
		n = lens2;
	ptr = malloc((len(s1) * sizeof(*s1)) + (n * sizeof(*s2)) + 1);
	if (ptr == NULL)
		return (NULL);
	lens1 = len(s1);
	for (i = 0; i < lens1; i++)
	{
		ptr[i] = *s1;
		s1++;
	}
	for (j = 0; j < n; j++)
	{
		ptr[i] = *s2;
		s2++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
