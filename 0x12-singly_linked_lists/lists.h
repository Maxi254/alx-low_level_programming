#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - A singly l_l
 * @str: str
 * @len: len
 * @next: A pointer to the next node
 */
typedef struct list_s
{
	char *st;
	unsigned int lens;
	struct list_s *next;
} list_t;



int _putchar(char c);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);


#endif
