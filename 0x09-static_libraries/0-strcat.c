#include "main.h"
/**
 * _strcat - links together two strings
 * @dest: string to be attached to 
 * @src: string to be joined to.
 * Return: A pointer to @dest
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, desti_len = 0;

	while (dest[index++])
	{
		desti_len++;
	}
	for (index = 0; src[index]; index++)
	{
		dest[desti_len++] = src[index];
	}
	return (dest);
}
