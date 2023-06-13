#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - copies to new memory space location
 * @str: char
 * Return: Always 0 (success)
 */

char *_strdup(char *str)
{
	char *haa;

	int a = 0, r = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[a] != '\0')
	{
		a++;
	}
	haa = malloc(sizeof(char) * (a + 1));
	if (haa == NULL)
	{
		return (NULL);
	}
	for (r = 0; str[r]; r++)
	{
		haa[r] = str[r];
	}
	return (haa);
}
