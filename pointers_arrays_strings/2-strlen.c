#include "main.h"
/**
 * _strlen - count the length of a string
 * @s : the string we wanna know the length
 * Return: count
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count += 1;
		s++;
	}
	return (count);
}
