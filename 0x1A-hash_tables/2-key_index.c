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
	unsigned long int key_idx;

	if (key == NULL || size == 0)
		return (0);

	key_idx = hash_djb2(key) % size;

	return (key_idx);
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
	shash_table_t *table = malloc(sizeof(shash_table_t));
	shash_node_t **array = malloc(sizeof(shash_node_t *) * size);
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
 * add_nodeint - adds a node at the beginning.
 * @head: head of the hash_node_t linked list.
 * @key: is the key.
 * @value: is the value associated with the key.
 *
 * Return: head of the hash_node_t
 */
shash_node_t *add_nodeint(shash_node_t **head,
			 const char *key, const char *value)
{
	shash_node_t *logs;

	logs = *head;

	while (logs != NULL)
	{
		if (strcmp(key, logs->key) == 0)
		{
			free(logs->value);
			logs->value = strdup(value);
			return (*head);
		}
		logs = logs->next;
	}

	logs = malloc(sizeof(shash_node_t));

	if (logs == NULL)
		return (NULL);

	logs->key = strdup(key);
	logs->value = strdup(value);
	logs->next = *head;
	*head = logs;

	return (*head);
}

/**
 * shash_table_set - adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to
 * @key: is the key.
 * @value: is the value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index_k;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index_k = key_index((unsigned char *)key, ht->size);

	if (add_nodeint(&(ht->array[index_k]), key, value) == NULL)
		return (0);

	return (1);
}
