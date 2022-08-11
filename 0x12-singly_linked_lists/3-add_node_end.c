#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - adds node to the end
 * @head: pointer to struct
 * @str: string to be added
 *
 * Return: Always 0.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	size_t cntr = 0;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		printf("Error\n");
		return (0);
	}
	while (*(str + cntr) != '\0')
	{
		cntr++;
	}
	new_node->str = strdup(str);
	new_node->len = cntr;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		list_t *last_node = *head;
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = new_node;
	}
	return (*head);
}
