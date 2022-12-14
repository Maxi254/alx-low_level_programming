#include <stdio.h>

/**
 * print_to _98 - Prints all neutral numbers from n to 98.
 *
 * @n: input number.
 *
 * Return: no return.
 */
void print_ to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	else if (n < 980)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	printf("%d\n", n);
}
