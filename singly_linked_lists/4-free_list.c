#include <string.h>
#include "lists.h"
/**
 * free_list - Frees a list
 * @head: pointer to the head of the list
 * Return: size_t
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
