#include <stdlib.h>
#include "main.h"

/**
 * str_concat - joins two strings
 * @s1: first param
 * @s2: second param
 * Return: s1 + s2 joined
 */

char *str_concat(char *s1, char *s2)
{
	char *join;
	int a, ac;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	a = ac = 0;

	while (s1[a] != '\0')
		a++;
	while (s2[ac] != '\0')
		ac++;
	join = malloc(sizeof(char) * (a + ac + 1));

	if (join == NULL)
		return (NULL);
	a = ac = 0;
	while (s1[a] != '\0')
	{
		join[a] = s1[a];
		a++;
	}
	while (s2[ac] != '\0')
	{
		join[a] = s2[ac];
		a++, ac++;
	}
	join[a] = '\0';
	return (join);
}
