#include "main.h"
/**
 * _strcpy - copies the string pointed to by src
 * @dest: pointer variable 
 * @src: pointer variable
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int lens = 0;

	while (*(src + lens) != '\0')
	{
		*(dest + lens) = *(src + lens);
		lens++;
	}
	*(dest + lens) = '\0';
	return (dest);
}
