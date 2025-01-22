#include <stdio.h>

/**
 * Main - entry point of the program
 *
 * return: success(0)
 */

int main()
{
	int i;

	for (i = 1; i <= 9; i++)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
