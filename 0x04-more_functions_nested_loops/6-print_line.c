#include "main.h"
/**
* print_line - program draws a straight line in the terminal.
* @n: print int
* @i: stores integer
*
* Return: return (0) Success
*/
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar (95);
		}

		_putchar ('\n');
	}
	else
	{
		_putchar ('\n');
	}
}
