#include <stdlib.h>
#include "main.h"

/**
* create_array - Program creates an array of chars and init it with a char
* @size: Argument variable holds array size
* @c: Argument variable holds array
*
* Return: return nothing if base case
*/

char *create_array(unsigned int size, char c)
{
	unsigned int idx = 0;
	char *memAdd;

	if (size == 0)
		return (NULL);

	memAdd = malloc(size * sizeof(char));

	if (memAdd == NULL)
		return (NULL);

	for (; idx < size; idx++)
		memAdd[idx] = c;

	return (memAdd);
}
