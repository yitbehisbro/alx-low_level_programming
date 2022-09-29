#include "lists.h"

/**
 * sum_dlistint - prints the sum of a dlistint_t linked list
 * @head: pointer to the struct
 *
 * Return: sum of elements else 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	for (; head != NULL;)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
