#include <stdio.h>

/**
 * main - entry point of the program
 *
 * return: success (0)
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'q' && i !=  'e')
		{
			putchar(i);
		}
	}
	
	putchar('\n');

	return(0);
}

