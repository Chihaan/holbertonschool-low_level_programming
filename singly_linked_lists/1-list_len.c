#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - that returns the number of elements in a linked list
 * @h: pointer to the head of the list
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes += 1;
	}
	return (nodes);
}
