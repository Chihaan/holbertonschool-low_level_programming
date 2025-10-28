#include "main.h"
/**
 * reset_to_98 - check the code
 * 
 */
void puts_half(char *str)
{
	int len = 0, start;

	while (str[len] != '\0')
	{
		len++;
	}
	start = len / 2;

	if ((len + 1) % 2 == 0)
	{
		start ++;
		while (str[start] != '\0')
		{
			_putchar(str[start]);
			start++;			
		}
	}
	else 
	{
		while (str[start] != '\0')
		{
			_putchar(str[start]);
			start++;		
		}
	}	
	_putchar('\n');
}
