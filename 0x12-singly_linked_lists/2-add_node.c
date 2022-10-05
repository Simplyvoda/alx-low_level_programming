#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a new node at the beginning of list.
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *copy;
	int i;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	copy = strdup(str);
	if (copy == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (i = 0; str[i];)
		i++;

	new_node->str = copy;
	new_node->len = i;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
