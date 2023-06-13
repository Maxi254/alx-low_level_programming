#include <stdlib.h>
#include "main.h"
/**
 * argstostr - joins all  arguments of a program
 * @ac: first param
 * @av: second param
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int a, n, o = 0, l = 0;
	char *string;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (n = 0; av[a][n]; n++)
			l++;
	}
	l += ac;
	string = malloc(sizeof(char) * l + 1);
	if (string == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (n = 0; av[a][n]; n++)
		{
			string[o] = av[a][n];
			o++;
		}
		if (string[o] == '\0')
		{
			string[o++] = '\n';
		}
	}
	return (string);
}
