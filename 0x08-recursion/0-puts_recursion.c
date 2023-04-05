#include "main.h"

/**
* _puts_recursion - Program prints a string ff by a newline
* @s: Argument pointer to string to be printed
*
* Return: return nothing if base case
*/

void _puts_recursion(char *s)
{
/**	int idx = 0;
*
*	while (s[idx] != '\0')
*	{
*		_putchar(s[idx]);
*		idx++;
*	}
*	_putchar('\n');
*/
	if (*s == '\0')
	{
		_putchar('\n');
		return ;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
