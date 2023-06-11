#include "main.h"
/**
 * _strncat - joins two strings together
 * @dest: first argument
 * @src: second argument
 * @n: third parameter
 * Return: the joined string
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, desti_len = 0;

	while (dest[index++])
	{
		desti_len++;
	}
	
	for (index = 0; src[index] && index < n; index++)
	{
		dest[desti_len++] = src[index];
	}
	return (dest);
}
