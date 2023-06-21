#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints its own opcodes of its main function
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int byt, a;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byt = atoi(argv[1]);
	if (byt < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (a = 0; a < byt; a++)
	{
		printf("%02hhx", *((char *)main + a));
		if (a < byt - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
