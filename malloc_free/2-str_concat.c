#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - Count the length of a string
 * @str : The string we wanna know the length
 * Return: Count
 */
int _strlen(char *str)
{
	int count = 0;

	while (*str++)
		count++;
	return (count);
}
/**
 * *str_concat - Concatenates two strings
 * @s1 : First string
 * @s2 : Second string
 * Return: NULL if size 0 or a pointer to the array
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	ptr = malloc(_strlen(s1) * sizeof(char) + _strlen(s2) * sizeof(char) + 1);

	if (ptr == NULL)
		return (NULL);

	while (*s1)
	{
		ptr[i] = *s1;
		s1++;
		i++;
	}
	while (*s2)
	{
		ptr[i] = *s2;
		s2++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
