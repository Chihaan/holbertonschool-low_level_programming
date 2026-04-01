#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * *get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: pointer to the head of the list
 * @index: the indexw of the node
 * Return: dlistint_t node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *tmp;

	tmp = head;

	for (i = 0; i < index; i++)
	{
		tmp = tmp->next;
		if (!tmp)
			return (NULL);
	}
	return (tmp);
}
