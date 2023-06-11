#include "main.h"

/**
 * _memset - fills a block with a particular memory
 * @s: memory address to be filled
 * @b: the wanted value
 * @n: number of bytes to be changed
 * Return: changed array with new value
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
