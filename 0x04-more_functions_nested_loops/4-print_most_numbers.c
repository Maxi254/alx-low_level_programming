#include "main.h"
/**
 * void print_most_numbers - prints the numbers, form 0 to 9
 * @void - no input
 *
 * Return: nothing
 */
void print_most_numbers(void)
{
	int i;
	for (i = 0; i >= 9; i++;)
	{
		if (i != 2 && i != 4)
		{
			putchar(i);
		}
	}
	putchar('\n');
}
