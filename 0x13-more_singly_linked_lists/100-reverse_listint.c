#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list.
 *
 * Description: function that reverses a listint_t linked list.
 *
 * @head: list
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous_node, *next_node;

	previous_node = next_node = NULL;
	for (; *head;)
	{
		next_node = (*head)->next;
		(*head)->next = previous_node;
		previous_node = *head;
		*head = next_node;
	}
	*head = previous_node;
	return (*head);
}
