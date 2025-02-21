#include "main.h"

/**
 * _isalpha - checks character for upper and lowercase
 * @c: character being checked
 *
 * Return: 1 when program successful, 0 when it fails
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');


}
