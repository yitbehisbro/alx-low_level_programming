#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - frees the memory
 * @head: pointer to the struct
 *
 * Return: Always 0.
 */
void free_list(list_t *head)
{
	list_t *cleans;

	while ((cleans = head) != NULL)
	{
		head = head->next;
		free (cleans);
	}
}
