#include "hash_tables.h"

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
	unsigned long int k_index;
	shash_node_t *new;

	if (ht == NULL)
		return (0);

	if (key == NULL || *key == '\0')
		return (0);

	k_index = key_index((unsigned char *)key, ht->size);

	new = add_n_shash(&(ht->array[k_index]), key, value);

	if (new == NULL)
		return (0);

	add_i_shash(ht, new);

	return (1);
}

/**
 * shash_table_get - retrieves a value associated with a key.
 * @ht: is the hash table you want to look into
 * @key: is the key you are looking for
 *
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int k_index;
	shash_node_t *tmp;

	if (ht == NULL)
		return (NULL);

	if (key == NULL || *key == '\0')
		return (NULL);

	k_index = key_index((unsigned char *)key, ht->size);

	tmp = ht->array[k_index];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}

	return (NULL);
}

/**
 * shash_table_print - prints a hash table.
 * @ht:  is the hash table
 *
 * Return: void has no return value
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp;
	char *sep;

	if (ht == NULL)
		return;

	printf("{");
	sep = "";

	tmp = ht->shead;

	while (tmp != NULL)
	{
		printf("%s'%s': '%s'", sep, tmp->key, tmp->value);
		sep = ", ";
		tmp = tmp->snext;
	}

	printf("}\n");
}

/**
 * shash_table_print_rev - prints in reverse the keys and values of
 * the shash_table_t
 * @ht: pointer to the shash table
 *
 * Return: no return
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp;
	char *sep;

	if (ht == NULL)
		return;

	printf("{");
	sep = "";

	tmp = ht->stail;

	while (tmp != NULL)
	{
		printf("%s'%s': '%s'", sep, tmp->key, tmp->value);
		sep = ", ";
		tmp = tmp->sprev;
	}

	printf("}\n");
}

/**
 * shash_table_delete - deletes a hash table.
 * @ht: is the hash table
 *
 * Return: void has no return value
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *tmp1;
	shash_node_t *tmp2;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		tmp1 = ht->array[i];
		while ((tmp2 = tmp1) != NULL)
		{
			tmp1 = tmp1->next;
			free(tmp2->key);
			free(tmp2->value);
			free(tmp2);
		}
	}
	free(ht->array);
	free(ht);
}
