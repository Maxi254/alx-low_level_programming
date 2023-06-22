#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of its numbers
 * @n: Number
 * @...: A variable number
 * Return: sum of all params or O if n is 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list l;
	unsigned int a, sum = 0;

	va_start(l, n);
	for (a = 0; a < n; a++)
		sum = sum + va_arg(l, int);
	va_end(l);
	return (sum);
}
