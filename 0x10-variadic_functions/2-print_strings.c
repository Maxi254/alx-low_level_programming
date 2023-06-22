#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings followd by \n
 * @separator: String to be printed
 * @n: number (strs)
 * @...: A variable number of strs
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strs;
	char *strs_ptr;
	unsigned int a;

	va_start(strs, n);
	for (a = 0; a < n; a++)
	{
		strs_ptr = va_arg(strs, char *);
		if (strs_ptr == NULL)
			printf("(nil)");
		else
			printf("%s", strs_ptr);

		if (a != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strs);
}
