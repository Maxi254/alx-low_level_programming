#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees linked l
 * @head: list_t
 * Return: success
 */

void free_list(list_t *head)
{
	if (head == NULL)
	{
		return;
	}

	list_t *current = head;
	while (current->next != NULL)
	{
		list_t *next = current->next;
		free(current->str);
		free(current);
		current = next;
	}

	/* free the last node */
	free(current->str);
	free(current);
}
