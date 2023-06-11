#include "main.h"
/**
 * _strcmp - compares two strings
 * s1: first arg
 * s2: second arg
 * Return: compared string
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0, ar = 0;

	while (1)
	{
		if (s1[a] == '\0' && s2[a] == '\0')
		{
			break;
		}
		else if (s1[a] == '\0')
		{
			ar = s2[a];
			break;
		}
		else if (s2[a] == '\0')
		{
			ar = s1[a];
			break;
		}
		else if (s1[a] != s2[a])
		{
			ar = s1[a] - s2[a];
			break;
		}
		else
		{
			a++;
		}
	}
	return (ar);
}
