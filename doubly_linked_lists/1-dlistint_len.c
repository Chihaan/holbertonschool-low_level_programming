#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - Returns the number of elements in a linked list
 * @h: pointer to the head of the list
 * Return: size_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes += 1;
		h = h->next;
	}
	return (nodes);
}
