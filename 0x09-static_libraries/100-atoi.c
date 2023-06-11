#include "main.h"
/**
 * _atoi - converts a string into an integer.
 * @s: argument of type char
 * Return: (num * sign)
 */

int _atoi(char *s)
{
	char *tem;
	int si;
	unsigned int numb;

	tem = s;
	numb = 0;
	si = 1;
	while (*tem != '\0' && (*tem < '0' || *tem > '9'))
	{
		if (*tem == '-')
			si *= -1;
		tem++;
	}
	if (*tem != '\0')
	{
		do {
			numb = numb * 10 + (*tem - '0');
			tem++;
		} while (*tem >= '0' && *tem <= '9');
	}
	return (numb * si);
}
