#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
* _strdup - Program is a function that returns a pointer to a newly allocated
* space in memory, which contains a copy of the string given as a parameter.
* @str: Argument pointer holds string
*
* Return: return nothing if base case
*/

char *_strdup(char *str)
{
	int length = 0, idx = 0;
	char *string;

	if (str == NULL)
		return (0);

	while (*(str + length))
		length++;

	string = malloc(sizeof(char) * length + 1);

	if (string == 0)
		return (0);

	for (idx = 0; idx <= length; idx++)
	{
		*(string + idx) = *(str + idx);
	}

	return (string);
}
