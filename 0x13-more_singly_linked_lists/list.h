#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
typedef struct listint_s
{
int n;
struct listint_s *next;
} listint_t;

/* Function prototypes */
size_t print_listint(const listint_t *h);              // Print the elements of the linked list
size_t listint_len(const listint_t *h);                // Get the length of the linked list
listint_t *add_nodeint(listint_t **head, const int n); // Add a new node at the beginning of the linked list
listint_t *add_nodeint_end(listint_t **head, const int n); // Add a new node at the end of the linked list
void free_listint(listint_t *head);                    // Free the memory allocated for the linked list
void free_listint2(listint_t **head);                  // Free the memory allocated for the linked list and set the head to NULL
int pop_listint(listint_t **head);                     // Remove the first node from the linked list
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index); // Get the node at a specific index
int sum_listint(listint_t *head);                      // Calculate the sum of all elements in the linked list
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n); // Insert a new node at a specific index
int delete_nodeint_at_index(listint_t **head, unsigned int index); // Delete a node at a specific index

#endif /* LISTS_H */
