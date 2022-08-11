#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints the list of lists
 * @h: pointer to the struct
 * Return: Always 0.
 */
size_t print_list(const list_t *h)
{
	size_t cntr = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		cntr++;
	}
	return (cntr);
}
