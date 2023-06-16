#include <stdlib.h>
#include "main.h"
/**
 * _memset - fills memory with cont. byte.
 * @s: memory 
 * @b: char 
 * @n: n0 of times to be copied
 * Return: success
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int ab;

	for (ab = 0; ab < n; ab++)
	{
		s[ab] = b;
	}
	return (s);
}

/**
 * _calloc - allocates memory
 * @nmemb: first arg
 * @size: second arg
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptrb;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptrb = malloc(size * nmemb);
	if (ptrb == NULL)
	{
		return (NULL);
	}
	_memset(ptrb, 0, nmemb * size);
	return (ptrb);
}
