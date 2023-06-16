#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: arg
 * Return: nothing
 */

void *malloc_checked(unsigned int b)
{
	void *ptrb = malloc(b);

	if (ptrb == NULL)
	{
		exit(98);
		return (ptrb);
	}
}
