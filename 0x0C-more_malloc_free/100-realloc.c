#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _realloc - Program defines a function that reallocate memory
* @old_size: Argument variable holds integer
* @new_size: Argument variable holds integer
* @ptr: Argument pointer variable holds address
*
* Return: returns address
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *strAddr1, *strAddr2;
	unsigned int idx = 0;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		strAddr1 = malloc(new_size);
		if (strAddr1 == NULL)
			return (NULL);
		return (strAddr1);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	strAddr1 = malloc(new_size);
	if (strAddr1 == 0)
		return (NULL);
	strAddr2 = ptr;

	while (idx < old_size)
	{
		strAddr1[idx] = strAddr2[idx];
		idx++;
	}

	free(ptr);
	return (strAddr1);
}
