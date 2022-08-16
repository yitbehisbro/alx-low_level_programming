#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list.
 * @h: pointer to the struct
 *
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t a, len = 0;
	const listint_t **l = NULL;

	while (*h != NULL)
	{
		for (a = 0; a < len; a++)
		{
			if (*h == l[a])
			{
				free(l);
			}
		}
		len++;
		*h = NULL;
	}
	free(l);
	return (len);
}
