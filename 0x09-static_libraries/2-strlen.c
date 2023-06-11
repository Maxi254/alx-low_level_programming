#include "main.h"
/**
 * _strlen - counts char in a string
 * @s: Pointer to char type
 * Return: len
 */

int _strlen(char *s)
{
	int str = 0;

	while (*s != '\0')
	{
		str++;
		s++;
	}
	return (str);
}

