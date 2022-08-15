#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees the memory
 * @head: pointer to the struct
 *
 * Return: Always 0.
 */
void free_listint(listint_t *head)
{
	listint_t *cleans;

	while ((cleans = head) != NULL)
	{
		head = head->next;
		free(cleans);
	}
}
