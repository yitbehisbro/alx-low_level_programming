#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at a given position
 * @head: pointer to the struct
 * @index: index of the node, starting at 0
 *
 * Return: 1 or -1 if fails
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h1 = *head;
	dlistint_t *h2;
	unsigned int a;

	if (h1 != NULL)
		for (; h1->prev != NULL;)
			h1 = h1->prev;

	for (a = 0; h1 != NULL; a++)
	{
		if (a == index)
		{
			if (a == 0)
			{
				*head = h1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				h2->next = h1->next;
				if (h1->next != NULL)
					h1->next->prev = h2;
			}

			free(h1);
			return (1);
		}
		h2 = h1;
		h1 = h1->next;
	}
	return (-1);
}
