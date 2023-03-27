#include "main.h"
/**
* print_rev - Program prints a string in reverse order
* @s: Argument variable pointer to s
*
* Return: return nothing on success
*/

void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	for (i = i - 1 ; i >= 0; i--)
	{
		_putchar (s[i]);
	}

	_putchar ('\n');
}
