#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the struct
 * @n: values to be added
 * @idx: index of the node, starting at 0
 *
 * Return: the address of the new node else NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new;
	dlistint_t *head;

	head = *h;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && head != NULL; i++)
		{
			head = head->next;
		}
	}

	if (head == NULL && idx != 0)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *h;
		*h = new;
	}
	else
	{
		new->next = head->next;
		head->next = new;
	}

	return (new);
}
