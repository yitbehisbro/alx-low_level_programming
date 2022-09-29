#include "lists.h"

/**
 * get_dnodeint_at_index - prints the nth node of a dlistint_t list
 * @head: pointer to the struct
 * @index: index of the node, starting at 0
 *
 * Return: nth node else NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int a = 0;

	if (head == NULL)
		return (NULL);

	while (a < index)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
		a++;
	}
	return (head);
}
