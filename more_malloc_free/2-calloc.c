#include <stdlib.h>
#include "main.h"

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int total = nmemb * size, i;


	if (!size || !nmemb)
		return (NULL);
	
	if (total / nmemb != size)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
		
	for (i = 0; i < total; i++)
		ptr[i] = 0;

	return (ptr);
}