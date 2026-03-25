#include <string.h>
#include "lists.h"
/**
 * add_node_end - Adds a new node at the end of a list
 * @head: pointer to the head of the list
 * @str: the string
 * Return: size_t
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_end, *tmp;
	unsigned int i = 0;


	new_end = malloc(sizeof(list_t));
	if (new_end == NULL)
		return (NULL);

	new_end->str = strdup(str);
	if (new_end->str == NULL)
	{
		free(new_end);
		return (NULL);
	}

	while (str[i])
		i++;
	new_end->len = i;
	new_end->next = NULL;

	if (*head == NULL)
		*head = new_end;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_end;
	}
	return (new_end);
}
