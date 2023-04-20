#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* prints_strings - a func that prints strings
* @separator: string to be printed between strings
* @n: the num of strings passed to the function
* @...: a variable number of strings to be printed
*
* Description: separator is the string to be printed
* if separator is NULL, it is not printed.
* If one of the string is NULL, print (nil) instead.
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int index;

	va_start(strings, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(strings, char *);
	}

	if (str == NULL)
		printf("(nil)");

	else
	{
		printf("%s", str);
	}

	if (index != (n - 1) && separator != NULL)
	{
		printf("%s", separator);
}
printf("\n");

va_end(strings);
}
