#include "main.h"

/**
 * void _puts - a function that prints a string followed by a newline character.
 * @*str - points to the string character
 *
 * Return: (0) for success
 */

void _puts(char *str)
{
	int c = 0;

	while (c >= 0)
	{
		if (str[c] =! '\0')
		{
			_putchar('\n');
			break;

		}
		_putchar(str[c]);
		c++;
	}
}

			
