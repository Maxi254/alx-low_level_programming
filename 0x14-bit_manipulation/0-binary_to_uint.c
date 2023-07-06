#include "main.h"

/**
 * binary_to_uint - changes bin no to unsigned int.
 * @b: binary.
 *
 * Return: unsigned int(succes)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int a;
	int lens, b_t;

	if (!b)
		return (0);

	a = 0;

	for (lens = 0; b[lens] != '\0'; lens++)
		;

	for (lens--, b_t = 1; lens >= 0; lens--, b_t *= 2)
	{
		if (b[lens] != '0' && b[lens] != '1')
		{
			return (0);
		}

		if (b[lens] & 1)
		{
			a += b_t;
		}
	}

	return (a);
}
