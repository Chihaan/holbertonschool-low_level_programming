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
 * *_strdup - Returns a pointer to a newly allocated space in memory
 * @str : The string to copy
 * Return: NULL if size 0 or a pointer to the array
 */
char *_strdup(char *str)
{
	char *ptr;
	int i = 0;

	if (str == NULL)
		return (NULL);

	ptr = malloc(_strlen(str) * sizeof(*ptr) + 1);

	if (ptr == 0)
		return (NULL);

	while (*str)
	{
		ptr[i] = *str;
		i++;
		str++;
	}
	ptr[i] = '\0';
	return (ptr);
}
