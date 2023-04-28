#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* @print_char: function char argument
* @print_int: function int argument
* @print_float: function float argument
* @print_string: function string argument
* @print_all: function for all argument
* @arg: A list of arguments pointing to all
*/

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
* print_char: Prints a char.
* @arg: A list of arguments pointing to
*       the character to be printed.
*/

void print_char(va_list arg)
{
	char alphabet;

	alphabet = va_arg(arg, int);
	printf("%c", alphabet);
}

/**
* print_int: Prints an int.
* @arg: A list of arguments pointing to
*       the integer to be printed.
*/

void print_int(va_list arg)
{
	int number;

	number = va_arg(arg, int);
	printf("%d", number);
}

/**
* print_float: Prints a float.
* @arg: A list of arguments pointing to
*       the float to be printed.
*/

void print_float(va_list arg)
{
	float number;

	number = va_arg(arg, double);
	printf("%f", number);
}

/**
* print_string: Prints a string.
* @arg: A list of arguments pointing to
*       the string to be printed.
*/

void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
* print_all: Prints anything && a new line.
* @format: A string of characters representing the argument types.
* @...: A variable number of arguments to be printed.
*
* Description: Any argument not of type char, int, float,
*              or char * is ignored.
*              If a string argument is NULL, (nil) is printed instead.
*/

void print_all(const char * const format, ...)
{
	va_list args;
	int idx = 0, jdx = 0;
	char *separator = "";
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && (*(format + idx)))
	{
		jdx = 0;

		while (jdx < 4 && (*(format + idx) != *(funcs[jdx].symbol)))
			jdx++;

		if (jdx < 4)
		{
			printf("%s", separator);
			funcs[jdx].print(args);
			separator = ", ";
		}

		idx++;
	}

	printf("\n");

	va_end(args);
}
