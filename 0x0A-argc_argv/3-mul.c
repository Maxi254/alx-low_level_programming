#include <stdio.h>
#include <stdlib.h>


/**
 * main - prints the product of two
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if true, 1 if false
 */

int main(int argc, char *argv[])
{
	int k,ab;

	if (argc == 3)
	{
		k = atoi(argv[1]);
		ab = atoi(argv[2]);
		printf("%d\n", k * ab);
		return (0);
	}
	printf("Error\n");
	return (1);
}
