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
	dlistint_t *new_node = NULL;
	dlistint_t *head;
	unsigned int a;

	if (idx == 0)
		new_node = add_dnodeint(h, n);
	else
	{
		head = *h;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		for (a = 1; head != NULL; a++)
		{
			if (a == idx)
			{
				if (head->next == NULL)
					new_node = add_dnodeint_end(h, n);
				else
				{
					new_node = malloc(sizeof(dlistint_t));
					if (new_node != NULL)
					{
						new_node->n = n;
						new_node->next = head->next;
						new_node->prev = head;
						head->next->prev = new_node;
						head->next = new_node;
					}
				}
				break;
			}
			head = head->next;
		}
	}

	return (new_node);
}
