#include <stdio.h>

/**
 * main - prints out digits 0-9 separated by ','
 *
 * return value: success(0)
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
