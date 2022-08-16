#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees the memory
 * @head: pointer to the struct
 *
 * Return: no return
 */
void free_listint2(listint_t **head)
{
	listint_t *h;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		h = (*head)->h;
		free(*head);
		*head = next;
	}
}
