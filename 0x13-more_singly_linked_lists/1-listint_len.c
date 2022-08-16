#include <stdio.h>
#include "lists.h"

/**
 * listint_len - prints number of the
 * elements
 * @h: pointer to the struct
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t cntr = 0;

	while (h != NULL)
	{
		h = h->next;
		cntr++;
	}
	return (cntr);
}
