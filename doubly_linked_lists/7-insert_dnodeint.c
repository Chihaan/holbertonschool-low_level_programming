#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * *insert_dnodeint_at_index - Insert a node at index
 * @h: pointer to the head of the list
 * @idx: the index of the node
 * @n: the value in the node
 * Return: dlistint_t node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *new;
	size_t i;

	if (idx == 0)
		return (add_dnodeint(h, n));

	tmp = *h;

	for (i = 0; i < idx; i++)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
	}

	if (tmp == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = tmp->prev;
	new->next = tmp;
	tmp->prev->next = new;
	tmp->prev = new;

	return (new);
}
