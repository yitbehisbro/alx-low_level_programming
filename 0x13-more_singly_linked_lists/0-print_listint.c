#include "lists.h"

/**
 * print_listint - prints all the elements
 * @h: pointer to the struct
 *
 * Return: size of the list
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
