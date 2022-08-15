#include "lists.h"
#include <stdlib.h>

/**
 * get_node - get the size of node
 * @h: pointer to the struct
 *
 * Return: size of the list.
 */
int get_node(listint_t * h)
{
        unsigned int length = 0;

        while (h != NULL)
        {
                h = h->next;
                length++;
        }
        return (length);
}

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the struct
 * @n: values to be added
 * @idx: index of the node, starting at 0
 *
 * Return: the address of the new node else NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
        listint_t *temp = *head;
        unsigned int size = get_node(*head);
        listint_t *h = (listint_t *) malloc(sizeof(listint_t)); 

        h->n = n;
        h->next = NULL;

        if (idx > size) 
                return (NULL);
        else if (idx == 0)
        {
                h->next = *head; 
                *head = h;
        }
        else 
        {
                while (--idx)
                        temp = temp->next;
                h->next= temp->next;
                temp->next = h;
        }
        return (*head);
}
