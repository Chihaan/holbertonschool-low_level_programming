#include "main.h"
/**
 * _islower - Checks for lowercase character
 * @c : The letter we are checking
 * Return: Nothing
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
