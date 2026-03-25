#include <string.h>
#include "lists.h"
/**
 * add_node - Adds a new node at the beginning
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
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}
