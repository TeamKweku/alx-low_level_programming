#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: the hash table to add or update
 * @key: the key of the key/value pair
 * @value: the value to add at key_index
 *
 * Return: 1 (success) or 0 (otherwise)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *value_dup;
	hash_node_t *node;
	unsigned long int index, i;

	if (!key || *key == '\0' || !value || !ht)
		return (0);

	value_dup = strdup(value);
	if (value_dup == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_dup;
			return (1);
		}
	}

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(value_dup);
		return (0);
	}
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}
	node->value = value_dup;
	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
