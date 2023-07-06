#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at the specified index
 * @head: Pointer to the pointer of the head of the list
 * @index: Index of the node to be deleted
 *
 * Return: 1 if successful, -1 if the deletion fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *old_node = NULL;
    listint_t *previous_node = NULL;
    unsigned int i = 0;
    size_t list_len = listint_len(*head);

    if (index >= list_len || list_len == 0)
        return -1;

    while (*head != NULL)
    {
        if (i == index)
        {
            old_node = *head;
            if (i == 0)
            {
                *head = old_node->next;
                free(old_node);
                return 1;
            }
            previous_node->next = old_node->next;
            free(old_node);
            return 1;
        }
        else if ((i + 1) == index)
            previous_node = *head;

        head = &((*head)->next);
        i++;
    }

    return -1;
}

/**
 * listint_len - Counts the number of nodes in a linked list
 * @h: Head of the list
 *
 * Return: The number of elements
 */
size_t listint_len(const listint_t *h)
{
    const listint_t *cursor = h;
    size_t count = 0;

    while (cursor != NULL)
    {
        count += 1;
        cursor = cursor->next;
    }

    return count;
}
