#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given index in a doubly linked list.
 * @head: Double pointer to the head node of the list.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *temp = *head;
    unsigned int i = 0;

    if (*head == NULL)
        return -1;

    if (index == 0)
    {
        *head = (*head)->next;
        if (*head != NULL)
            (*head)->prev = NULL;
        free(temp);
        return 1;
    }

    while (temp != NULL)
    {
        if (i == index)
        {
            if (temp->next != NULL)
                temp->next->prev = temp->prev;
            if (temp->prev != NULL)
                temp->prev->next = temp->next;
            free(temp);
            return 1;
        }
        temp = temp->next;
        i++;
    }

    return -1;
}

