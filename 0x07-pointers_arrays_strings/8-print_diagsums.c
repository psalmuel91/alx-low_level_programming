#include <stdio.h>
#include "main.h"

/**
* print_diagsums - Program is a function that prints the sum of the two diagonals of a 
* square matrix of integers.
* @a: Argument pointer to character board
* @size: Argument variable to size
* Return: return (0) success
*/

void print_diagsums(int *a, int size)
{
	int i = 0, sumDiag1 = 0, sumDiag2 = 0;

	while(i < size)
	{
		sumDiag1 += a[i];
		sumDiag2 += a[size - i - 1];
		a += size;
		i++;
	}

	printf("%d, ", sumDiag1);
	printf("%d\n", sumDiag2);
}
