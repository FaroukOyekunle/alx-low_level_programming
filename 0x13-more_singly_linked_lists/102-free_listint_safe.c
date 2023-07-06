#include "lists.h"

/**
 * free_listint_safe - function that frees a listint_t list.
 *
 * Description: function that frees a listint_t list.
 *
 * @head: linked list
 *
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **head)
{
	listint_t *temp_node;
	size_t length;
	int difference;

	length = 0;
	if (head == NULL)
		return (0);
	if (*head == NULL)
		return (0);
	for (; *head;)
	{
		difference = *head - (*head)->next;
		if (difference > 0)
		{
			temp_node = (*head)->next;
			free(*head);
			*head = temp_node;
			length++;
		}
		else
		{
			free(*head);
			*head = NULL;
			length++;
			break;
		}
	}
	*head = NULL;
	return (length);
}
