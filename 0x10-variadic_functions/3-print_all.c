#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int a = 0;
	char *str, *spac = "";

	va_list lis;

	va_start(lis, format);

	if (format)
	{
		while (format[a])
		{
			switch (format[a])
			{
				case 'c':
					printf("%s%c", spac, va_arg(lis, int));
					break;
				case 'i':
					printf("%s%d", spac, va_arg(lis, int));
					break;
				case 'f':
					printf("%s%f", spac, va_arg(lis, double));
					break;
				case 's':
					str = va_arg(lis, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", spac, str);
					break;
				default:
					a++;
					continue;
			}
			spac = ", ";
			a++;
		}
	}
	printf("\n");
	va_end(lis);
}
