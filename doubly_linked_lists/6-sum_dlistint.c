#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_dlistint - Returns the sum of all the data (n) of a dlistint_t linked list.
 * @head: pointer to the head of the list
 * Return: dlistint_t node
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *tmp;

	if (!head)
		return (0);

	tmp = head;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}	
