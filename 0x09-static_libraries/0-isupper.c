#include "main.h"

/**
 * _isupper - looks for uppercase alphabetical letter
 * @c: gets in an argument of integer
 * Return: 1 for uppercase else 0
 */

int _isupper(int b)
{
	if (b >= 'A' && b <= 'Z')
		return (1);
	else
		return (0);
}

