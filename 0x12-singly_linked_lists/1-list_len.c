#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - prints length of the elements
 * @h: pointer to the struct
 *
 * Return: Always 0.
 */
size_t list_len(const list_t *h)
{
	size_t cntr = 0;

	while (h != NULL)
	{
		cntr++;
		h = h->next;
	}
	return(cntr);
}
