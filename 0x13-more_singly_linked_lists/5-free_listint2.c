#include "lists.h"

/**
 * free_listint2 - Frees a linked list
 * @head: Pointer to the address of the head of the list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
    listint_t *current;
    listint_t **temp = head;

    if (temp != NULL && *temp != NULL)
    {
        while (*head != NULL)
        {
            current = *head;
            *head = (*head)->next;
            free(current);
        }

        *temp = NULL;
    }
}

