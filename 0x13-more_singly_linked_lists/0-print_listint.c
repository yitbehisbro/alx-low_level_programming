#include "lists.h"
#include <stdio.h>

/**
 * print_listint -  prints all the nodes of a listint_t list.
 * @h: pointer to struct
 *
 * Return: number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t cntr = 0;

	while (h != NULL)
	{
		cntr++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (cntr);
}
