#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all elements of a listint_t list.
 * @h: prt to the head of hte list
 * Return: no of nodes
 */

size_t Print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d", h->n); /* prints value of node */

		if (h->next != NULL)
			printf(" -> "); /* adds row */
		h = h->next;
		count++;
	}

	printf("\n");

	return count;
}
