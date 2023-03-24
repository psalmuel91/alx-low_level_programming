#include "main.h"
/**
* print_square - program prints a square
*@square: argument holds integer for square
*
* Return: return (0) Success
*/

void print_square(int square)
{
	int i;
	int k;

	if (square > 0)
	{
		for (i = 0; i < square; i++)
		{
			for (k = 0; k < square; k++)
			{
				_putchar (35);
			}
			_putchar ('\n');

		}

	}
	else
	{
		_putchar ('\n');
	}
}
