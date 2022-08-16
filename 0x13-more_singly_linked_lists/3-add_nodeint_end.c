#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the end
 * @head: pointer to the struct head
 * @n: integer to be added
 *
 * Return: the address of the new element,
 * or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *h;
	listint_t *temp;

	(void)temp;

	h = malloc(sizeof(listint_t));

	if (h == NULL)
		return (NULL);

	h->n = n;
	h->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = h;
	}
	else
	{
		while (temp->n != NULL)
		{
			temp = temp->next;
		}
		temp->next = h;
	}

	return (*head);
}
