#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* array - Program defines a function that creates an array of integers
* @min: Argument variable holds integer
* @max: Argument variable holds integer
*
* Return: returns address
*/

int *array_range(int min, int max)
{
	int *memAddr;
	unsigned int idx;

	if (min > max)
		return (NULL);

	memAddr = malloc(sizeof(int) * (max - min + 1));
	if (memAddr == NULL)
		return (NULL);

	for (idx = 0; min <= max ; idx++)
	{
		mem[idx] = min;
		min++;
	}

	return (memAddr);
}
