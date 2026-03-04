#include "main.h"
/**
 * *_strncpy - Copy a string 
 * @dest : Destination string
 * @src : Source string
 * @n : 
 * Return: Always 0.`
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count = 0;
	char *ptr = dest;
	
	while (*src != '\0' && count < n)
	{	
		*dest = *src;
		count++;
		dest++;
		src++;
	}
	while (count < n)
	{
		*dest = '\0';
		dest++;
		count++;
	}	
	return (ptr);			
}
