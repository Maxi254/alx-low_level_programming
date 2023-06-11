#include "main.h"
/**
 * _isdigit - checks if the argument passed to it is a digit or not
 * @c: the argument passed to it should be of int type
 * Return: 1 
 */
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	else
		return (0);
}
