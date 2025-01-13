#include <stdio.h>

/**
 * main - entry point of the progaram
 *
 * Return: success(0)
 */

int main(void)
{
	char let;

	for(let = 'a'; let <= 'z'; let++)
	{
		putchar(let);
	}
	putchar('\n');

	return(0);
}
