#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 *@head: pointer to the head of the list
 *@str: string to be added
 *
 * Return: returns the address to the new element or NULL
 * if failed
*/

list_t *add_node(list_t **head, const char *str)
{
	char *duplicate;
	int length;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	duplicate = strdup(str);
	if (duplicate == NULL)
	{
		free(new);
		return (NULL);
	}
	for (length = 0; str[length];)
		length++;

	new->str = duplicate;
	new->length = length;
	new->next = *head;

	*head = new;

	return (new);

}

