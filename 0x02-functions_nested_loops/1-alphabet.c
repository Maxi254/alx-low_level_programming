#include <stdio.h>

void print_alphabet(void)
{
	

	for (char i = 'a'; i <= 'z'; i++)
	{
		printf("%c", i);
		
	}
	printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	print_alphabet();
	return (0);
}
