#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table
 * @ht: pointer to hash table
 *
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	int first_key = 1;

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];

		while (node != NULL)
		{
			if (first_key)
			{
				printf("'%s': '%s'", node->key, node->value);
				first_key = 0;
			}
			else
				printf(", '%s': '%s'", node->key, node->value);

			node = node->next;
		}
	}

	printf("}\n");
}

