#include "main.h"

/**
 * divisor_operation - returns the natural square root of a number.
 * @n: input number.
 * @a: iterator.
 * Return: square root or -1.
 */

int divisor_operation(int n, int a)
{
	if (a % (n / a) == 0)
	{
		if (a * (n / a) == n)
			return (a);
		else
			return (-1);
	}
	return (0 + divisor_operation(n, a + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input number
 * Return: natura square root.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (divisor_operation(n, 2));
}
