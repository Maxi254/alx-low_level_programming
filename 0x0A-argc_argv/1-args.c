#include <stdio.h>

/**
 * main - prints number of arguments passed to it
 * @argc: number of arg
 * @argv: array of arg
 * Return: Success
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
