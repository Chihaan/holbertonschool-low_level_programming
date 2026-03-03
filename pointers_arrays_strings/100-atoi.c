#include "main.h"
/**
 * main - check the code 
 *
 * Return: Always 0.
 */
int _atoi(char *s)
{
	int result = 0, sign = 1, find = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;
		if (*s >= '0' && *s <= '9')
		{
			result = result * 10 + *s - '0';
			find = 1;
		}
		else if (find == 1)
			break;
		s++;
	}
	return (result * sign);
}
