#include "lists.h"

/**
 * sum_listint - prints the sum of a linked list
 * @head: pointer to the struct
 *
 * Return: sum of elements else 0
 */
int sum_listint(listint_t *head)
{
	unsigned int cntr = 0;
        int sum = 0;

	while (head != NULL)
	{
                cntr++;
                sum += head->n;
		head = head->next;
	}
	return (sum);
}
