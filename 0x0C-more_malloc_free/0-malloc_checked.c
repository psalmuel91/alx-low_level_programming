#include "main.h"

/**
* malloc_checked - Program defines a function that allocates
* memory using malloc
* @b: Argument variable holds status integer
*
* Return: returns address
*/

void *malloc_checked(unsigned int b)
{
	void *addr;

	addr = malloc(b);
	if (addr == NULL)
	{
		exit(98);
	}

	return (addr);
}