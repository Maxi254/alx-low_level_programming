#include "main.h"
/**
 * _islower - looks for a lowercase character
 * @c: checks for alphabet
 * Return: 1 for lowercase and o for else
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
