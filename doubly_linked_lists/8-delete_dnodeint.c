#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes a node at index
 * @head: pointer to the head of the list
 * @index: the index of the node
 * Return: dlistint_t node
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	tmp = *head;

	for (i = 0; i < index; i++)
	{
		if (tmp == NULL)
			return (-1);
		tmp = tmp->next;
	}
	if (tmp->prev)
		tmp->prev->next = tmp->next;
	else
		*head = tmp->next;
	if (tmp->next)
		tmp->next->prev = tmp->prev;
	free(tmp);

	return (1);
}
