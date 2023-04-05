#include "main.h"

/**
* _puts_recursion - Program prints a string ff by a newline
* @s: Argument pointer to string to be printed
*
* Return: return nothing if base case
*/

void _puts_recursion(char *s)
{
	/* Establish a base case */
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	/* prints characters here */
	_putchar(*s);

	/* Recursive call here */
	_puts_recursion(s + 1);
}
