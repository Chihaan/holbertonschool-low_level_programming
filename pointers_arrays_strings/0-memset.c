#include "main.h"

char *_memset(char *s, char b, unsigned int n)
{
	int i;
	char *so = s;

	while (so <= n)
	{
		*so = b;
		so++;
	}
	return (s);
}
