#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: head of linked list
 */
void free_list(list_t *head)
{
	list_t *curr;
	list_t *tmp;

	curr = head;

	while (curr != NULL)
	{
		tmp = curr->next;
		free(curr->str);
		free(curr);
		curr = tmp;
	}
}
