#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning
 * @head: pointer to the struct head
 * @n: integer to be added
 *
 * Return: the address of the new element,
 * or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
        listint_t *h;

        h = malloc(sizeof(listint_t));

	if (h != NULL)
	{
		h->n = n;
		h->next = *head;
		*head = h;
		return (*head);
	}
	return (0);
}
