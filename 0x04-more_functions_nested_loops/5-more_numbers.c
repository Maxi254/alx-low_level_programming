#include "main.h"
/**
 * void print_numbers - func that prints a certain group of numbers
 * @void - no input
 *
 * Return: 0 meaning success
 */
void more_numbers(void)
{
	int i,j;
	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
				putchar('1');
			putchar((j % 10) + '1');
		}
	}

	putchar('\n');
}
