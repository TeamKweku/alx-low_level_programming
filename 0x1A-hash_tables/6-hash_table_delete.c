#include "hash_tables.h"

/**
 * delete_node - a function that deletes provided hash node
 * @node: takes node as parameter
 *
 * Return: nothing
 */
void delete_node(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}

/**
 * hash_table_delete - a function that deletes a hash table
 * @ht: the provided hash table
 *
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *temp;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];

		while (node != NULL)
		{
			temp = node;
			node = node->next;
			delete_node(temp);
		}
	}

	free(ht->array);
	free(ht);
}
