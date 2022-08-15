#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at a given position
 * @head: pointer to the struct
 * @index: index of the node, starting at 0
 *
 * Return: the address of the new node else NULL
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
        listint_t *temp = *head;
        listint_t *h;
        unsigned int i;

        if (*head != NULL)
        {
                if (index == 0)
                {
                        *head = temp->next;
                        free(temp);
                        return (1);
                }
                for (i = 0; temp != NULL && i < index - 1; i++)
                        temp = temp->next;
                if (temp == NULL || temp->next == NULL)
                        return (1);
                h = temp->next->next;
                free(temp->next);
                temp->next = h;
        }
        return (-1);
}
