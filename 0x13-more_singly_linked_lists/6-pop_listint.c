#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - pops the head node of a linked list
 * @head: pointer to the struct
 *
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
        listint_t *h = *head;
        int backup;

        if (*head == NULL)
        {
                return (NULL);
        }
        backup = h->n;
        (*head) = (*head)->next;

        free(h);

        return (backup);
}
