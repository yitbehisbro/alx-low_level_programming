#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - adds elements to the lists
 * @head: pointer to the struct head
 * @str: string to be added
 *
 * Return: Always 0.
 */
list_t *add_node(list_t **head, const char *str)
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
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
