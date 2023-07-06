#include "lists.h"

/**
 * print_listint_safe - function that prints a listint_t linked list
 *
 * Description: function that prints a listint_t linked list.
 *
 * @head: linked list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *temp_node, *linked_node;
	size_t count, new_node;

	temp_node = linked_node = NULL;
	count = 0;
	temp_node = (listint_t *) head;
	for (; temp_node;)
	{
		printf("[%p] %d\n", (void *)temp_node, temp_node->n);
		count++;
		temp_node = temp_node->next;
		linked_node = (listint_t *) head;
		new_node = 0;
		for (; new_node < count;)
		{
			if (temp_node == linked_node)
			{
				printf("-> [%p] %d\n", (void *)temp_node, temp_node->n);
				return (count);
			}
			linked_node = linked_node->next;
			new_node++;
		}
		if (!head)
		{
			exit(98);
		}
	}
	return (count);
}
