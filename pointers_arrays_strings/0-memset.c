#include "main.h"

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	char *so = s;

	while (i <= n)
	{
		so[i] = b;
		i++;
	}
	return (s);
}
