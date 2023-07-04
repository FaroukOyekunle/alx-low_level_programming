#include "lists.h"

/**
 * print_list - prints all the elements of a list
 *
 * @h: pointer to the list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
    const list_t *current = h;
    size_t count = 0;

    while (current != NULL)
    {
        if (current->str != NULL)
            printf("[%u] %s\n", current->len, current->str);
        else
            printf("[0] (nil)\n");

        count++;
        current = current->next;
    }

    return count;
}

