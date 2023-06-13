#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_numb - check for strings that are digits.
 * @str: array string
 * Return: Always 0 (Success)
 */

int check_numb(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - Prints name of program
 * @argc: Count args
 * @argv: Args
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int cot;
	int strtin;

	int sum = 0;

	cot = 1;

	while (cot < argc)
	{
		if (check_numb(argv[cot]))
		{
			strtin = atoi(argv[cot]);
			sum += strtin;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		cot++;
	}
	printf("%d\n", sum);
	return (0);
}
