#include "lists.h"

/**
 * print_listint - Prints all the elements of a linked list
 * @h: Head of the list
 *
 * Returns: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
    const listint_t *cursor = h; // Create a cursor to traverse the list
    size_t count = 0; // Initialize count to 0

    while (cursor != NULL)
    {
        printf("%d\n", cursor->n); // Print the value of the current node
        count += 1; // Increment the count
        cursor = cursor->next; // Move the cursor to the next node
    }

    return count; // Return the total count of nodes
}

