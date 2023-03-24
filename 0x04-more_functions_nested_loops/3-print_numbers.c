#include "main.h"
/**
* print_numbers - print numbers from 0 - 9 followed by a \n
* @void: returns nothing
*
* Return: return (0) Success
*/
void print_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		_putchar (i + '0');
		i++;
	}

	_putchar ('\n');
}
