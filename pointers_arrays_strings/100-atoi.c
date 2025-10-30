#include "main.h"
/**
 * reset_to_98 - check the code
 * 
 */
int _atoi(char *s)
{
    int r = 0, n = 1;
    char *os = s;

    while (*os != '\0')
    {
	if (*s > '0' && *s < 9)
	{
		r = r * 10;
		r = r + *s;
	}
	else if (*s = '-')
		n = n * -1;
	else if (*(s + 1) < '0' && *(s + 1) > ' 9')
		break;
	os++;
    }
    return (r * n);	
}
