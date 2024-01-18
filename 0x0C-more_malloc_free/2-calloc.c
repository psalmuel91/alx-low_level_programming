#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _calloc - Program defines a function that allocates memory
* @size: Argument variable holds integer
* @nmemb: Argument variable holds integer
*
* Return: returns address
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memAddr;
	unsigned int idx;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memAddr = malloc(nmemb * size);
	if (memAddr == NULL)
		return (NULL);

	for (idx = 0; idx < nmemb * size; idx++)
		memAddr[idx] = 0;

	return (memAddr);

}
