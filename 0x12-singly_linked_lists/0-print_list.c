#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints components of a list
 * @h: ptr
 * Return: Number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t elem = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		elem++;
	}
	return (elem);
}
