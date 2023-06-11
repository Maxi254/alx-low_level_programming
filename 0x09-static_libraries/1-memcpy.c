#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: storage memory
 * @src: memory where data is copied
 * @n: number of bytes
 * Return: memory that was copied
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int i = n;

	for (; a < i; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
