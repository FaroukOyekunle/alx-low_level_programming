#include "lists.h"

/**
 * free_listint - Frees a linked list
 * @head: Head of the list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
    listint_t *current = head;
    listint_t *temp;

    while (current != NULL)
    {
        temp = current;
        current = current->next;
        free(temp);
    }
}

