#include <stdlib.h>
#include "main.h"

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int total = nmemb * size, i;


	if (!size || !nmemb)
		return (NULL);
	
	if (total / nmemb != size)
		return (NULL);

	p = malloc(nmemb * size);
	if (!p)
		return (NULL);

	for (i = 0; i < total; i++)
		p[i] = 0;

	return (p);
}