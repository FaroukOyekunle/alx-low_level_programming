#include "lists.h"

/**
 * add_nodeint_end - Adds a node to the end of a linked list
 * @head: Pointer to the head of the list
 * @n: Number to be used as content
 *
 * Return: Address of the newly added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return NULL;

    new_node->n = n;
    new_node->next = NULL;

    if (*head == NULL)
    {
        *head = new_node;
    }
    else
    {
        listint_t *cursor = *head;
        while (cursor->next != NULL)
            cursor = cursor->next;

        cursor->next = new_node;
    }

    return new_node;
}
