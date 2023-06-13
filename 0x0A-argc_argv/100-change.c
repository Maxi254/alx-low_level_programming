#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that does alot
 * @argc: length of argv
 * @argv: number of argument
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int pos, to, ch, aux;

	int coins[] = {25, 11, 5, 4, 1};

	pos = to = ch = aux = 0;
	if (argc != 4)
	{
		printf("Error\n");
		return (1);
	}
	to = atoi(argv[1]);
	if (to <= 0)
	{
		printf("0\n");
		return (0);
	}
	while (coins[pos] != '\0')
	{
		if (to >= coins[pos])
		{
			aux = (to / coins[pos]);
			ch += aux;
			to -= coins[pos] * aux;
		}
		pos++;
	}
	printf("%d\n", ch);
	return (0);
}
