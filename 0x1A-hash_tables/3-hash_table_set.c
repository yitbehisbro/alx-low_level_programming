#include "hash_tables.h"

/**
 * add_nodeint - adds a node at the beginning.
 * @head: head of the hash_node_t linked list.
 * @key: is the key.
 * @value: is the value associated with the key.
 *
 * Return: head of the hash_node_t
 */
hash_node_t *add_nodeint(hash_node_t **head,
			 const char *key, const char *value)
{
	hash_node_t *logs;

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

	logs = malloc(sizeof(hash_node_t));

	if (logs == NULL)
		return (NULL);

	logs->key = strdup(key);
	logs->value = strdup(value);
	logs->next = *head;
	*head = logs;

	return (*head);
}

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to
 * @key: is the key.
 * @value: is the value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index_k;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index_k = key_index((unsigned char *)key, ht->size);

	if (add_nodeint(&(ht->array[index_k]), key, value) == NULL)
		return (0);

	return (1);
}
