#include "main.h"
/**
 * puts2 - Prints every other character of a string
 * @str : The string used
 * Return: Nothing
 */
void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;

		if (*str == '\0')
			break;
		else
			str++;
	}
	_putchar('\n');

}
