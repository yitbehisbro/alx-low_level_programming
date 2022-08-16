#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the structs
 *
 * Return: The address of the node where the loop
 * starts, or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tavsan;
	listint_t *kaplumbalar;

	tavsan = kaplumbalar = head;
	while (tavsan && kaplumbalar && kaplumbalar->next)
	{
		tavsan = tavsan->next;
		kaplumbalar = kaplumbalar->next->next;
		if (tavsan == kaplumbalar)
		{
			tavsan = head;
			break;
		}
	}
	if (!tavsan || !kaplumbalar || !kaplumbalar->next)
		return (NULL);
	while (tavsan != kaplumbalar)
	{
		tavsan = tavsan->next;
		kaplumbalar = kaplumbalar->next;
	}
	return (kaplumbalar);
}
