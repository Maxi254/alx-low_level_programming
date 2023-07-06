#include "main.h"

/**
 * clear_bit - sets value of bit to 0
 * @n: ptr of an unsigned long int.
 * @index: index of the bit
 * Return: 1 (succes), -1 (error).
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	if (index > 63)
		return (-1);

	a = 1 << index;

	if (*n & a)
		*n ^= a;

	return (1);
}
