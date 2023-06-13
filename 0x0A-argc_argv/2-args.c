#include <stdio.h>

/**
 * main - prints all arguments it gets
 * @argc: number of args
 * @argv: array of args
 * Return: success
 */

int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
