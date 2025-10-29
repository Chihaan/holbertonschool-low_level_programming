#include "main.h"

char *cap_string(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
		if ((*ptr - 1 <= '0' && *ptr - 1 >='9') && (*ptr - 1 <= 'a' && *ptr - 1 >= 'z'))
			*ptr = *ptr - 32;
		ptr++;
	return (str);
}