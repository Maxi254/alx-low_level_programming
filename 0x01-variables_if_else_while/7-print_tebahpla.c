#include <stdio.h>
/**
 * main - entry point of the program
 *
 * return: success (0)
 */

int main()
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
