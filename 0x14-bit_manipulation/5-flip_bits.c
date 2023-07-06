#include "main.h"

/**
 * flip_bits - returns number of bits wanted to flip for another no
 * @n: num 1
 * @m: num 2
 *
 * Return: (success)
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int fp;

	for (fp = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			fp++;
	}

	return (fp);
}
