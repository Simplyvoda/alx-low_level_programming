#include "lists.h"
#include <string.h>

/**
 * add_dnodeint_end - adds a node to the end of a linked list
 * @head: head of linked list
 * @n: integer elementt
 * Return: address of new node or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current_node;
	dlistint_t *new_node;

	current_node = *head;
	while (current_node && current_node->next != NULL)
		current_node = current_node->next;
	
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = current_node;

	if (current_node)
		current_node->next = new_node;
	else
		*head = new_node;

	return (new_node);
}
