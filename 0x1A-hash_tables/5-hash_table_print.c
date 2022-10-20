#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht:  is the hash table
 *
 * Return: void has no return value
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	char *separator = "";
	hash_node_t *logs;

	if (ht)
	{
		printf("{");
		while (i < ht->size)
		{
			logs = ht->array[i];
			while (logs != NULL)
			{
				printf("%s'%s': '%s'", separator, logs->key, logs->value);
				separator = ", ";
				logs = logs->next;
			}
			i++;
		}
		printf("}\n");
	}
}
