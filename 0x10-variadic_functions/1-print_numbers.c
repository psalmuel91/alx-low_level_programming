#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - function prints numbers
* @n: Argument pointer variable holds integer
* @separator: Characters to separate number
* @...: Number of variables to be printed
*
* Return: return (num)
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int idx;

	va_start(num, n);

	for (idx = 0; idx < n; idx++)
	{
		printf("%d", va_arg(num, int));

		if (idx != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(num);
}
