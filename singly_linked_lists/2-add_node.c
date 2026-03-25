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
	unsigned int i = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	while (str[i])
		i++;

	new->len = i;
	new->next = *head;
	*head = new;

	return (new);
}
