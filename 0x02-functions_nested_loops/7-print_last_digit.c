#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 *
 * @n: input number as an integer.
 *
 * Return: last digit.
 */
int print_last_digit(int n)
{
	int y = n % 10;

	if (y < 0)
	{
		y *= -1;
	}
	_putchar('0' + y);
	return (y);
}
