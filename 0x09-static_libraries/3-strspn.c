#include "main.h"
/**
 * _strspn - entry point
 * @s: input
 * @accept: input
 * Return: Always 0 success
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	int n;

	while (*s)
	{
		for (n = 0; accept[n]; n++)
		{
			if (*s == accept[n])
			{
				a++;
				break;
			}
			else if (accept[n + 1] == '\0')
				return (a);
		}
		s++;
	}
	return (a);
}

