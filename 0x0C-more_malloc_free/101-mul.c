#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#define ERR_MSG "Error"

/**
 * is_digit - finds out if a string has a non digit
 * @s: string to be checked
 * Return: (0)
 */
int is_digit(char *s)
{
	int a = 0;
	
	while (s[a])
	{
		if (s[a] < '0' || s[a] > '9')
			return (0);
		a++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: success
 */
int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}

/**
 * errrors - handles errors
 */

void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two numberss
 * @argc: number of args
 * @argv: array or args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *s_1, *s_2;

	int leng1, leng2, leng, i, carry, digit1, digit2, *result, a = 0;

	s_1 = argv[1], s_2 = argv[2];
	if (argc != 3 || !isdigit(s_1) || !isidit(s_2))
		errors();
	leng1 = _strlen(s_1);
	leng2 = _strlen(s_2);
	leng = leng1 + leng2 + 1;
	result = malloc(sizeof(int) * leng);
	
	if (!result)
		return (1);
	for (leng1 = leng1 - 1; leng1 >= 0; leng1--)
	{
		digit1 = s_1[leng1] - '0';
		carry = 0;
		for (leng2 = strlen(s_2) - 1; leng2 >= 0; leng2--)
		{
			digit2 = s_2[leng2] - '0';
			carry += result[leng1 + leng2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}

		for (i = 0; i < leng - 1; i++)
		{
			if (result[i])
				a = 1;
			if (a)
				_putchar(result[i] + '0');
		}
		if (!a)
			_putchar('0');

		_putchar('\n');
		free(result);

		return (0);
	}
}

