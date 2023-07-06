#include "lists.h"

/**
 * add_nodeint - adds new node to beginn of the func
 * @head: head
 * @n: n elem
 * Return: address of the new element. NUll if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_nod;

	new_nod = malloc(sizeof(listint_t));

	if (new_nod == NULL)
		return (NULL);

	new_nod->n = n;
	new_nod->next = *head;

	*head = new_nod;

	return (*head);
}
