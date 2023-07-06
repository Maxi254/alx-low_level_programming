#include "lists.h"

/**
 * add_nodeint_end - adds new node to the end f ll
 * @head: head
 * @n: n elem
 *
 * Return: address of the new element. NUll if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ne_no;
	listint_t *te;

	(void)te;

	ne_no = malloc(sizeof(listint_t));

	if (ne_no == NULL)
		return (NULL);

	ne_no->n = n;
	ne_no->next = NULL;
	te = *head;
	if (*head == NULL)
	{
		*head = ne_no;
	}
	else
	{
		while (te->next != NULL)
		{
			te = te->next;
		}
		te->next = ne_no;
	}

	return (*head);
}
