#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers, followed by \n.
 * @separator: string
 * @n: number of int
 * @...: numbers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nbr;
	unsigned int a;

	va_start(nbr, n);
	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(nbr, int));
		if (a != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(nbr);
}
