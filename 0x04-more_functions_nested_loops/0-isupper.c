#include "main.h"

/**
 * _isupper - function thats checks for upper case
 * @c - interger representing uppercase
 *
 * Return: 1 if c is uppercase and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 95)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
