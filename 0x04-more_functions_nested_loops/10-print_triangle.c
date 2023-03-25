#include "main.h"

/**
* print_triangle - program prints triangle
* @size: argument holds triangle size
*
* Return: return (0) Success
*/

void print_triangle(int size)
{
	int w;
	int x;
	int y;
	int z;

	if (size > 0)
	{
		y = size - 1;
		for (w = 0; w < size ; w++)
		{
			for (x = y; x > 0 ; x--)
			{
				_putchar (' ');
			}

			for (z = 0; z <= w; z++)
			{
				_putchar (35);
			}

			y--;

			_putchar ('\n');

		}

	}
	else
	{
		_putchar ('\n');
	}
}
