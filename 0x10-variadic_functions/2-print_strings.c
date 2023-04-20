#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - a func that prints strings
* @separator: string to be printed between strings
* @n: the num of strings passed to the function
* @...: a variable number of strings to be printed
*
* Description: separator is the string to be printed
* print_strings is a func that prints strings
* if separator is NULL, it is not printed.
* If one of the string is NULL, print (nil) instead.
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int i;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(strings);
}
