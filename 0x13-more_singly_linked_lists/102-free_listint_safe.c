#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * _realloc2 - reallocates memory to the nodes in a linked list
 * @l: the list to append
 * @s: size of the new list
 * @n: new node to add
 *
 * Return: pointer to the new list
 */
const listint_t **_realloc2(const listint_t **l, size_t s, const listint_t *n)
{
	const listint_t **list;
	size_t i;

	list = malloc(s * sizeof(listint_t *));
	if (list == NULL)
	{
		free(l);
		exit(98);
	}
	for (i = 0; i < s - 1; i++)
		list[i] = l[i];
	list[i] = n;
	free(l);
	return (list);
}

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
	listint_t *next;

	while (*h != NULL)
	{
		for (a = 0; a < len; a++)
		{
			if (*h == l[a])
			{
				*h = NULL;
				free(l);
				return (len);
			}
		}
		len++;
		l = _realloc2(l, len, *h);
		next = (*h)->next;
		free(*h);
		*h = next;
	}
	free(l);
	return (len);
}
