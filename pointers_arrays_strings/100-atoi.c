#include "main.h"
/**
 * int _atoi - check the code
 * @*s: 
 * return: sign + result
 */
int _atoi(char *s)
{
	int r = 0, n = 1;
	char *os = s;

	while (*os != '\0')
	{
		if (*os >= '0' && *os <= '9')
		{
			r = r * 10;
			r = r + *os - 48;
		}
		else if (*os == '-')
			n = n * -1;
		else if (r != 0)
			break;
		os++;
	}
	return (r * n);
}
