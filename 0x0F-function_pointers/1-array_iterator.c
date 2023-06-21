#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - function that excutes a function
 * @array: array
 * @size: number
 * @action: pointer
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
