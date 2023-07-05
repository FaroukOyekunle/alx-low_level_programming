#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a linked list
 * @head: Pointer to the head of the list
 * @index: Index of the node required
 *
 * Return: The address of the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    listint_t *cursor = head;
    unsigned int i = 0;

    while (cursor != NULL)
    {
        if (i == index)
            return cursor;

        cursor = cursor->next;
        i++;
    }

    return NULL;
}
