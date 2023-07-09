#include "hash_tables.h"

/**
 * shash_table_create - function that creates a shash_table_t
 * @size: size of the array of the hashed table
 *
 * Return: created hashtable
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;
	unsigned long int i;

	if (!size)
		return (NULL);

	table = malloc(sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(shash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	table->shead = NULL;
	table->stail = NULL;

	return (table);
}

/**
 * shash_table_set - function that adds an element to the shah table
 * @ht: shash table provided
 * @key: key to generate its index
 * @value: value to of key/value pair
 *
 * Return: 1 (success) or 0 (otherwise)
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *node, *temp;
	char *value_dup;
	unsigned long int index;

	if (!ht || !key || *key == '\0' || !value)
		return (0);

	value_dup = strdup(value);
	if (value_dup == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->shead;

	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = value_dup;
			return (1);
		}
		temp = temp->snext;
	}

	node = malloc(sizeof(shash_node_t));
	if (node == NULL)
	{
		free(value_dup);
		return (0);
	}

	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(value_dup);
		free(node);
		return (0);
	}

	node->value = value_dup;
	node->next = ht->array[index];
	ht->array[index] = node;

	/* Keeping track of the sorted linked list */
	if (ht->shead == NULL)
	{
		node->snext = NULL;
		node->sprev = NULL;
		ht->shead = node;
		ht->stail = node;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		node->sprev = NULL;
		node->snext = ht->shead;
		ht->shead->sprev = node;
		ht->shead = node;
	}
	else
	{
		temp = ht->shead;
		while (temp->snext != NULL && strcmp(temp->snext->key, key) < 0)
			temp = temp->snext;

		node->sprev = temp;
		node->snext = temp->snext;
		if (temp->snext == NULL)
			ht->stail = node;
		else
			temp->snext->sprev = node;
		temp->snext = node;
	}

	return (1);
}

/**
 * shash_table_print - a function that prints a hash table
 * @ht: pointer to hash table
 *
 * Return: nothing
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;
	int first_key = 1;

	if (ht == NULL)
		return;

	printf("{");

	node = ht->shead;
	while (node != NULL)
	{
		if (first_key)
		{
			printf("'%s': '%s'", node->key, node->value);
			first_key = 0;
		}
		else
			printf(", '%s': '%s'", node->key, node->value);
		node = node->snext;
	}

	printf("}\n");
}


/**
 * shash_table_print_rev - a function that prints a hash table in rev
 * @ht: pointer to hash table
 *
 * Return: nothing
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;
	int first_key = 1;

	if (ht == NULL)
		return;

	printf("{");

	node = ht->stail;
	while (node != NULL)
	{
		if (first_key)
		{
			printf("'%s': '%s'", node->key, node->value);
			first_key = 0;
		}
		else
			printf(", '%s': '%s'", node->key, node->value);
		node = node->sprev;
	}

	printf("}\n");
}

/**
 * shash_table_get - function that retrieves a value associated to a key
 * @ht: the provided hash table to access
 * @key: the key lookup
 *
 * Return: value or NULL if key not found
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *node;

	if (!key || *key == '\0' || !ht)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->shead;
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->snext;
	}

	return (NULL);
}

/**
 * hash_table_delete - a function that deletes provided hash table
 * @ht: takes node as parameter
 *
 * Return: nothing
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node, *temp;

	if (ht == NULL)
		return;

	node = ht->shead;

	while (node != NULL)
	{
		temp = node;
		node = node->snext;

		free(temp->key);
		free(temp->value);
		free(temp);
	}

	free(ht->array);
	free(ht);
}

