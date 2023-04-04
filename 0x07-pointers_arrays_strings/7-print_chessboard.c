#include "main.h"

/**
* print_chessboard - Program is a function that prints the sum of the two diagonals of a 
* square matrix of integers.
* @a: Argument pointer to character board
* Return: return (0) success
*/

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}

		_putchar('\n');
	}

}
