#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the
 * nodes of a list.
 * @h: pointer to the list.
 *
 * Return: numbers of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t cntrs = 0;

	for ( ; h != NULL; ++cntrs)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (cntrs);
}
