#include "main.h"
#include <math.h>

/**
 * is_prime_number - finds out if an input is a prime number.
 * @n: input number.
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	int sq = sqrt(n);
	int i = 2;

	while (i <= sq)
	{
		if (n % i == 0)
		{
			return (0);
		}
		i++;
	}

	return (1);
}

