#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list
 *
 * Description: function that finds the loop in a linked list
 *
 * @head: list
 *
 * Return: The address of the node where the loop starts, or NULL if
 * there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *first, *second;

	first = second = head;
	if (!head)
		return (NULL);
	for (; first && second && second->next;)
	{
		second = second->next->next;
		first = first->next;
		if (second == first)
		{
			first = head;
			for (; first != second;)
			{
				first = first->next;
				second = second->next;
			}
			return (second);
		}
	}
	return (NULL);
}
