#include "main.h"

/**
* _print_rev_recursion - Program prints a string in reverse order
* @s: Argument pointer to string to be printed
*
* Return: return nothing if base case
*/

void _print_rev_recursion(char *s)
{
	/* Establish a base case */
	if (*s != '\0')
	{
		/* Recursive call here */
		_print_rev_recursion(s + 1);

		/* prints characters here */
		_putchar(*s);
	}
}
