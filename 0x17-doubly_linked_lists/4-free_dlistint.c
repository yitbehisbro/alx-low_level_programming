#include "lists.h"

/**
 * free_dlistint - frees the memory
 * @head: pointer to the struct
 *
 * Return: void has no return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *logs;

	if (head != NULL)
	{
		for (; head->prev != NULL;)
			head = head->prev;
	}
	for (; (logs = head) != NULL;)
	{
		head = head->next;
		free(logs);
	}
}
