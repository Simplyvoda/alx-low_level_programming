#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of list_t list
 * @head: double pointer to the head of the linked list
 * @str: pointer to string
 * Return: SUCCESS, NULL or FAILURE
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last;
	list_t *new;
	char *copy;
	int i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}

	copy = strdup(str);
	if (copy == NULL)
	{
		free(new);
		return (NULL);
	}

	for (i = 0; str[i];)
		i++;

	new->str = copy;
	new->len = i;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new;
	}
	return (*head);
}
