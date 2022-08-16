#include "lists.h"

/**
 * get_nodeint_at_index - prints the nth node of a linked list
 * @head: pointer to the struct
 * @index: index of the node, starting at 0
 *
 * Return: nth node else NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a;

	if (head == NULL)
		return (NULL);

	for (a = 0; a < index; a++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
