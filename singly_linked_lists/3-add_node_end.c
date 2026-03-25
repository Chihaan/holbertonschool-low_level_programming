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
	list_t *new_end;

	new_end = malloc(sizeof(list_t));
	if (new_end == NULL)
		return (NULL);

	new_end->str = strdup(str);
	if (new_end->str == NULL)
	{
		free(new_end->str);
		return (NULL);
	}

	new_end->len = strlen(str);


}
