#include "lists.h"

/**
 * dlistint_len - prints the number of elements in dlistint_t list.
 * @h: pointer to the dlistint_t list.
 *
 * Return: the number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	if (h == NULL)
		return ('\0');

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
