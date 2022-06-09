#include "lists.h"
#include <string.h>

/**
 * add_dnodeint - adds a node to the beginning of a linked list
 * @head: linked list head
 * @n: integer
 * Return: address of new node or NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
new_node->prev = NULL;
	*head = new_node;

	return (new_node);
}
