#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: the size of the array
 *
 * Return: a pointer to the newly created hash table
 * else returns NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));
	hash_node_t **array = malloc(sizeof(hash_node_t *) * size);
	unsigned long int i = 0;

	if (table == NULL || array == NULL)
		return (NULL);

	while (i < size)
	{
		array[i] = NULL;
		i++;
	}
	table->array = array;
	table->size = size;

	return (table);
}

/**
 * shash_table_create - creates a hash table.
 * @size: the size of the array
 *
 * Return: a pointer to the newly created hash table
 * else returns NULL
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));
	hash_node_t **array = malloc(sizeof(hash_node_t *) * size);
	unsigned long int i = 0;

	if (table == NULL || array == NULL)
		return (NULL);

	while (i < size)
	{
		array[i] = NULL;
		i++;
	}
	table->array = array;
	table->size = size;

	return (table);
}
