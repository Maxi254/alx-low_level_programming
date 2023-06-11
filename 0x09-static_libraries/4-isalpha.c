#include "main.h"
/**
 * _isalpha - finds the alphabet
 * @c: takes the argument.
 * Return: 1 for success and 0 for none
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
