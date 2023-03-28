#include "main.h"
#include <stdio.h>

/**
* _strcpy - Program copies the string from src to destination pointed resp
* @dest: Argument variable pointer to destination
* @src: Argument variable pointer to source
*
* Return: return destination
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
