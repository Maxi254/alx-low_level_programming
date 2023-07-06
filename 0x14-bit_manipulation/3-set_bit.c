#include "main.h"

/**
 * set_bit - sets the value of a bit to 1
 * @n: ptr of an unsigned long int.
 * @index: index of the bit.
 *
 * Return: 1 success, -1 error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	if (index > 63)
		return (-1);

	a = 1 << index;
	*n = (*n | a);

	return (1);
}
