#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: is the hash table you want to look into
 * @key: is the key you are looking for
 *
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	const unsigned char *k = (unsigned char *)key;
	int index = key_index(k, 1024);
	hash_node_t *item = ht->array[index];

	if (item != NULL)
		if (strcmp(item->key, key) == 0)
			return (item->value);
	return (NULL);
}
