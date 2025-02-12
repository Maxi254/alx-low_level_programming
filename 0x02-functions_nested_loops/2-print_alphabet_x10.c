#include <stdio.h>
#include <main.h>

void print_alphabet_x10(void)
{
	int i, char x;
	for (int i = 0; i <= 10; i++)
	{
		for (char x = 'a'; x <= 'z'; x++)
		{
			printf("%c", x);
		}
		printf("\n");
	}
}


/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	print_alphabet_x10();
	return (0);
}
