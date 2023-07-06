#include "hash_tables.h"

/**
 * key_index - function that gives the index of a key
 * @key: the key str to calculate its has value and get its index
 * @size: size of the created hash table
 *
 * Return: index at which the key/value pair should be stored in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index, key_index;

	index = hash_djb2(key);
	key_index = index % size;

	return (key_index);
}

