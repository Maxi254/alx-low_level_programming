#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - finds out if digit is greater than or less than.
 *
 * Return: success(0)
 */

int main(void)
{
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;

	if (l > 5)
	{
		printf("Last digit of %d is greater than 5\n", l);
	}
	if (l == 0)
	{
		printf("Last digit of %d is 0 and is 0\n", l);
	}
	if (l < 6 && !0)
	{
		printf("Last digit of %d is less than 6 and not 0\n", l);
	}

	return (0);
}
