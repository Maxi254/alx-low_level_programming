#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - ads a new node
 * @head: double ptr
 * @str: str to be put in new node
 * Return: address for success
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n, *t;
	size_t aah;

	n = malloc(sizeof(list_t));

	if (n == NULL)
		return (NULL);
	n->str = strdup(str);
	for (aah = 0; str[aah]; aah++)
	{
		;
	}
	n->len = aah;
	n->next = NULL;
	t = *head;
	if (t == NULL)
	{
		*head = n;
	}
	else
	{
		while (t->next != NULL)
			t = t->next;
		t->next = n;
	}
	return (*head);
}
