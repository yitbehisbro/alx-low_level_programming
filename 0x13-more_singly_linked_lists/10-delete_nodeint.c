#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at a
 * given position
 * @head: pointer to the struct
 * @index: index of the node, starting at 0
 *
 * Return: 1 or -1 if fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
 	unsigned int a;
	listint_t *prev;
	listint_t *next;

	prev = *head;

	if (index != 0)
	{
		for (a = 0; a < index - 1 && prev != NULL; a++)
		{
			prev = prev->next;
		}
	}

	if (prev == NULL || (prev->next == NULL && index != 0))
	{
		return (-1);
	}

	next = prev->next;

	if (index != 0)
	{
		prev->next = next->next;
		free(next);
	}
	else
	{
		free(prev);
		*head = next;
	}

	return (1);
}
