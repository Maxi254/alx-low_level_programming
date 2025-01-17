#include <stdio.h>

/**
 * main - printing all single digit numbers of base 10 starting from 0.
 *
 * return: success(0)
 */

int main()
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}

	putchar('\n');

	return (0);
}
