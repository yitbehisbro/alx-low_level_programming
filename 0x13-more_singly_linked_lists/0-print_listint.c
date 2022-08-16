#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints nodes of the
 * linked lists
 * @h: pointer to the struct
 *
 * Return: number of elements
 */
size_t print_listint(const listint_t *h)
{
	size_t cntr = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		cntr++;
	}
	return (cntr);
}
