#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - function returns the sum of para
* @n: Argument variable holds integer
* @...: Variables
*
* Return: return sum
*/


int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	unsigned int idx, sum = 0;

	va_start(num, n);

	for (idx = 0; idx < n; idx++)
		sum += va_arg(num, int);

	va_end(num);

	return (sum);
}
