#include "function_pointers.h"

/**
* array_iterator - Function executes a function as arg
* @array: Argument pointer holds array of integers
* @size: Argument variable holds size of array
* @action: Function with integer argument
*
* Return: Nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int idx;

	if (action != 0 && size >= 1 && array != 0)
	{
		for (idx = 0; idx < size; idx++)
			action(array[idx]);
	}
}
