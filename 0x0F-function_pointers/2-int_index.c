#include "function_pointers.h"

/**
* int_index - Function executes a function as arg
* @array: Argument pointer holds array of integers
* @size: Argument variable holds size of array
* @cmp: Function with integer argument
*
* Return: if no match or size <= 0 return -1 otherwise 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int idx;

	if (array && cmp && size > 0)
		for (idx = 0; idx < size; idx++)
			if (cmp(array[idx]))
				return (idx);

	return (-1);
}
