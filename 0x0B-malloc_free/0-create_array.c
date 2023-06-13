#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars and initializes another char
 * @size: assigned char
 * @c: char to assign
 * Return: pointer to array and NULL(fail)
 */

char *create_array(unsigned int size, char c)
{
	char *string;
	unsigned int a;

	string = malloc(sizeof(char) * size);
	if (size == 0 || string == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < size; a++)
		string[a] = c;

	return (string);
}
