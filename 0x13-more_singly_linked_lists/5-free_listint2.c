#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees the memory
 * @head: pointer to the struct
 *
 * Return: Always 0.
 */
void free_listint2(listint_t **head)
{
        listint_t *clean;
	listint_t *temp;

	if (head != NULL)
	{
		clean = *head;
		while ((temp = clean) != NULL)
		{
			clean = clean->next;
			free(temp);
		}
		*head = NULL;
	}
}
