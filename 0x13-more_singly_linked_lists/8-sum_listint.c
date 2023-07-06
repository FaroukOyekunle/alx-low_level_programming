#include "lists.h"

/**
 * sum_listint - Sums up all the data in a linked list
 * @head: Head of the list
 *
 * Return: Sum of the numbers
 */
int sum_listint(listint_t *head)
{
    listint_t *cursor = head;
    int sum = 0;

    while (cursor != NULL)
    {
        sum += cursor->n;
        cursor = cursor->next;
    }

    return sum;
}
