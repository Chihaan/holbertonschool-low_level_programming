#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * *add_node - adds a new node at the beginning
 * @head: pointer to the head of the list
 * @str: the string
 * Return: size_t
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = strlen(str);
	new->next = head;
	*head = new;

	return (new);
}
