#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * free_list - Frees a list
 * @node: pointer to the first node of a list
 * Return: void
 */
void free_list(hash_node_t *node)
{
	hash_node_t *tmp;

	while (node)
	{
		tmp = node->next;
		free(node->key);
		free(node->value);
		free(node);
		node = tmp;
	}
}
/**
 * hash_table_delete - Deletes a hash table
 * @ht: The hash table
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *del;

	for (i = 0; i < ht->size; i++)
	{
		del = ht->array[i];
		free_list(del);
	}
	free(ht->array);
	free(ht);
}
