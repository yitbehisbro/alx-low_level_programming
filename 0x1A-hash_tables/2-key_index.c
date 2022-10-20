#include "hash_tables.h"

/**
 * key_index - gives you the index of a key.
 * @key: is the key
 * @size: is the size of the array of the hash table
 *
 * Return: the index at which the key/value pair
 * should be stored in the array of the hash table
 *
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i = 0, j;

	for (j = 0; key[j]; j++)
		i += key[j];

	return (i % size);
}
