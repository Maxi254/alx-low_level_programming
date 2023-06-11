#include "main.h"
/**
 * _puts - prints a string followed by a \n
 * @str: pointer variable of type char
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
