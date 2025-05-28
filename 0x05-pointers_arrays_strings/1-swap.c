#include "main.h"

/**
 * void swap_int - swaps the value of two integers
 * @a is swapped with @b
 *
 * Return: (0) for success
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
