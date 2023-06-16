#include "main.h"
#include <stdio.h>
/**
 * _realloc - reallocates memory blocs
 * @ptr: first arg
 * @old_size: second arg
 * @new_size: third arg
 * Return: Pointer to new rellocation
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *apt;
	unsigned int c;

	if (new_size == old_size)
		return (ptr);
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		apt = malloc(new_size);
		if (apt == NULL)
			return (NULL);
	}
	if (new_size > old_size && (ptr != NULL))
	{
		apt = malloc(new_size);
		if (apt == NULL)
			return (apt);
		for (c = 0; c < old_size; c++)
			apt[c] = *((char *)ptr + 1);
		free(ptr);
	}
	return (apt);
}
