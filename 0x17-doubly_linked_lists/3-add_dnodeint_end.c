#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to the dlistint_t list.
 * @n: data to be added at the end
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	h = *head;

	if (h == NULL)
	{
		*head = new_node;
	}
	else
	{
		for (; h->next != NULL;)
			h = h->next;
		h->next = new_node;
	}
	new_node->prev = h;
	return (new_node);
}
