#include "lists.h"

/**
 * listint_len - returns num of elem in a linked list
 * @h: head
 * Return: numbers of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t cout = 0;

	while (h != NULL)
	{
		h = h->next;
		cout++;
	}
	return (cout);
}
