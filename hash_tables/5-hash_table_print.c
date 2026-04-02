#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_print - Prints a hash table
 * @ht: pointer to the head of the list
 * Return: size_t
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long i = 0, size;
	int first = 1;

	printf("{");
	size = ht->size;
	node = ht->array[i];

	for (i = 0; i < size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (!first)
				printf(", ");
			first = 0;
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
		}
	}
	printf("}\n");
}
