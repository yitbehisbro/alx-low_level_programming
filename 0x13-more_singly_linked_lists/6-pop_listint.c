#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - pops the head node of a linked list
 * @head: pointer to the struct
 *
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *h;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	h = *head;
	*head = h->next;
	n = h->n;
	free(h);
	return (n);
}
