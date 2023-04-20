#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings: Prints strings ffd a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 *
 * Description: If separator is NULL, don't print it
 *              If one of the strings if NULL, (nil)
 *				is printed instead.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	char *str;
	unsigned int idx;

	va_start(string, n);

	for (idx = 0; idx < n; idx++)
	{
		str = va_arg(string, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (idx != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(string);
}
